#include <iostream>
#include <conio.h>
#include <algorithm>

using namespace std;
/*
 * Queue.h
 *
 *  Created on: 31 бер. 2017 р.
 *      Author: sky
 */
class Queue {
    int q[10];
    int sloc, rloc;
public:
    void init(void);
    void qput(int);
    int qget(void);

};

void Queue::init(void){
    rloc = sloc = 0;
}

int Queue::qget(void){
    if(sloc == rloc){
        cout << "\nQueue is empty\n";
        return 0;
    }
    return q[sloc++];
}

void Queue::qput(int i){
    if(sloc == 10){
        cout << "\nQueue is full\n";
        return;
    }
    q[sloc++] = i;
}

class Shape{
protected:
    int width, heigh;

public:
    int area(int, int);
    Shape(int a = 0, int b = 0) {
        width = a;
        heigh = b;
    }



};
int Shape::area(int i, int j){
    cout << "Rectangle class area : " << i * j << "\n";
    return i * j;
}
class Rectangle: public Shape{
public:
    Rectangle(int a = 0, int b = 0):Shape(a, b){}

//    int area(int, int);

};
//int Rectangle::area(int i, int j) {
//
//    cout << "Rectangle class area : " << i * j << "\n";
//    return i * j;
//}
class Triangle: public Shape{
public:
    Triangle(int a = 0, int b = 0): Shape(a, b){}
    int area(){
        cout << "Trinagle class area : ";
        return (width * heigh) / 2;
    }
};

int main(void) {
    Shape *shape;
    Rectangle rec(2, 5);
    Triangle triangle(4, 6);
    int a1 = rec.area(2, 3);
    //shape = &triangle;
    int a2 = rec.area(2, 4);

    cout << a1;
    cout << a2;
    cout << " Print test ";
    Queue a, b;

    a.init();
    b.init();

    cout << a.qget()<<"\nmy output\n";
    a.qput(7);
    a.qput(9);
    a.qput(11);

    cout << a.qget() << " ";
    cout << a.qget() << " ";
    cout << a.qget() << " ";
    cout << a.qget() << "\n";

    for (int i = 0; i < 12; i++) {
        b.qput(i * i);
    }

    for (int j = 0; j < 12; j++) {
        cout << b.qget() << " ";
        cout << b.qget() << "\n\n";
    }
    getch();

    //shape = &rec;
    return 0;
}


//class Queue
// public:
// void qput(int)
//