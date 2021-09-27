//
// Created by lorenzo 27/09/2021.
//

#include <gtest/gtest.h>
#include "../SpecificNotesCollectionView.h"


TEST(SpecificNotesCollectionView, constructor){
    SpecificNotesCollection specificNotesCollection;
    SpecificNotesCollectionView specificNotesCollectionView(&specificNotesCollection);

    //Controllo che l'attributo immagazzinato contenga l'indirizzo del ConcreteSubject SpecificNotesCollection
    ASSERT_EQ(&specificNotesCollection, specificNotesCollectionView.getSpecificNotesCollection());

    //Controllo che il numero degli observer nella lista del ConcreteSubject sia = 1
    ASSERT_EQ(1, specificNotesCollection.getNumObservers());
}

TEST(SpecificNotesCollectionView, update){
    SpecificNotesCollection specificNotesCollection;
    SpecificNotesCollectionView specificNotesCollectionView(&specificNotesCollection);
    Note primaNota("prima nota", "appunti di informatica", false);
    specificNotesCollection.addNote(&primaNota);

    //Controllo che il metodo update aggiorni l'attributo notesCount
    ASSERT_EQ(1, specificNotesCollectionView.getNotesCount());
}

TEST(SpecificNotesCollectionView, destructor){
    SpecificNotesCollection specificNotesCollection;
    SpecificNotesCollectionView* specificNotesCollectionView = new SpecificNotesCollectionView(&specificNotesCollection);
    Note primaNota("prima nota", "appunti di informatica", false);
    specificNotesCollection.addNote(&primaNota);

    //Controllo che il numero degli observer nella lista del ConcreteSubject sia = 1
    ASSERT_EQ(1, specificNotesCollection.getNumObservers());

    /*Distruggo l'oggetto chiamando così il distruttore. Esso deve disiscrivere l'observer dalla lista del concreteSubject
    la quale torna ad avere 0 observers. */
    delete specificNotesCollectionView;
    ASSERT_EQ(0,specificNotesCollection.getNumObservers());
}