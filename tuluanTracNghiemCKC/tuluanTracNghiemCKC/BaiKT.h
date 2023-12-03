#pragma once
#include<iostream>
#include<string>
using namespace std;
class BaiKT
{
protected:
	int maMonhoc;
	int soPhut;
public:
	virtual void nhap()
	{
		cout << "nhap ma mon hoc: "; cin >> this->maMonhoc;
		cout << "nhap thoi gian lam bai: "; cin >> this->soPhut;
	}
	virtual void xuat()
	{
		cout << "ma mon hoc la: " << this->maMonhoc;
		cout << "thoi gian lam bai la: " << this->soPhut;
	}
	void setmaMonhoc(int maMonhoc)
	{
		this->maMonhoc = maMonhoc;
	}
	int getmaMonhoc()
	{
		return this->maMonhoc;
	}
	void setsoPhut(int soPhut)
	{
		this->soPhut = soPhut;
	}
	int getsoPhut()
	{
		return this->soPhut;
	}
};

