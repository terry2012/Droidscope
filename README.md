# README
A docker file to build droidscope environment  
## Host environment:  
* android-5.0.0_r2  
* goldfish3.4  
* docker  
* Please find more instructions here:  
* https://source.android.com/setup/build/downloading  
 https://github.com/enlighten5/android_build  

## Steps to run Droidscope in docker:
### 1.Build the docker image
`docker build --network=host -t droidscope /path/to/the/dockerfile`
### 2.Search the created image:
`sudo docker image ls`
and copy that IMAGE ID
### 3.Start the docker image:
`sudo docker run -it -e DISPLAY -v /PATH/TO/EXTERNAL:/home/developer/android_source/external -v /PATH/TO/PREBUILTS:/home/developer/android_source/prebuilts -v /PATH/TO/OUT:/home/developer/android_source/out -v /PATH/TO/IMAGE:/home/developer/images -v /tmp/.X11-unix:/tmp/.X11-unix -v $HOME/.Xauthority:/home/developer/.Xauthority --net=host IMAGE_ID`
### 4.Build Droidscope  
`cp -a /home/developer/Droidscope/droidscope/ /home/developer/android_source/external/`  
`cd /home/developer/android_source/external/droidscope/`  
`sudo ./android-configure.sh`  
`sudo make -j4`  

### 5.Start Droidscope in docker container:
`./startDroidScope.sh`
### 6.Use `tab` to list the supported commands  
eg. command `ps` to list the running process
## Steps to use DroidUnpack
### 1. Build unpacker
`./condigure --decaf-path=/<PATH_TO_DROIDSCOPE>/ --target=android` then `make`
### 2. Load DroidUnpack in Droidscope
`load_plugin DECAF_plugin/DroidUnpack/libunpacker.so`  
### 3. Run cmd
`do_hookapitests procname`
