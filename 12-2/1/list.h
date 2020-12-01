#pragma once

#include <iostream>

using namespace std;

template <class T>
class Node
{
    public:
        T data;
        Node<T>* next;
};

template <class T>
class List{
private:
    Node<T>* head;
public:
    List():head(NULL){};
    ~List(){
        while(head != NULL){
            pop_front();
        }
    }
    List(T* arr, int n_nodes){
        head = new Node<T>;
        head->next = NULL;
        head->data = arr[0];
        for(int i = 1; i < n_nodes; i++){
            Node<T>* temp = new Node<T>;
            temp-> data = arr[i];
            temp-> next = NULL;
            if( head->next == NULL){
                head->next = temp;
            }
            else{
                Node<T>* arNode = head;
                while(arNode->next != NULL){
                    arNode = arNode->next;
                }
                arNode->next = temp;
            }
        }
    }
    void insert_at(int idx, const T& data){
        Node<T>* temp = new Node<T>;
        temp-> data = data;
        temp-> next = NULL;
        Node<T>* arNode = head;
        for( int i = 0; i < idx -1; i++){
            arNode = arNode->next;
        }
        temp->next = arNode->next;
        arNode->next = temp;
    }
    void remove_at(int idx){
        Node<T>* arNode = head;
        Node<T>* delIdx;
        for( int i = 0; i < idx - 1; i++){
            arNode = arNode->next;
        }
        delIdx = arNode->next;
        arNode->next = delIdx->next;
        delIdx->next = NULL;
        delete delIdx;
    }
    void pop_back(){
        Node<T>* arNode = head;
        Node<T>* pst = head;
        while( arNode->next != NULL){
            pst = arNode;
            arNode = arNode->next;
        }
        pst->next = NULL;
        delete arNode;
    }
    void push_back(const T& val){
        Node<T>* temp = new Node<T>;
        temp->data = val;
        temp->next = NULL;
        Node<T>* arNode = head;
        while( arNode->next != NULL){
            arNode = arNode->next;
        }
        arNode->next = temp;
    }
    void pop_front(){
        Node<T>* arNode = head;
        head = arNode->next;
        arNode->next = NULL;
        delete arNode;
    }
    void push_front(const T& val){
        Node<T>* secNode = new Node<T>;
        secNode->data = head->data;
        secNode->next = head->next;
        head->data = val;
        head->next = secNode;
    }
        
    friend ostream& operator<<(ostream& out, List& rhs){
        Node<T>* arNode = rhs.head;
        out << arNode->data << "";
        while( arNode->next != NULL){
            arNode = arNode->next;
            out << "," << arNode->data << "";
        }
        return out;
    }
};

