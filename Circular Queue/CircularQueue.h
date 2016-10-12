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
    CircularQueue(); // Constructor to create an object
    void init(int); // Initializing an object
    void add(int); // Adding an element
    int remove(); // Removing an element
    bool isFull(); // Checking full or not
    bool isEmpty(); // Checking empty or not
    int getCounter(); // Getting the number of elements containg circular queue
};

#endif /* CircularQueue_h */
