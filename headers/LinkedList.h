#ifndef HEADERS_LINKEDLIST_H_
#define HEADERS_LINKEDLIST_H_

#include <bits/stdc++.h>

using namespace std;

namespace DataStructures {

template <class var> class LinkedList {
    struct Node {
        var data;
        Node *pNext = NULL;
    };

    Node *head = NULL;

    Node *getLastNode () {
        Node *temp = head;

        while (temp->pNext != NULL) {
            temp = temp->pNext;
        }

        return temp;
    }

    public:
        int length;

        void add(var data) {
            Node *newNode = new Node();
            newNode->data = data;

            if (head == NULL) {
                head = newNode;
            }
            else {
                getLastNode()->pNext = newNode;
            }

            length ++;
        }

        var get(int index) {
            if (index >= length) {
                var null;
                return null;
            }

            Node *temp = head;

            for (int i=0; i<index; i++) {
                temp = temp->pNext;
            }

            return temp->data;
        }

        void test ();
};

}

#endif  // HEADERS_LINKEDLIST_H_