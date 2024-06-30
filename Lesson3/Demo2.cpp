#include <iostream>
#include <thread>
#include <chrono>  // Библиотека для работы с временем
using namespace std;

void longRunningTask(int num,int n) {
    cout << "Potol number " << num <<"startanyl"<< endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Number:" << num << endl;
        cout << "Thread running " << i << endl;  
        this_thread::sleep_for(chrono::seconds(n));  
    }
}

int main() {
    thread t1(longRunningTask, 1, 3);
    
    thread t2(longRunningTask, 2, 2);  
    thread t3(longRunningTask, 3, 1);

    t1.join();
    t2.join();
    t3.join();


    return 0;
}
