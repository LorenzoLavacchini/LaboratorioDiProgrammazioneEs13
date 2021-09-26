//
// Created by lorenzo on 26/09/2021.
//

#include <gtest/gtest.h>
#include "../SpecificNotesCollection.h"
#include "../SpecificNotesCollectionView.h"
#include "../Note.h"

TEST(SpecificNotesCollection, addNote){
    SpecificNotesCollection specificNotesCollection;
    Note primaNota("prima nota","appunti di informatica",false);
    specificNotesCollection.addNote(&primaNota);
    ASSERT_EQ(1,specificNotesCollection.getListSize());
}

TEST(SpecificNotesCollection, removeNote) {
    SpecificNotesCollection specificNotesCollection;
    Note primaNota("prima nota", "appunti di informatica", false);
    Note secondaNota("seconda nota", "appunti di matematica", true);
    specificNotesCollection.addNote(&primaNota);
    specificNotesCollection.addNote(&secondaNota);

    ASSERT_EQ(2, specificNotesCollection.getListSize());

    //Provo a rimuovere dalla lista una nota non bloccata
    specificNotesCollection.removeNote(&primaNota);
    ASSERT_EQ(1, specificNotesCollection.getListSize());

    //Provo a rimuovere dalla lista una nota bloccata
    specificNotesCollection.removeNote(&secondaNota);
    ASSERT_EQ(1, specificNotesCollection.getListSize());
}

TEST(SpecificNotesCollection, addObserver){
    SpecificNotesCollection specificNotesCollection;
    SpecificNotesCollectionView specificNotesCollectionView(&specificNotesCollection);
    ASSERT_EQ(1,specificNotesCollection.getNumObservers());
}

TEST(SpecificNotesCollection, removeObserver){
    SpecificNotesCollection specificNotesCollection;
    SpecificNotesCollectionView specificNotesCollectionView(&specificNotesCollection);
    specificNotesCollection.removeObserver(&specificNotesCollectionView);
    ASSERT_EQ(0,specificNotesCollection.getNumObservers());
}

TEST(SpecificNotesCollection, notifyObservers){
    SpecificNotesCollection specificNotesCollection;
    SpecificNotesCollectionView specificNotesCollectionView(&specificNotesCollection);
    Note primaNota("prima nota", "appunti di informatica", false);
    Note secondaNota("seconda nota", "appunti di matematica", true);
    specificNotesCollection.addNote(&primaNota);
    specificNotesCollection.addNote(&secondaNota);

    /* Controllo se l'attributo notesCount della View è stato aggiornato grazie al metodo notifyObserver(), invocato a sua volta dal metodo addNote.
     * Dunque verifico che esso sia uguale a 2 (visto che ho inserito due Note) */
    ASSERT_EQ(2,specificNotesCollectionView.getNotesCount());
}