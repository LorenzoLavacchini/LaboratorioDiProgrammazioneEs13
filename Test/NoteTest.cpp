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