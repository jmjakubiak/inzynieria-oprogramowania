//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Newton.cpp
//  @ Date : 2018-03-24
//  @ Author : 
//
//


#include "Newton.h"

int Newton::licz(int n, int k) {
    int wynik = silnia.licz(n) / (silnia.licz(k) * silnia.licz(n-k));
    return wynik;
}
