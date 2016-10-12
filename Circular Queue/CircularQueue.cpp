//
//  Queue.cpp
//  Queue
//
//  Created by Ulugbek on 09/10/16.
//  Copyright © 2016 Ulugbek. All rights reserved.
//

#include "CircularQueue.h"

CircularQueue::CircularQueue(){
    std::cout<<"The queue has created"<<std::endl;
}

void CircularQueue::init(int size){
    this->size = size;
    front = rear = -1;
    counter = 0;
    arrayOfInt = new int[size];
    std::cout<<"The queue has initialized"<<std::endl;
}

void CircularQueue::add(int element){
    if (isFull()){
        std::cout<<"The stack is empty"<<std::endl;
        exit(1);
    }
    else{
        counter++;
        rear = (rear + 1) % size;
        arrayOfInt[rear] = element;
    }
}

int CircularQueue::remove(){
    if (isEmpty()){
        std::cout<<" The stack is empty"<<std::endl;
        exit(1);
    }
    else{
        front = (front + 1) % size;
        return arrayOfInt[front];
    }
}

bool CircularQueue::isFull(){
    if (counter == size)
        return true;
    else
        return false;
}

bool CircularQueue::isEmpty(){
    if (counter == 0)
        return true;
    else
        return false;
}








