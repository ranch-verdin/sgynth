#include "faustglue.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <err.h>
#include <errno.h>
#include <error.h>

void testopenBox(UIGlue *ui, char *boxName) {
  strcpy(ui->paramNameStack[ui->paramNameStackIdx], boxName);
  ui->paramNameStackIdx++;
}

void testAddAbsParam(UIGlue *ui, char *paramName, FAUSTFLOAT *param,
		  FAUSTFLOAT init, FAUSTFLOAT min, FAUSTFLOAT max, FAUSTFLOAT increment) {
  strcpy(ui->faustParam[ui->faustParamIdx].name, paramName);
  ui->faustParam[ui->faustParamIdx].param = param;
  ui->faustParam[ui->faustParamIdx].init = init;
  ui->faustParam[ui->faustParamIdx].min = min;
  ui->faustParam[ui->faustParamIdx].max = max;
  ui->faustParam[ui->faustParamIdx].increment = increment;

  *param = init;
  ui->faustParamIdx++;
}

void testaddParam(UIGlue *ui, char *paramName, FAUSTFLOAT *param,
		  FAUSTFLOAT init, FAUSTFLOAT min, FAUSTFLOAT max, FAUSTFLOAT increment) {
  int i;
  char *destString = ui->faustParam[ui->faustParamIdx].name;

  strcpy(destString, "/");
  for(i=0; i < ui->paramNameStackIdx; i++) {
    strcat(destString, ui->paramNameStack[i]);
    strcat(destString, "/");
  }
  strcat(destString, paramName);
  for(i=0; i < strlen(destString); i++) {
    if (destString[i] == ' ') {
      destString[i] = '_';
    }
  }
  testAddAbsParam(ui, destString, param, init, min, max, increment);
}

void testaddButton(struct UIGlue *uiInterface, char *buttonName, FAUSTFLOAT *param) {
  testaddParam(uiInterface, buttonName, param, 0, 0, 1, 1);
}

void addDuplicateParam(UIGlue *ui, char *paramName, FAUSTFLOAT *param) {
  int i;
  for(i=0; i < ui->faustParamIdx; i++) {
    if(strcmp(ui->faustParam[i].name, paramName) == 0) {
      testAddAbsParam(ui, ui->faustParam[i].name,
		      param,
		      ui->faustParam[i].init,
		      ui->faustParam[i].min,
		      ui->faustParam[i].max,
		      ui->faustParam[i].increment);
      return;
    }
  }
  warn("Couldn't find param: '%s' when trying to set param with that name\n", paramName);
}

FAUSTFLOAT *testFindParam (UIGlue *ui, char *paramName) {
  int i, nParams=0;
  for(i=0; i < ui->faustParamIdx; i++) {
    if(strcmp(ui->faustParam[i].name, paramName) == 0) {
      return ui->faustParam[i].param;
      nParams++;
    }
  }
  if (nParams == 0) {
    warn("Couldn't find param: '%s' when trying to set param with that name\n", paramName);
  }
  else if (nParams > 1) {
    warn("There were %d params named: '%s', so setting them all\n", nParams, paramName);
  }
}

void testSetParam (UIGlue *ui, char *paramName, FAUSTFLOAT newValue) {
  int i, nParams=0;
  for(i=0; i < ui->faustParamIdx; i++) {
    if(strcmp(ui->faustParam[i].name, paramName) == 0) {
      *(ui->faustParam[i].param) = newValue;
      nParams++;
    }
  }
  if (nParams == 0) {
    warn("Couldn't find param: '%s' when trying to set param with that name\n", paramName);
  }
  else if (nParams > 1) {
    warn("There were %d params named: '%s', so setting them all\n", nParams, paramName);
  }
}

void testaddReadout(UIGlue *ui, char *sliderName, FAUSTFLOAT *param,
		    FAUSTFLOAT min, FAUSTFLOAT max) {
}

void testcloseBox(UIGlue  *ui) {
  ui->paramNameStackIdx--;
}

void testdeclare(struct UIGlue *ui, FAUSTFLOAT *param, char *s, char *s2) {
}

void initUIGlue (UIGlue *ui) {
  ui->uiInterface = ui;
  ui->openBox = testopenBox;
  ui->openHorizontalBox = testopenBox;
  ui->openVerticalBox = testopenBox;
  ui->openTabBox = testopenBox;
  ui->addParam = testaddParam;
  ui->addVerticalSlider = testaddParam;
  ui->addHorizontalSlider = testaddParam;
  ui->addVerticalBargraph = testaddReadout;
  ui->addHorizontalBargraph = testaddReadout;
  ui->addButton = testaddButton;
  ui->closeBox = testcloseBox;
  ui->paramNameStackIdx = 0;
  ui->faustParamIdx = 0;
  ui->declare = testdeclare;
}

int load_params_from_file (UIGlue *ui, const char *paramFilename) {
  FILE *paramFile;
  int nParams = 0;
  if(strcmp(paramFilename, "-")) {
    paramFile = fopen(paramFilename, "rb");
  }
  else {
    paramFile = stdin;
  }
  if (paramFile == NULL) {
    error(1, errno, "could not read param file: %s\n", paramFilename);
  }
  else {
    char param[PARAM_NAMESTRING_MAX];
    float value;
    while (fscanf(paramFile, "%s %f", param, &value) != EOF) {
      nParams++;
      warn("Read param %s=%f from %s\n", param, value, paramFilename);
      testSetParam(ui, param, value);
    }
    fclose(paramFile);
  }
  return nParams;
}

int save_params_to_file (UIGlue *ui, const char *paramFilename) {
  FILE *paramFile;
  int i;
  if(strcmp(paramFilename, "-")) {
    paramFile = fopen(paramFilename, "w");
  }
  else {
    paramFile = stdout;
  }
  if (paramFile == NULL) {
    error(1, errno, "could not read param file: %s\n", paramFilename);
  }
  else {
    for(i=0; i < ui->faustParamIdx; i++) {
      fprintf(paramFile, "%s %f\n", ui->faustParam[i].name, *ui->faustParam[i].param);
    }
    fclose(paramFile);
  }
  return i;
}
