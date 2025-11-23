cmake_minimum_required(VERSION 3.10)
project(SmartFlashcards)
set(CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)
#---- Main program sources

set(SOURCES
        src/main.cpp
        src/flashcard.cpp
        src/flashcard_manager.cpp
)
add_executable(SmartFlashcards ${SOURCES})

#---- Test setup
enable_testing()

add_executable(test_feature
    tests/test_feature.cpp
     src/flashcard.cpp
      src/flashcard_manager.cpp
)

target_include_directories(test_feature PRIVATE include)

add_test(NAME FeatureTests COMMAND test_feature)
