cmake_minimum_required(VERSION 3.10)
project(FlaxProject)

set(CMAKE_CXX_STANDARD 11)

add_executable(FlaxProject main.cpp voice_recognition.cpp emotion_analysis.cpp api_communication.cpp text_to_speech.cpp)
