#include <gtest/gtest.h>

class XXXTest : public ::testing::Test {
    protected:
        virtual void SetUp() {

        }

        virtual void TearDown() {

        }
};

TEST_F(XXXTest, testName) {
    ASSERT_EQ(0, 0);
}
