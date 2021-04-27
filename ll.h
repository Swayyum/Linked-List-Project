#ifndef DDL_H
#define LL_H
#include<iostream>


typedef struct Node
{
    int value;
    struct Node *next;
    struct Node *prev;
}Node;

class list
{
    Node *head;
    int count = 0;

public:
    dList();
    dList(int);
    void push(int);
    int pop();
    int size();
    void print();
   
};
#endif