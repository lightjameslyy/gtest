#include <gtest/gtest.h>
#include <unordered_set>
#include <iostream>

class UnorderedSetTest : public ::testing::Test {
    protected:
        virtual void SetUp() {
            _mUnorderedSet.clear(); 
        }

        virtual void TearDown() {
        }
    std::unordered_set<int> _mUnorderedSet;
};

TEST_F(UnorderedSetTest, traverse) {
    for (int i = 0; i < 5; ++i) {
        _mUnorderedSet.insert(i);
    }

    for (int el : _mUnorderedSet)
        std::cout << el << " ";
    std::cout << std::endl;
    ASSERT_EQ(5, _mUnorderedSet.size());
}

TEST_F(UnorderedSetTest, eraseNotExistedElement) { 
    for (int i = 0; i < 5; ++i) {
        _mUnorderedSet.insert(i);
    }
     
    _mUnorderedSet.erase(5);

    for (int el : _mUnorderedSet)
        std::cout << el << " ";
    std::cout << std::endl;
    ASSERT_EQ(5, _mUnorderedSet.size());
}

