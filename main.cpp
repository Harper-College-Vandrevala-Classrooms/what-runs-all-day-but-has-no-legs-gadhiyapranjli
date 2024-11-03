#include <iostream>
#include <thread> 
#include <chrono> 
#include "Timer.h"

int main() {
    Timer timer;

    timer.start();
    std::this_thread::sleep_for(std::chrono::seconds(3)); 
    timer.stop();

    std::cout << "Elapsed time: " << timer.elapsed() << " seconds." << std::endl;

    return 0;
}
