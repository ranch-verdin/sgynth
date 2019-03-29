#CXXFLAGS='-O3 -std=c++11' CXX=/home/rick/git_checkouts/rpi-tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64/bin/arm-linux-gnueabihf-g++ faust2supercollider -synthdef ./faust_src/stringthang.dsp 

# OPTIONS=""
# faust -i -a supercollider.cpp -xml $OPTIONS faust_src/snarf.dsp -o ./ugen_build/snarf.cpp
# mv faust_src/snarf.dsp.xml ugen_build
# faust2sc --prefix="" --synthdef ugen_build/snarf.dsp.xml > ugen_build/snarf.sc

# (on pi)
# g++ -O3 -I/usr/include/SuperCollider/plugin_interface -I/usr/include/SuperCollider/common/ -Dmydsp=snarf -o snarf.so -DSC_LINUX $DNDEBUG -shared -fPIC snarf.cpp

FAUST_GCC_OPTS="-std=c++11 -O3 -mcpu=cortex-a53 -mfpu=neon-fp-armv8 -mfloat-abi=hard -funsafe-math-optimizations -ffast-math"

CXXFLAGS="$FAUST_GCC_OPTS" CXX=/home/rick/git_checkouts/rpi-tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64/bin/arm-linux-gnueabihf-g++ faust2supercollider -synthdef ./faust_src/*.dsp
rm -r norns_ugens
mkdir norns_ugens
mv faust_src/*.s* norns_ugens


faust2supercollider -synthdef ./faust_src/*.dsp
rm -r native_ugens
mkdir native_ugens
mv faust_src/*.s* native_ugens
