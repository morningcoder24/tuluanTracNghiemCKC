#pragma once
#include "BaiKT.h"
#include "Tracnghiem.h"
#include "Tuluan.h"
class Ktra : public BaiKT
{
private:
	int soluong;
	BaiKT** dsBaiKT;
public:
	Ktra()
	{
		this->soluong = 1;
		dsBaiKT = new BaiKT * [soluong];
		for (int i = 0; i < soluong; i++)
		{
			dsBaiKT[i] = NULL;
		}
	}
	~Ktra()
	{
		for (int i = 0; i < soluong; i++)
		{
			delete dsBaiKT[i];
		}
		delete[]dsBaiKT;
	}
	void nhap()
	{
		cout << "nhap so luong: ";
		cin >> this->soluong;
		dsBaiKT = new BaiKT * [this->soluong];
		for (int i = 0; i < this->soluong; i++)
		{
			int loai;
			cout << "chon bai ktra trac nghiem(1) va tu luan(2): ";
			cin >> loai;
			switch (loai)
			{
			case 1:
				dsBaiKT[i] = new Tracnghiem;
				break;
			case 2:
				dsBaiKT[i] = new Tuluan;
				break;
			default:
				cout << "chi co 1 va 2 hay nhap lai" << endl;
				break;
			}
			dsBaiKT[i]->nhap();
		}
	}
	void xuat()
	{
		for (int i = 0; i < this->soluong; i++)
		{
			dsBaiKT[i]->xuat();
		}
	}
	int countTracnghiem()
	{
		float count = 0;
		for (int i = 0; i < this->soluong; i++)
		{
			string loai = typeid(*this->dsBaiKT[i]).name();
			if (loai == "class Tracnghiem")
			{
				count = count + 1;
			}
		}
		return count;
	}
	int tongTGX(int X)
	{
		int sum = 0;
		for (int i = 0; i < this->soluong; i++)
		{
			if (X == dsBaiKT[i]->getmaMonhoc())
			{
				sum = sum + dsBaiKT[i]->getsoPhut();
			}
		}
		return sum;
	}
	int AvgX(int X)
	{
		int avg = 0;
		for (int i = 0; i < this->soluong; i++)
		{
			if (X == dsBaiKT[i]->getmaMonhoc())
			{
				avg = dsBaiKT[i].get
			}
		}
	}
};

