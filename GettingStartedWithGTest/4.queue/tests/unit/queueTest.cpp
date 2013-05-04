#include "gtest/gtest.h"
#include "queue.h"

TEST(GeneralTest, truth) {
  EXPECT_TRUE(1);
  EXPECT_FALSE(0);
}

TEST(QueueTest, construct) {
	Queue<int>* iq = new Queue<int>();
	Queue<char>* ic = new Queue<char>();
}

TEST(QueueTest, hasNext) {
	Queue<int>* iq = new Queue<int>();
	EXPECT_FALSE(iq->hasNext());
	iq->push(5);
	EXPECT_TRUE(iq->hasNext());
}



