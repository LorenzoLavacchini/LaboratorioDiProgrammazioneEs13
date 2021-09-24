cmake_minimum_required(VERSION 3.17)
project(LaboratorioDiProgrammazioneEs13)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest)
include_directories(lib/googletest)


add_executable(ImportantNotesCollection.cpp ImportantNotesCollectionView.cpp Note.cpp
        NotesCollection.cpp NotesCollectionView.cpp SpecificNotesCollection.cpp SpecificNotesCollectionView.cpp Subject.cpp Collection.cpp
        Collection.h ImportantNotesCollection.h ImportantNotesCollectionView.h Note.h NotesCollection.h
        NotesCollectionView.h Observer.h SpecificNotesCollection.h SpecificNotesCollectionView.h Subject.h)
target_link_libraries(LaboratorioDiProgrammazioneEs13 gtest gtest_main)