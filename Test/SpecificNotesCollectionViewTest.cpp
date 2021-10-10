//
// Created by lorenzo 27/09/2021.
//

#include <gtest/gtest.h>
#include "../SpecificNotesCollectionView.h"


TEST(SpecificNotesCollectionView, constructor){
    NotesCollection notesCollection("titolo collezione");
    SpecificNotesCollectionView specificNotesCollectionView(&notesCollection,"Non rimandabili");

    //Controllo che l'attributo immagazzinato contenga l'indirizzo del ConcreteSubject SpecificNotesCollection
    ASSERT_EQ(&notesCollection, specificNotesCollectionView.getNotesCollection());

    //Controllo che il numero degli observer nella lista del ConcreteSubject sia = 1
    ASSERT_EQ(1, notesCollection.getNumObservers());
}

TEST(SpecificNotesCollectionView, update){
    NotesCollection notesCollection("titolo collezione");
    SpecificNotesCollectionView NonRimandabiliCollectionView(&notesCollection,"Non rimandabili");
    Note primaNota("prima nota", "appunti di informatica", false,false);
    primaNota.addTag("Non rimandabili");
    notesCollection.addNote(&primaNota);

    //Controllo che il metodo update aggiorni l'attributo notesCount - ho aggiunto una nota
    //con lo stesso tag che osserva questa view, dunque deve andare ad 1
    ASSERT_EQ(1, NonRimandabiliCollectionView.getNotesCount());

    Note secondaNota("seconda nota","appunti di matematica",false,true);
    secondaNota.addTag("Non urgenti");
    notesCollection.addNote(&secondaNota);

    //Controllo che il metodo update aggiorni l'attributo notesCount - non ho aggiunto nessun'altra nota
    //con lo stesso tag che osserva questa view, dunque deve rimanere ad 1
    ASSERT_EQ(1, NonRimandabiliCollectionView.getNotesCount());
}

TEST(SpecificNotesCollectionView, destructor){
    NotesCollection notesCollection("titolo collezione");
    SpecificNotesCollectionView* specificNotesCollectionView = new SpecificNotesCollectionView(&notesCollection,"Non rimandabili");
    Note primaNota("prima nota", "appunti di informatica", false, false);
    notesCollection.addNote(&primaNota);

    //Controllo che il numero degli observer nella lista del ConcreteSubject sia = 1
    ASSERT_EQ(1, notesCollection.getNumObservers());

    /*Distruggo l'oggetto chiamando così il distruttore. Esso deve disiscrivere l'observer dalla lista del concreteSubject
    la quale torna ad avere 0 observers. */
    delete specificNotesCollectionView;
    ASSERT_EQ(0,notesCollection.getNumObservers());
}