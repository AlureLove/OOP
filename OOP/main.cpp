//
//  main.cpp
//  OOP
//
//  Created by guchen on 2021/8/22.
//

#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person无参构造函数调用" << endl;
    }

    Person(int a) {
        age = a;
        cout << "Person有参构造函数调用" << endl;
    }

    Person(const Person &p) {
        age = p.age;
        cout << "Person拷贝构造函数调用" << endl;
    }

    ~Person() {
        cout << "person的析构函数调用" << endl;
    }

    static void func() {
        cout << "static void func 调用" << endl;
    }

    int age;

};

void test01() {
    Person p1(20);
    Person p2(p1);
}

void doWork(Person p) {

}

void test02() {
    Person p;
    doWork(p);
}

void test03() {
    Person::func();
}

int main(int argc, const char * argv[]) {
    // insert code here...

//    test01();
//    test02();
    test03();

    system("pause");
    return 0;
}
