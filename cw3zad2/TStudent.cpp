//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : TStudent.cpp
//  @ Date : 2018-03-18
//  @ Author :
//
// cw 3 zad 2


#include "TStudent.h"

TStudent::TStudent() {

}

TStudent::~TStudent() {

}

void TStudent::setName(string name) {
    this->studentName = name;
}

void TStudent::setAge(int age) {
    this->studentAge = age;
}

string TStudent::getName() {
    return this->studentName;
}

int TStudent::getAge() {
    return this->studentAge;
}

