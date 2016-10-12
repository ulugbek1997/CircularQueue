//
//  main.cpp
//  Circular Queue
//
//  Created by Ulugbek on 11/10/16.
//  Copyright © 2016 Ulugbek. All rights reserved.
//

#include <iostream>
#include "CircularQueue.h"

using namespace std;
int main(int argc, const char * argv[]) {
    cout<<"Please enter the size of circular queue: ";
    int size = 0;
    cin >> size; // Taking the size of circular queue 10, 100, 1000 ......
    CircularQueue myCircularQueue; // Creating circular queue object
    myCircularQueue.init(size); //Initializing an object
    std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now(); // Beginning time
    for (int i = 0; i < size; i++)
        myCircularQueue.add(rand()); // Adding random numbers to circular queue
    std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now(); // Ending time
    
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count(); //Calculating execution time
    cout << "The inserting time is: " << (double)duration / 1000<<" ms"<<endl;
    
    t1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; i++)
        myCircularQueue.remove(); // Removing elements from circular queue
    t2 = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count(); // Calculating execution time
    cout << "The deleting time is: " << (double)duration / 1000<<" ms"<<endl;
    return 0;

}
