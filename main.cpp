#include <iostream>
#include "linkedlist.h"

using namespace std;

int main()
{
    LinkedList list;

    cout << "Is the list empty? ... " << list.isEmpty() << endl << endl;

    cout << "insertFront 5 times" << endl;
    cout << "insertBack 5 times" << endl;

    list.insertFront(7);
    list.insertFront(1);
    list.insertFront(4);
    list.insertFront(9);
    list.insertFront(12);

    list.insertBack(92);
    list.insertBack(13);
    list.insertBack(46);
    list.insertBack(15);
    list.insertBack(38);

    list.print();

    cout << endl << endl;

    cout << "Num of elements in the list... " << list.size() << endl;
    cout << "Is the list empty? ... " << list.isEmpty() << endl;
    cout << "Is the list full? ... " << list.isFull() << endl;

    cout << endl;

    cout << "deleteFront twice" << endl;
    cout << "deleteBack 3 times" << endl;

    list.deleteFront();
    list.deleteFront();

    list.deleteBack();
    list.deleteBack();
    list.deleteBack();

    list.print();

    cout << endl << endl;

    cout << "delete all... " << endl;

    list.deleteAll();

    cout << "Num of elements in the list... " << list.size() << endl;
    cout << "Is the list empty? ... " << list.isEmpty() << endl << endl;

    return 0;
}
