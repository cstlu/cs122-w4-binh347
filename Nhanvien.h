#include <bits/stdc++.h>
using namespace std;

class nhanvien
{
protected:
	string name,ID, Tax;
public:
	void Set(string, string, string );
	string GetID()const;
	string Getname()const;
	string GetTax()const;
	int getSalary()const;
};
void nhanvien :: Set(string name, string ID, string Tax)
{
	this -> name=name;
	this -> ID = ID;
	this -> Tax=Tax;
}
string nhanvien :: GetID()const
{
	return this-> ID;
}
string nhanvien :: Getname()const
{
	return this -> name;
}
string nhanvien :: GetTax()const
{
	return this -> Tax;
}
int nhanvien :: getSalary()const
{
	return 0;
}
