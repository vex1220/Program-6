/*
Name: Ben Ashir Georges
Professor: Christopher Mills
Year: Fall 2023
Assignment: Programming Assignment 6
Due Date: 12/08/2023
*/

#include "queue.h"

int main()
{
    QuickQueue<int> list1;
    for(int i=0; i <6; i++)
    {
        list1.Enqueue(i*3);
    }

    cout<<"This is the entire array of list 1: "<<endl;

    list1.Print();


    cout<<endl;

    QuickQueue<double> list2;
    for(int i=0; i <6; i++)
    {
        list2.Enqueue(i*3.14159);
    }
    
    cout<<"This is the entire array of list 2: "<<endl;
    list2.Print();

    cout<<"This is the entire array of list 1:"<<endl;
    for(int i= 5; i>=0; i--)
    {
        list1.Dequeue(i);
    }

    list1.Print();

    cout<<"This is the entire array of list 2:"<<endl;
    for(int i= 5; i>=0; i--)
    {
        list2.Dequeue(i);
    }

    list2.Print();

    return 0;
}