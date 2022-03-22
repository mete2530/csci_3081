#include "gtest/gtest.h"
#include "queue.h"

class QueueTest : public ::testing::Test {
 public:
  void SetUp( ) { 
    // code here will execute just before the test ensues 
    first_queue = Queue(4);
    last_queue = Queue(6);
  }
  void TearDown() {
    // code here will execute just after the test ends

  }
 protected:
   Queue first_queue ;
   Queue last_queue;
};

TEST_F(QueueTest, NameOfSpecificTest1) {

}

TEST_F(QueueTest, correctdequeue) {
    Queue q(4);

    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(6);
    q.enqueue(8);
    
    EXPECT_EQ(q.dequeue(), "2") << "wrong dequeue element";
    EXPECT_EQ(q.dequeue(), "4") << "wrong dequeue element";
    EXPECT_EQ(q.dequeue(), "6") << "wrong dequeue element";
    EXPECT_EQ(q.dequeue(), "8") << "wrong dequeue element";
    EXPECT_EQ(q.dequeue(), "-1") << "wrong dequeue element";

}
