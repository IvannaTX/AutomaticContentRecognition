cmake_minimum_required(VERSION 3.10)
project(MyACRProject)

set(CMAKE_CXX_STANDARD 17)

# Specify the path to FFmpeg
set(FFMPEG_DIR "/opt/homebrew")

# Find FFmpeg include files
find_path(FFMPEG_INCLUDE_DIRS
    NAMES avformat.h avcodec.h avutil.h
    PATHS ${FFMPEG_DIR}/include ${FFMPEG_DIR}/include/libavformat ${FFMPEG_DIR}/include/libavcodec ${FFMPEG_DIR}/include/libavutil
)

# Find FFmpeg libraries
find_library(FFMPEG_LIBRARIES
    NAMES avformat avcodec avutil
    PATHS ${FFMPEG_DIR}/lib
)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(FFmpeg REQUIRED_VARS FFMPEG_LIBRARIES FFMPEG_INCLUDE_DIRS)

# Include directories
include_directories(${FFMPEG_INCLUDE_DIRS})

# Add your executable
add_executable(AutomaticContentRecognition src/main.cpp src/FingerPrinting/Audio/audioFingerPrinting.cpp)

# Link libraries
target_link_libraries(AutomaticContentRecognition ${FFMPEG_LIBRARIES})
