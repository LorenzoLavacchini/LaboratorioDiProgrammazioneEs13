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
    ASSERT_EQ("new title",n.getTitle());
    ASSERT_EQ("new text", n.getText());
}
TEST(Note, blockedModificationDenied){
    Note n2("title","text",true);
    n2.setTitle("new title");
    n2.setText("new text");
    ASSERT_EQ("title",n2.getTitle());
    ASSERT_EQ("text",n2.getText());
}