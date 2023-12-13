#pragma once
#include "BaiKtra.h"
#include "Tracnghiem.h"
#include "Tuluan.h"
class Lophoc : public BaiKtra
{
private:
	int soLuong;
	BaiKtra** DsBai;
public:
	Lophoc()
	{
		this->soLuong = 1;
		DsBai = new BaiKtra * [soLuong];
		for (int i = 0; i < this->soLuong; i++)
		{
			DsBai[i] = NULL;
		}
	}
	~Lophoc()
	{
		for (int i = 0; i < soLuong; i++)
		{
			delete DsBai[i];
		}delete[]DsBai;
	}
	void nhap()
	{
		int loai;
		cout << "nhap so luong: ";
		cin >> this->soLuong;
		DsBai = new BaiKtra * [this->soLuong];
		for (int i = 0; i < this->soLuong; i++)
		{
			cout << "chon tu luan(1) hoac trac nghiem(2): ";
			cin >> loai;
			switch (loai)
			{
			case 1:
				DsBai[i] = new Tuluan;
				break;
			case 2:
				DsBai[i] = new Tracnghiem;
				break;
			}
			DsBai[i]->nhap();
		}
	}
	void xuat()
	{
		for (int i = 0; i < this->soLuong; i++)
		{
			DsBai[i]->xuat();
		}
	}
	int demTracnghiem()
	{
		int count = 0;
		for (int i = 0; i < this->soLuong; i++)
		{
			string loai = typeid(*this->DsBai[i]).name();
			if (loai == "class Tracnghiem")
			{
				count++;
			}
		}
		return count;
	}
	int tongTGX(int maMonHoc)
	{
		int sum = 0;
		for (int i = 0; i < this->soLuong; i++)
		{
			if (maMonHoc == this->DsBai[i]->getmaMonhoc())
			{
				sum = sum + this->DsBai[i]->getsoPhut();
			}
		}
		return sum;
	}
	float tinhDiemTB(int maMonhoc)
	{
		//int count = 0;
		//int sum = 0;
		//for (int i = 0; i < this->soLuong; i++)
		//{
			//if (maMonhoc == this->DsBai[i]->getmaMonhoc())
			//{
			//	sum = sum + (((Tuluan*)this->DsBai[i])->getdiemTL());
			//	count++;
			//}
		//}
		//return this./count;
		float sum = 0;
		int count = 0;
		for (int i = 0; i < this->soLuong; i++)
		{
			if (maMonhoc == this->DsBai[i]->getmaMonhoc())
			{
				if (typeid(*DsBai[i]) == typeid(Tracnghiem)) {
					sum = sum + ((Tracnghiem*)this->DsBai[i])->getDiemTB();
				}
				// Similarly, you can check for Tuluan and call its function
				else if (typeid(*DsBai[i]) == typeid(Tuluan)) {
					sum += ((Tuluan*)this->DsBai[i])->getDiemTB();
				}
				count++;
			}
		}
		return sum / count;
	
	}
};

