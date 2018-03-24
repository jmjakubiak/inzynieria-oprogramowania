//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Bernoulli.h
//  @ Date : 2018-03-24
//  @ Author : 
//
//


#if !defined(_BERNOULLI_H)
#define _BERNOULLI_H

#include "Newton.h"
#include "Potega.h"
#include <iostream>

class Bernoulli {
public:
    void setPQ();
	double llicz();
	Bernoulli();
private:
	Newton newton;
	Potega potega;
	double wynik;
	int n;
	int k;
	double p;
	double q;
};

#endif  //_BERNOULLI_H
