#include <iostream>
#include "Note.h"
#include "NotesCollection.h"
#include "ImportantNotesCollection.h"
#include "SpecificNotesCollection.h"


int main() {
    NotesCollection notesCollection("Università");
    ImportantNotesCollection importantNotesCollection;
    SpecificNotesCollection specificNotesCollection;

    Note primaNota("prima nota","appunti di informatica",true);
    Note secondaNota("seconda nota","appunti di matematica",false);
    notesCollection.addNote(&primaNota);
    notesCollection.addNote(&secondaNota);
    primaNota.setTitle("nuovo titolo");
    notesCollection.printAllNotes();



    return 0;
}
