cmake_minimum_required(VERSION 3.10)
project(StatePattern)
project(StatePatternTest)

set(INSTALL_GTEST OFF)
add_subdirectory( googletest )
include_directories( ${PROJECT_SOURCE_DIR}/googletest/googletest/include/ )

set(SOURCE_FILES MusicPlayer.cpp MusicPlayerState.cpp PausedState.cpp PlayingState.cpp
    StoppedState.cpp MusicPlayerTest.cpp)

add_executable(StatePattern ${SOURCE_FILES})

add_executable(StatePatternTest StatePatternTest.cpp)
target_link_libraries(StatePatternTest gtest pthread) # add pthread to prevent cmake warnings
