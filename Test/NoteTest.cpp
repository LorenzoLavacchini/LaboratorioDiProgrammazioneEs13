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

