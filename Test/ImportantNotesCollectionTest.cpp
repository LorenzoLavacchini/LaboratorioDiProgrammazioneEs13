//
// Created by lorenzo on 25/09/2021.
//

#include <gtest/gtest.h>
#include "../ImportantNotesCollection.h"
#include "../ImportantNotesCollectionView.h"
#include "../Note.h"

class FixtureImportantNotesCollection:public ::testing::Test{
public:
    ImportantNotesCollection importantNotesCollection;
};

TEST_F(FixtureImportantNotesCollection, addNote){
    Note primaNota("prima nota","appunti di informatica",false);
    importantNotesCollection.addNote(&primaNota);
    ASSERT_EQ(1,importantNotesCollection.getListSize());
}

TEST_F(FixtureImportantNotesCollection, removeNote) {
    Note primaNota("prima nota", "appunti di informatica", false);
    Note secondaNota("seconda nota", "appunti di matematica", true);
    importantNotesCollection.addNote(&primaNota);
    importantNotesCollection.addNote(&secondaNota);

    ASSERT_EQ(2, importantNotesCollection.getListSize());

    //Provo a rimuovere dalla lista una nota non bloccata
    importantNotesCollection.removeNote(&primaNota);
    ASSERT_EQ(1, importantNotesCollection.getListSize());

    //Provo a rimuovere dalla lista una nota bloccata
    importantNotesCollection.removeNote(&secondaNota);
    ASSERT_EQ(1, importantNotesCollection.getListSize());
}

TEST_F(FixtureImportantNotesCollection, addObserver){
    ImportantNotesCollectionView importantNotesCollectionView(&importantNotesCollection);
    ASSERT_EQ(1,importantNotesCollection.getNumObservers());
}

TEST_F(FixtureImportantNotesCollection, removeObserver){
    ImportantNotesCollectionView importantNotesCollectionView(&importantNotesCollection);
    importantNotesCollection.removeObserver(&importantNotesCollectionView);
    ASSERT_EQ(0,importantNotesCollection.getNumObservers());
}

TEST_F(FixtureImportantNotesCollection, notifyObservers){
    ImportantNotesCollectionView importantNotesCollectionView(&importantNotesCollection);
    Note primaNota("prima nota", "appunti di informatica", false);
    Note secondaNota("seconda nota", "appunti di matematica", true);
    importantNotesCollection.addNote(&primaNota);
    importantNotesCollection.addNote(&secondaNota);

    /* Controllo se l'attributo notesCount della View è stato aggiornato grazie al metodo notifyObserver(), invocato a sua volta dal metodo addNote.
     * Dunque verifico che esso sia uguale a 2 (visto che ho inserito due Note) */
    ASSERT_EQ(2,importantNotesCollectionView.getNotesCount());
}
