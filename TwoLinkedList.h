//
// Created by ruben on 4/12/19.
//

#ifndef PC1_TWOLINKEDLIST_H
#define PC1_TWOLINKEDLIST_H

#include <string>

namespace UTEC{

    struct Node{
        int value;
        Node* next;
        Node(int value):value{0}, next{nullptr} {}
        void NEXT (Node* valor){
            next = valor;
        }
    };

    class TwoLinkedList {
        Node* head1;
        Node* head2;
        Node* tail1;
        Node* tail2;
        Node* tail = nullptr;
    public:
        int size1();
        int size2();
        void push_back1(int value);
        void push_back2(int value);
        bool empty1();
        bool empty2();
        std::string getlist(int valor);
        bool is_merged();
        std::string merge(int value);
        int get_value1(int posicion);
        int get_value2(int posicion);
        Node* search(int valor);
        void save(std::string archivo);
        void load(std:: string archivo);
    };

}

#endif //PC1_TWOLINKEDLIST_H
