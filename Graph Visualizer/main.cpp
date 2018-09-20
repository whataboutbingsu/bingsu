#include "SimpleGraph.hpp"
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

int main() {

    SimpleGraph SG;
    DrawGraph(SG);
/**
    time_t startTime = time(NULL);
//    double elapsedTime = difftime(time(NULL), startTime);

    /* ... some complex operation ...
        do
        {
            SG.update();
            // draw every now and again.
            cout << "\ntime so far = "
                 << difftime(time(NULL), startTime);
        } while (difftime(time(NULL), startTime) < 10);
**/
    cin.ignore();
    cin.get();

}
