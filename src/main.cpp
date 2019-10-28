
#include <iostream>

#include <common.h>

using namespace std;

void printBack(std::string text) {
    cout << "Got message back" << endl;
    cout << text << endl;
}

int main(int /*argc*/, char **/*argv*/) {
    callFirst("Det funkar");


	return 0;
}

