//
// Created by ruben on 4/12/19.
//

#include "TwoLinkedList.h"
#include <iostream>
#include <string>
#include <fstream>

void UTEC::TwoLinkedList::push_back1(int value) {
    Node* temp = new Node(value);
    if (empty1()){
        tail1 = temp;
        head1 = temp;
    }
    else if (tail == nullptr){
        tail1->next = temp;
        tail1 = temp;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}

void UTEC::TwoLinkedList::push_back2(int value) {
    Node* temp = new Node(value);
    if (empty2()){
        tail2 = temp;
        head2 = temp;
    }
    else if (tail == nullptr){
        tail2->next = temp;
        tail2 = temp;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}

bool UTEC::TwoLinkedList::empty1() {
    return head1 == nullptr;
}

bool UTEC::TwoLinkedList::empty2() {
    return head2 == nullptr;
}
int UTEC::TwoLinkedList::size1() {
    int cont = 0;
    if (empty1()){
        return 0;
    }
    Node* actual = head1;
    do{
        cont++;
        actual = actual->next;
    }while(actual != nullptr);

    return cont;
}
std::string UTEC::TwoLinkedList::getlist(int valor) {
    std::string txt1;
    std::string txt2 = "";
    std::string txt3 = "";
    Node* temp1 = head1;
    Node* temp2 = head2;

    if (valor == 0){
        if (!is_merged()){
            return "";
        }
        else{

        }
    }
    else if (valor == 1){
        for (int i = 0; i < size1() ; i++) {
            txt1 += std::to_string(temp1->value) + " ";
            temp1 = temp1 -> next;
        }
        return txt1;
    }
    else if (valor == 2){
        for (int i = 0; i < size2() ; i++) {
            txt1 += std::to_string(temp2->value) + " ";
            temp2 = temp2 -> next;
        }
        return txt1;
    }
    else{
        return "Valor incorrecto";
    }
}



int UTEC::TwoLinkedList::size2() {
    int cont = 0;
    if (empty2()){
        return 0;
    }
    Node* actual = head2;
    do{
        cont++;
        actual = actual->next;
    }while(actual != nullptr);

    return cont;
}

bool UTEC::TwoLinkedList::is_merged() {
    if (tail == nullptr){
        return false;
    }
    else{
        return true;
    }

}

std::string UTEC::TwoLinkedList::merge(int value) {
    Node* temp = new Node(value);
    if (tail == nullptr) {
        tail1->next = temp;
        tail2->next = temp;
        tail = temp;
        return "Operación exitosa";
    }
    else{
        return "Operación duplicada;";
    }
}

int UTEC::TwoLinkedList::get_value1(int posicion) {
    Node* temp = head1;
    if (posicion == 1){
        return temp->value;
    }

    else {
        for (int i = 0; i < posicion; i++) {
            temp = temp->next;
        }
    }
    return temp->value;
}

int UTEC::TwoLinkedList::get_value2(int posicion) {
    Node* temp = head2;
    if (posicion == 1){
        return temp->value;
    }

    else {
        for (int i = 0; i < posicion; i++) {
            temp = temp->next;
        }
    }
    return temp->value;
}

UTEC::Node *UTEC::TwoLinkedList::search(int valor) {
    Node* temp = nullptr;
    while (temp->value != valor){
        temp = temp->next;
    }
    return temp;
}

void UTEC::TwoLinkedList::save(std::string archivo) {
    std::ofstream file;
    file.open("archivo.txt");
    for (int i = 0; i < size1(); i++){
        file << get_value1(i) << ", ";
    }
    for (int i = 0; i < size2(); i++){
        file << get_value1(i) << ", ";
    }
    file << tail;
}

void UTEC::TwoLinkedList::load(std::string archivo) {

}
