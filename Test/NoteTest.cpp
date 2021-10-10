//
// Created by lorenzo on 25/09/2021.
//

#include <gtest/gtest.h>
#include "../Note.h"
TEST(Note, constructor){
    Note n("title","text",false);
    ASSERT_EQ("title",n.getTitle());
    ASSERT_EQ("text",n.getText());
    ASSERT_EQ(false, n.isBlocked());
}

TEST(Note, notBlockedModificationAdmitted){
    Note n("title","text",false);
    n.setTitle("new title");
    n.setText("new text");
    n.addTag("nuovo tag");
    ASSERT_EQ("new title",n.getTitle());
    ASSERT_EQ("new text", n.getText());
    ASSERT_EQ(1,n.getNumTags());
}
TEST(Note, blockedModificationDenied){
    Note n("title","text",true);
    n.setTitle("new title");
    n.setText("new text");
    n.addTag("nuovo tag");
    ASSERT_EQ("title",n.getTitle());
    ASSERT_EQ("text",n.getText());
    ASSERT_EQ(0,n.getNumTags());
}

TEST(Note, containsTag){
    Note n("title","text",false);
    n.addTag("nuovo tag");
    ASSERT_TRUE(n.containsTag("nuovo tag"));
}

TEST(Note, removeTag){
    bool exceptionRegistered = false;
    Note n("title","text",false);
    n.addTag("nuovo tag");

    //Rimuovo  un tag che è presente: non mi aspetto eccezioni.
    try {
        n.removeTag("nuovo tag");
    }
    catch(std::runtime_error& e){
        exceptionRegistered = true;
    }
    ASSERT_FALSE(exceptionRegistered);

    //Rimuovo un tag che non è presente nella lista: mi asoetto un'eccezione.
    try{
        n.removeTag("tag inesistente");
    }
    catch(std::runtime_error& e){
        exceptionRegistered = true;
    }
    ASSERT_TRUE(exceptionRegistered);

}