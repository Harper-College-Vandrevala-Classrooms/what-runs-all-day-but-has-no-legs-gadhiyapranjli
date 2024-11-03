#ifndef TIMER_H
#define TIMER_H

#include <chrono>
#include <iostream>

class Timer {
public:
    Timer();                    
    void start();               
    void stop();                
    long elapsed() const;       

private:
    std::chrono::steady_clock::time_point start_time;  
    std::chrono::duration<long> elapsed_time;          
    bool running;             
};

#endif 
