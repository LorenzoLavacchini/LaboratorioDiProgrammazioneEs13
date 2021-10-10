//
// Created by lorenzo on 26/09/2021.
//

#include <gtest/gtest.h>
#include "../NotesCollection.h"
#include "../NotesCollectionView.h"
#include "../Note.h"

TEST(NotesCollection, addNote){
    NotesCollection notesCollection("titolo collezione");
    Note primaNota("prima nota", "appunti di informatica", false);
    notesCollection.addNote(&primaNota);
    ASSERT_EQ(1,notesCollection.getListSize());
}

TEST(NotesCollection, removeNote) {
    NotesCollection notesCollection("titolo collezione");
    Note primaNota("prima nota", "appunti di informatica", false);
    Note secondaNota("seconda nota", "appunti di matematica", true);
    notesCollection.addNote(&primaNota);
    notesCollection.addNote(&secondaNota);

    ASSERT_EQ(2, notesCollection.getListSize());

    //Provo a rimuovere dalla lista una nota non bloccata
    notesCollection.removeNote(&primaNota);
    ASSERT_EQ(1, notesCollection.getListSize());

    //Provo a rimuovere dalla lista una nota bloccata
    notesCollection.removeNote(&secondaNota);
    ASSERT_EQ(1, notesCollection.getListSize());
}
TEST(NotesCollection, removeNoteInvalid){
    //Variabile booleana che indica se è stata lanciata un'eccezione o no
    bool exceptionRegistered = false;

    NotesCollection notesCollection("titolo collezione");
    Note primaNota("prima nota", "appunti di informatica", false);
    Note secondaNota("seconda nota", "appunti di matematica", true);
    notesCollection.addNote(&primaNota);

    //Rimuovo una nota che è presente all'interno della lista: non mi aspetto nessuna eccezione
    try {
        notesCollection.removeNote(&primaNota);
    }
    catch(std::runtime_error& e){
        exceptionRegistered = true;
    }
    ASSERT_FALSE(exceptionRegistered);


    //Rimuovo una nota che non è presente all'interno della lista: mi aspetto che sia lanciata un'eccezione
    try{
        notesCollection.removeNote(&primaNota);
    }
    catch(std::runtime_error& e){
        exceptionRegistered = true;
    }
    ASSERT_TRUE(exceptionRegistered);
}
TEST(NotesCollection, addObserver){
    NotesCollection notesCollection("titolo collezione");
    NotesCollectionView notesCollectionView(&notesCollection);
    ASSERT_EQ(1,notesCollection.getNumObservers());
}

TEST(NotesCollection, removeObserver){
    NotesCollection notesCollection("titolo collezione");
    NotesCollectionView notesCollectionView(&notesCollection);
    notesCollection.removeObserver(&notesCollectionView);
    ASSERT_EQ(0,notesCollection.getNumObservers());
}

TEST(NotesCollection, notifyObservers){
    NotesCollection notesCollection("titolo collezione");
    NotesCollectionView notesCollectionView(&notesCollection);
    Note primaNota("prima nota", "appunti di informatica", false);
    Note secondaNota("seconda nota", "appunti di matematica", true);
    notesCollection.addNote(&primaNota);
    notesCollection.addNote(&secondaNota);

    /* Controllo se l'attributo notesCount della View è stato aggiornato grazie al metodo notifyObserver(), invocato a sua volta dal metodo addNote.
     * Dunque verifico che esso sia uguale a 2 (visto che ho inserito due Note*/
    ASSERT_EQ(2,notesCollectionView.getNotesCount());
}
