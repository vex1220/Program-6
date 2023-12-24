/*
Name: Ben Ashir Georges
Professor: Christopher Mills
Year: Fall 2023
Assignment: Programming Assignment 6
Due Date: 12/08/2023
*/

// Header files
#include <iostream>
#include <string>
using namespace std;

template <class T> 
class QuickQueue{
    private:
    T** queue;
    int current;

    public:
    QuickQueue();
   ~QuickQueue();
   bool Enqueue(T item);
    T* Dequeue(unsigned int n);
    QuickQueue(const QuickQueue<T>& s);
    int GetSize();
    T* GetElement(unsigned int n);
    void Print();
    QuickQueue<T>& operator=(const QuickQueue<T>& s);

};

#include "queue.hpp"