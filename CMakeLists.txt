cmake_minimum_required(VERSION 3.10)
project(SmartFlashcards)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

# Main program
add_executable(SmartFlashcards
        src/main.cpp
        src/flashcard.cpp
        src/flashcard_manager.cpp
)

# -----------------------------
# Unit Test 1 (Checkpoint 1 test)
# -----------------------------
add_executable(test_feature
        tests/test_feature.cpp
        src/flashcard.cpp
        src/flashcard_manager.cpp
)
target_include_directories(test_feature PRIVATE include)

# -----------------------------
# Unit Test 2 (Checkpoint 2 tests)
# -----------------------------
add_executable(test_review
        tests/test_review.cpp
        src/flashcard.cpp
        src/flashcard_manager.cpp
)
target_include_directories(test_review PRIVATE include)

enable_testing()
add_test(NAME FeatureTests COMMAND test_feature)
add_test(NAME ReviewTests COMMAND test_review)
