//
//  Queue.hpp
//  Queue
//
//  Created by Ulugbek on 09/10/16.
//  Copyright © 2016 Ulugbek. All rights reserved.
//

#ifndef CircularQueue_h
#define CircularQueue_h
#include <iostream>

class CircularQueue{
private:
    int front, rear, counter, size;
    int* arrayOfInt;
    
public:
    CircularQueue();
    void init(int);
    void add(int);
    int remove();
    bool isFull();
    bool isEmpty();
    int getCounter();
    void show();
};

#endif /* CircularQueue_h */
