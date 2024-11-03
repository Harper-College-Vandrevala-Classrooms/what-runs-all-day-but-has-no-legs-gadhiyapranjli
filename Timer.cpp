#include "Timer.h"

Timer::Timer() : elapsed_time(0), running(false) {}

void Timer::start() {
    if (!running) {
        std::cout << "Starting the timer..." << std::endl;
        start_time = std::chrono::steady_clock::now();
        running = true;
    }
}

void Timer::stop() {
    if (running) {
        std::cout << "Timer stopped." << std::endl;
        auto end_time = std::chrono::steady_clock::now();
        elapsed_time += std::chrono::duration_cast<std::chrono::seconds>(end_time - start_time);
        running = false;
    }
}

long Timer::elapsed() const {
    return elapsed_time.count(); 
}
