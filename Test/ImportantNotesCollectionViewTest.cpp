//
// Created by lorenzo on 27/09/2021.
//

#include <gtest/gtest.h>
#include "../ImportantNotesCollectionView.h"

TEST(ImportantNotesCollectionView, constructor){
    NotesCollection notesCollection("titolo collezione");
    ImportantNotesCollectionView importantNotesCollectionView(&notesCollection);

    //Controllo che l'attributo immagazzinato contenga l'indirizzo del ConcreteSubject notesCollection
    ASSERT_EQ(&notesCollection, importantNotesCollectionView.getNotesCollection());

    //Controllo che il numero degli observer nella lista del ConcreteSubject sia = 1
    ASSERT_EQ(1, notesCollection.getNumObservers());
}

TEST(ImportantNotesCollectionView, update){
    NotesCollection notesCollection("titolo collezione");
    ImportantNotesCollectionView importantNotesCollectionView(&notesCollection);
    Note primaNota("prima nota", "appunti di informatica", false, true);
    Note secondaNota("seconda nota", "appunti di matematica", false, false);
    notesCollection.addNote(&primaNota);
    notesCollection.addNote(&secondaNota);

    //Controllo che il metodo update aggiorni l'attributo notesCount
    //Dunque mi aspetto che ci sia una sola nota inserita nella lista che è importante
    ASSERT_EQ(1, importantNotesCollectionView.getNotesCount());
}

TEST(ImportantNotesCollectionView, destructor){
    NotesCollection notesCollection("titolo collezione");
    ImportantNotesCollectionView* importantNotesCollectionView = new ImportantNotesCollectionView(&notesCollection);
    Note primaNota("prima nota", "appunti di informatica", false);
    notesCollection.addNote(&primaNota);

    //Controllo che il numero degli observer nella lista del ConcreteSubject sia = 1
    ASSERT_EQ(1, notesCollection.getNumObservers());

    /*Distruggo l'oggetto chiamando così il distruttore. Esso deve disiscrivere l'observer dalla lista del concreteSubject
      la quale torna ad avere 0 observers. */
    delete importantNotesCollectionView;
    ASSERT_EQ(0,notesCollection.getNumObservers());
}

