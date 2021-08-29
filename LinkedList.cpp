#include <bits/stdc++.h>
#include "headers/LinkedList.h"

using namespace std;
using namespace DataStructures;

struct Student {
    string name;
    float math;
    float literature;
    float english;
};

int main() {
    LinkedList<Student> *list = new LinkedList<Student>();

    Student a;
    a.name = "A";
    a.math = 7;
    a.literature = 8.5;
    a.english = 10;

    Student b;
    b.name = "B";
    b.math = 9.5;
    b.literature = 6.5;
    b.english = 9;

    list->add(a);
    list->add(b);

    for (int i=0; i<list->length; i++) {
        Student x = list->get(i);
        cout << x.name << "=> Math:" << x.math << " , Literature:" << x.literature << " , Englist:" << x.english << ";" << endl;
    }

    return 0;
}