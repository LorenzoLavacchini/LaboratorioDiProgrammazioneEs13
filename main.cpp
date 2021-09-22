#include <iostream>
#include "Note.h"
#include "NotesCollection.h"
#include "ImportantNotesCollection.h"
#include "SpecificNotesCollection.h"
#include "NotesCollectionView.h"


int main() {
    NotesCollection notesCollection("Università");
    ImportantNotesCollection importantNotesCollection;
    SpecificNotesCollection specificNotesCollection;

    NotesCollectionView notesCollectionView(&notesCollection);

    Note primaNota("prima nota","appunti di informatica",true);
    Note secondaNota("seconda nota","appunti di matematica",false);

    //Aggiunta di note ad una delle collezioni
    notesCollection.addNote(&primaNota);
    notesCollection.addNote(&secondaNota);

    //Modifica del titolo sulla base dell'attrobuto blocked
    primaNota.setTitle("nuovo titolo");

    //Test della cancellazione di una nota dalla collezione sulla base dell'attributo blocked
    notesCollection.printAllNotes();
    notesCollection.removeNote(&primaNota);
    notesCollection.removeNote(&secondaNota);
    notesCollection.printAllNotes();

    importantNotesCollection.addNote(&primaNota);
    importantNotesCollection.addNote(&secondaNota);


    return 0;
}
