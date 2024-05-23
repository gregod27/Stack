#ifndef STACK_H
#define STACK_H

#include <iostream>

class Stack {
private:
    int* arr;          
    int capacity;     
    int top;           

public:
    Stack();                          
    Stack(const Stack& other);        
    ~Stack();                        
    Stack& operator=(const Stack& other);

    void push(int elem);            
    int pop();                        
    bool isEmpty() const;             
    void multiPop(int N);            
    void show() const;                
};

#endif
