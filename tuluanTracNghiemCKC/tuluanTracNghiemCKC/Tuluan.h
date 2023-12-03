#pragma once
#include "BaiKT.h"
class Tuluan : public BaiKT
{
private:
	int diemTL;
public:
	void nhap()
	{
		BaiKT::nhap();
		cout << "diem bai kt tu luan: "; cin >> this->diemTL;
	}
	void xuat()
	{
		BaiKT::xuat();
		cout << "diem bai kt tu luan: " << this->diemTL << endl;
	}
	void setdiemTL(int diemTL)
	{
		this->diemTL = diemTL;
	}
	float getdiemTL()
	{
		return this->diemTL;
	}
};

