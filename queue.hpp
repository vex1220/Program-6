/*
Name: Ben Ashir Georges
Professor: Christopher Mills
Year: Fall 2023
Assignment: Programming Assignment 6
Due Date: 12/08/2023
*/

#ifndef _QUEUE_HPP
#define _QUEUE_HPP

template<class T>
QuickQueue<T>& QuickQueue<T>::operator=(const QuickQueue<T>& s)
{
    current= s.current;

    delete []queue;
    queue= new T[s.GetSize()];
    for(int i=0;i< s.GetSize(); i++)
    {
        queue[i]= s.GetElement(i);
    }

    return *this;

}

template<class T>
QuickQueue<T>::QuickQueue()
{
    current=0;
    queue= new T*[10];
}

template<class T>
QuickQueue<T>::QuickQueue(const QuickQueue<T>& s)
{
    delete [] queue;
    queue= new T[s.GetSize()];
    for(int i=0;i< s.GetSize(); i++)
    {
        queue[i]= s.GetElement(i);
    }

    current= s.GetSize();
}
template<class T>
QuickQueue<T>::~QuickQueue()
{
    for(int i=0; i<current; i++)
    {
        delete queue[i];
    }

    delete [] queue;
}

template<class T>
bool QuickQueue<T>:: Enqueue(T item)
{
    if(current < 10)
    {
        queue[current]= new T;
        *queue[current]= item;
        current++;
        return true;
    }
    else
    return false;
}

template<class T>
T* QuickQueue<T>:: Dequeue(unsigned int n)
{
    T* value = queue[n];
    for(int i= n;i<current;i++)
    {
        queue[i]=queue[i+1];
    }
    current--;

    return value;    
}

template< class T >
int QuickQueue< T >::GetSize()
{
return current;
}

template< class T >
T* QuickQueue< T >::GetElement(unsigned int n)
{
        if (n >= 10){
             n = 10 - 1;
        }
    return queue[n];
}

template<class T>
void QuickQueue<T>::Print()
{
    if(current==0)
    {
        cout<<endl<<"There is nothing in this list."<<endl<<endl;
        
    }
    
    else
    {
    for(int i=0; i<current-1;i++)
    {
        cout<<*queue[i]<<endl;
    }
    }
}   

#endif // _QUEUE_HPP