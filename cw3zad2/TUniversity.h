//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : TUniversity.h
//  @ Date : 2018-03-18
//  @ Author :
//
// cw 3 zad 2


#if !defined(_TUNIVERSITY_H)
#define _TUNIVERSITY_H
#include <vector>

using namespace std;

class TUniversity {
public:
	void attach(TStudent* st);
	void detach();
	void printData(int i);
	void setData(int i, string name, int age);
private:
	vector<TStudent*> students;
};

#endif  //_TUNIVERSITY_H
