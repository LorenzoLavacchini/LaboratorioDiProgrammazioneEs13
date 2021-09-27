//
// Created by lorenzo on 27/09/2021.
//

#include <gtest/gtest.h>
#include "../ImportantNotesCollectionView.h"

TEST(ImportantNotesCollectionView, constructor){
    ImportantNotesCollection importantNotesCollection;
    ImportantNotesCollectionView importantNotesCollectionView(&importantNotesCollection);

    //Controllo che l'attributo immagazzinato contenga l'indirizzo del ConcreteSubject importantNotesCollection
    ASSERT_EQ(&importantNotesCollection, importantNotesCollectionView.getImportantNotesCollection());

    //Controllo che il numero degli observer nella lista del ConcreteSubject sia = 1
    ASSERT_EQ(1, importantNotesCollection.getNumObservers());
}

TEST(ImportantNotesCollectionView, update){
    ImportantNotesCollection importantNotesCollection;
    ImportantNotesCollectionView importantNotesCollectionView(&importantNotesCollection);
    Note primaNota("prima nota", "appunti di informatica", false);
    importantNotesCollection.addNote(&primaNota);

    //Controllo che il metodo update aggiorni l'attributo notesCount
    ASSERT_EQ(1, importantNotesCollectionView.getNotesCount());
}

TEST(ImportantNotesCollectionView, destructor){
    ImportantNotesCollection importantNotesCollection;
    ImportantNotesCollectionView* importantNotesCollectionView = new ImportantNotesCollectionView(&importantNotesCollection);
    Note primaNota("prima nota", "appunti di informatica", false);
    importantNotesCollection.addNote(&primaNota);

    //Controllo che il numero degli observer nella lista del ConcreteSubject sia = 1
    ASSERT_EQ(1, importantNotesCollection.getNumObservers());

    /*Distruggo l'oggetto chiamando così il distruttore. Esso deve disiscrivere l'observer dalla lista del concreteSubject
      la quale torna ad avere 0 observers. */
    delete importantNotesCollectionView;
    ASSERT_EQ(0,importantNotesCollection.getNumObservers());
}

