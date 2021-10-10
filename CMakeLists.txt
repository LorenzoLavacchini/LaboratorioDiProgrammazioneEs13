cmake_minimum_required(VERSION 3.16)
project(LaboratorioDiProgrammazioneEs13)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(Test/lib/googletest-master)
include_directories(Test/lib/googletest-master/googletest/include)
include_directories(Test/lib/googletest-master/googlemock/include)


add_executable(LaboratorioDiProgrammazioneEs13 main.cpp ImportantNotesCollectionView.cpp Note.cpp
        NotesCollection.cpp NotesCollectionView.cpp SpecificNotesCollectionView.cpp Collection.cpp
        Collection.h ImportantNotesCollectionView.h Note.h NotesCollection.h
        NotesCollectionView.h Observer.h SpecificNotesCollectionView.h Subject.h Test/NoteTest.cpp
        Test/NotesCollectionTest.cpp Test/ImportantNotesCollectionViewTest.cpp
        Test/NotesCollectionViewTest.cpp Test/SpecificNotesCollectionViewTest.cpp)
target_link_libraries(LaboratorioDiProgrammazioneEs13 gtest gtest_main)