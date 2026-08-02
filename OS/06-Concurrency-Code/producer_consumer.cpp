// Standard Producer-Consumer synchronization code for SDE interviews (Thread safety, Mutex, and Condition
// Variable):

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>
std::queue<int> buffer;
const unsigned int MAX_SIZE = 5;
std::mutex mtx;
std::condition_variable cv_producer, cv_consumer;
void producer(int val) {
 std::unique_lock<std::mutex> lock(mtx);
 // Predicate prevents spurious wakeups
 cv_producer.wait(lock, []() { return buffer.size() < MAX_SIZE; });
 buffer.push(val);
 std::cout << "[Producer] Produced item: " << val << std::endl;
 cv_consumer.notify_one(); // Signal consumer thread
}
void consumer() {
 std::unique_lock<std::mutex> lock(mtx);
 cv_consumer.wait(lock, []() { return !buffer.empty(); });
 int val = buffer.front();
 buffer.pop();
 std::cout << "[Consumer] Consumed item: " << val << std::endl;
 cv_producer.notify_one(); // Signal producer thread
}
int main() {
 std::thread t1(producer, 100);
 std::thread t2(consumer);
 t1.join();
 t2.join();
 return 0;
}