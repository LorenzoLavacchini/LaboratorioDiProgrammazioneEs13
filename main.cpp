#include <iostream>
#include "Note.h"
#include "NotesCollection.h"
#include "ImportantNotesCollection.h"
#include "SpecificNotesCollection.h"


int main() {
    NotesCollection notesCollection("Università");
    ImportantNotesCollection importantNotesCollection;
    SpecificNotesCollection specificNotesCollection;

    Note primaNota("prima nota","appunti di informatica",false);
    Note secondaNota("seconda nota","appunti di matematica",false);



    return 0;
}
