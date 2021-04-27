#include <iostream>
#include "ll.h"

using namespace std;

list::list(){
    head = nullptr;
}


void list::push(int data){
    Node *temp = new Node;
    temp->value = data;
    temp->prev = temp->next = nullptr;

    if(head == nullptr){
        head = temp;
    }else{
        Node *itr = head;
        while(itr->next){
            itr = itr->next;
        }
        temp->prev = itr;
        itr->next = temp;
    }
    count++;
}
int list::pop(){
    Node *temp = head;
    while(temp->next){
        temp = temp->next;
    }
    int x = temp->value;
    if(temp == head){
        head = nullptr;
    }else{
        temp->prev->next = nullptr;
    }
    delete temp;
    count --;
    return x;
}
void list::print(){
    Node *temp = head;
    while(temp){
        cout << temp->value <<" ";
        temp = temp->next;
    }
    cout << "\n";
}
int list::size(){
    return count;
}



int main(){
    list l;
    l.push(5);
    l.push(6);
    l.push(7);
    l.push(8);
    l.push(9);
    cout << "size = "<<l.size()<<endl;
    l.print();
    cout << "deleted: "<<l.pop() << endl;
    cout << "\nsize = "<<l.size()<<endl;
    l.print();
    cout << "deleted: "<<l.pop() << endl;
    l.print();
    cout << "\nsize = "<<l.size()<<endl;
    cout << "deleted: "<<l.pop() << endl;
    cout << "deleted: "<<l.pop() << endl;
    l.print();
    cout << "size = "<<l.size()<<endl;
    cout << "deleted: "<<l.pop() << endl;
    l.print();
    cout << "size = "<<l.size()<<endl;
}