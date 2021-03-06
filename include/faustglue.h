#ifndef FAUST_GLUE_H
#define FAUST_GLUE_H
#include "engineglue.h"

int param_handler(const char *path, const char *types, lo_arg ** argv,
		  int argc, void *data, void *user_data);

#define FAUSTFLOAT float

typedef struct {
  void (*declare)(int mInt, char *meta, char *moremETA);
  int metaInterface;
} MetaGlue;

#define PARAM_DEPTH_MAX 100
#define PARAM_NAMESTRING_MAX 100
#define PARAM_N_MAX 500

typedef struct UIGlue {
  struct UIGlue *uiInterface;
  struct engineUI_t *engineUI;
  void (*openBox)(struct UIGlue *uiInterface, char *boxName);
  void (*openHorizontalBox)(struct UIGlue *uiInterface, char *boxName);
  void (*openVerticalBox)(struct UIGlue *uiInterface, char *boxName);
  void (*openTabBox)(struct UIGlue *uiInterface, char *boxName);
  void (*addParam)(struct UIGlue *uiInterface, char *sliderName, FAUSTFLOAT *param,
		   FAUSTFLOAT init, FAUSTFLOAT min, FAUSTFLOAT max, FAUSTFLOAT increment);
  void (*addVerticalSlider)(struct UIGlue *uiInterface, char *sliderName, FAUSTFLOAT *param,
			    FAUSTFLOAT init, FAUSTFLOAT min, FAUSTFLOAT max, FAUSTFLOAT increment);
  void (*addHorizontalSlider)(struct UIGlue *uiInterface, char *sliderName, FAUSTFLOAT *param,
			      FAUSTFLOAT init, FAUSTFLOAT min, FAUSTFLOAT max, FAUSTFLOAT increment);
  void (*addButton)(struct UIGlue *uiInterface, char *buttonName, FAUSTFLOAT *param);
  void (*addVerticalBargraph)(struct UIGlue *uiInterface, char *sliderName, FAUSTFLOAT *param,
			      FAUSTFLOAT min, FAUSTFLOAT max);
  void (*addHorizontalBargraph)(struct UIGlue *uiInterface, char *sliderName, FAUSTFLOAT *param,
				FAUSTFLOAT min, FAUSTFLOAT max);
  void (*closeBox)(struct UIGlue *uiInterface);
  void (*declare)(struct UIGlue *uiInterface, FAUSTFLOAT *param, char *s, char *s2);

  char paramNameStack[PARAM_DEPTH_MAX][PARAM_NAMESTRING_MAX];
  int paramNameStackIdx;

  volatile float *triggers[PARAM_N_MAX];
  int n_triggers;

} UIGlue;
void addDuplicateParam(UIGlue *ui, char *paramName, FAUSTFLOAT *param);
void testSetParam (UIGlue *ui, char *paramName, FAUSTFLOAT newValue);
volatile FAUSTFLOAT *testFindParam (UIGlue *ui, char *paramName);
void initUIGlue (UIGlue *ui, struct engineUI_t *engineUI);
void resetUIGlue(UIGlue *ui);

int load_params_from_file (UIGlue *ui, const char *paramFilename);
int save_params_to_file (UIGlue *ui, const char *paramFilename);

#endif
