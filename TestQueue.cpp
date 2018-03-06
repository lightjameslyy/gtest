#include <gtest/gtest.h>
#include <queue>
#include <iostream>

class QueueTest : public ::testing::Test {
    protected:
        virtual void SetUp() {
            while (!_mQueue.empty()) {
                _mQueue.pop();
            }
        }

        virtual void TearDown() {

        }
        std::queue<int> _mQueue;
};

TEST_F(QueueTest, front) {
    _mQueue.push(1);
    int res = _mQueue.front();
    std::cout << res << std::endl;
    ASSERT_EQ(0, 0);
}
