//
// Created by lorenzo on 27/09/2021.
//

#include <gtest/gtest.h>
#include "../NotesCollectionView.h"

TEST(NotesCollectionView, constructor){
    NotesCollection notesCollection("titolo collezione");
    NotesCollectionView notesCollectionView(&notesCollection);

    //Controllo che l'attributo immagazzinato contenga l'indirizzo del ConcreteSubject importantNotesCollection
    ASSERT_EQ(&notesCollection, notesCollectionView.getNotesCollection());

    //Controllo che il numero degli observer nella lista del ConcreteSubject sia = 1
    ASSERT_EQ(1, notesCollection.getNumObservers());
}

TEST(NotesCollectionView, update){
    NotesCollection notesCollection("titolo collezione");
    NotesCollectionView notesCollectionView(&notesCollection);
    Note primaNota("prima nota", "appunti di informatica", false);
    notesCollection.addNote(&primaNota);

    //Controllo che il metodo update aggiorni l'attributo notesCount
    ASSERT_EQ(1, notesCollectionView.getNotesCount());
}

TEST(NotesCollectionView, destructor){
    NotesCollection notesCollection("titolo collezione");
    NotesCollectionView* notesCollectionView = new NotesCollectionView(&notesCollection);
    Note primaNota("prima nota", "appunti di informatica", false);
    notesCollection.addNote(&primaNota);

    //Controllo che il numero degli observer nella lista del ConcreteSubject sia = 1
    ASSERT_EQ(1, notesCollection.getNumObservers());

    /*Distruggo l'oggetto chiamando così il distruttore. Esso deve disiscrivere l'observer dalla lista del concreteSubject
      la quale torna ad avere 0 observers. */
    delete notesCollectionView;
    ASSERT_EQ(0,notesCollection.getNumObservers());
}