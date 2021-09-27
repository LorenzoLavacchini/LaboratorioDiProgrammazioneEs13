cmake_minimum_required(VERSION 3.16)
project(LaboratorioDiProgrammazioneEs13)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(Test/lib/googletest-master)
include_directories(Test/lib/googletest-master/googletest/include)
include_directories(Test/lib/googletest-master/googlemock/include)


add_executable(LaboratorioDiProgrammazioneEs13 main.cpp ImportantNotesCollection.cpp ImportantNotesCollectionView.cpp Note.cpp
        NotesCollection.cpp NotesCollectionView.cpp SpecificNotesCollection.cpp SpecificNotesCollectionView.cpp Subject.cpp Collection.cpp
        Collection.h ImportantNotesCollection.h ImportantNotesCollectionView.h Note.h NotesCollection.h
        NotesCollectionView.h Observer.h SpecificNotesCollection.h SpecificNotesCollectionView.h Subject.h Test/NoteTest.cpp
        Test/ImportantNotesCollectionTest.cpp
        Test/NotesCollectionTest.cpp Test/SpecificNotesCollectionTest.cpp Test/ImportantNotesCollectionViewTest.cpp
        Test/NotesCollectionViewTest.cpp Test/SpecificNotesCollectionViewTest.cpp)
target_link_libraries(LaboratorioDiProgrammazioneEs13 gtest gtest_main)