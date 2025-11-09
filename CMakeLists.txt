cmake_minimum_required(VERSION 3.10)
project(SmartFlashcards)
set(CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

set(SOURCES
    src/main.cpp
    # src/flashcard.cpp
    # src/flashcard_manager.cpp
)
add_executable(SmartFlashcards ${SOURCES})
