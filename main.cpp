#include <iostream>
#include "Note.h"
#include "NotesCollection.h"
#include "NotesCollectionView.h"
#include "ImportantNotesCollectionView.h"
#include "SpecificNotesCollectionView.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
