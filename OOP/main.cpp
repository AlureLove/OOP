//
//  main.cpp
//  OOP
//
//  Created by guchen on 2021/8/22.
//

#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle {

public:
    int m_r;
    double calculateZC() {
        return 2 * PI * m_r;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...

    Circle c1;

    c1.m_r = 10;

    cout << c1.calculateZC() << endl;

    system("pause");
    return 0;
}
