#include <bits/stdc++.h>
#include "nhanvienHH.h"
using namespace std;

class nhanvienHHDB : public nhanvienHH
{
protected:
	double base_salary;
public:
	NhanVienHHDB(string, string, string,double, double, double);
	double getSalary()const
	{
		return this->tongdoanhthu * this->mucthuong / 100 + this -> base_salary *0.1;
	}
};
nhanvienHHDB :: NhanVienHHDB(string name, string ID, string Tax,int tongdoanhthu, int mucthuong, int base_salary)
{
	this -> name = name;
	this -> ID=ID;
	this -> Tax=Tax;
	this -> tongdoanhthu = tongdoanhthu;
	this -> mucthuong = mucthuong;
	this -> base_salary=base_salary;
}
