#include <bits/stdc++.h>
#include "nhanvien.h"
using namespace std;
#ifndef nhanvienHH_h
#define nhanvienHH_h
class nhanvienHH : public nhanvien
{
protected:
	double tongdoanhthu;
	double mucthuong;
public:
	nhanvienHH(string, string, string, int ,int);
	double getSalary()const
	{	
		return this->tongdoanhthu * this->mucthuong / 100;
	}
};
nhanvienHH :: nhanvienHH(string name, string ID, string Tax, int tongdoanhthu, int mucthuong)
{
	this -> name = name;
	this -> ID=ID;
	this -> Tax=Tax;
	this -> tongdoanhthu=tongdoanhthu;
	this -> mucthuong = mucthuong;
}
#endif

