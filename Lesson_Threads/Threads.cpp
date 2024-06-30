#include <iostream>
#include <thread>
using namespace std;

void printMessage() {
    cout << "Hello from thread!" << endl;  
}

void printWorld() {
    cout << "Hello world!" << endl;  
}

void printITStep() {
    cout << "Hellow ITStep" << endl;  
}

int main() {
    thread t1(printMessage);  
    thread t2(printWorld);
    thread t3(printITStep);
    t1.join();
    t2.join();
    t3.join();
    return 0;
}
