#include <bits/stdc++.h>
#include "nhanvien.h"
using namespace std;
#ifndef nhanvienBc_h
#define nhanvienBc_h
class nhanvienBC : public nhanvien
{
protected:
	int fixSalary;
private:
	nhanvienBC(string, string, string, int );
	void SetfixSalary(int fixSalary);
	int getfixSalary()const;
	int getSalary()const
	{
		return this -> fixSalary;
	}
};
nhanvienBC :: nhanvienBC(string name, string ID, string Tax, int fixSalary)
{
	this -> name = name;
	this -> ID=ID;
	this -> Tax=Tax;
	this -> fixSalary=fixSalary;
	
}
void nhanvienBC :: SetfixSalary(int fixSalary)
{
	this -> fixSalary = fixSalary;
}
int nhanvienBC :: getfixSalary()const
{
	return this -> fixSalary;
}
#endif
