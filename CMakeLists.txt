cmake_minimum_required(VERSION 3.17)
project(LaboratorioDiProgrammazioneEs13)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(test)
set(SOURCE_FILES ImportantNotesCollection.cpp ImportantNotesCollectionView.cpp Note.cpp
        NotesCollection.cpp NotesCollectionView.cpp SpecificNotesCollection.cpp SpecificNotesCollectionView.cpp Subject.cpp Collection.cpp
        Collection.h ImportantNotesCollection.h ImportantNotesCollectionView.h Note.h NotesCollection.h
        NotesCollectionView.h Observer.h SpecificNotesCollection.h SpecificNotesCollectionView.h Subject.h)

add_executable(LaboratorioDiProgrammazioneEs13 main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(LaboratorioDiProgrammazioneEs13 core)
