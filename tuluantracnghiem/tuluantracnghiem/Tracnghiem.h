#pragma once
#include "BaiKtra.h"
class Tracnghiem : public BaiKtra
{
private:
	int tongSoCau;
	int soCauDung;
	float diemTN;
public:
	void nhap()
	{
		BaiKtra::nhap();
		cout << "nhap tong so cau: "; cin >> this->tongSoCau;
		cout << "nhap so cau dung: "; cin >> this->soCauDung;
	}
	void xuat()
	{
		BaiKtra::xuat();
		cout << "tong so cau: " << this->tongSoCau << endl;
		cout << "so cau dung: " << this->soCauDung << endl;
		cout << "diem trac nghiem la: " << getDiemTN() << endl;
	}
	void settongSoCau(int tongSoCau)
	{
		this->tongSoCau = tongSoCau;
	}
	float gettongSoCau()
	{
		return this->tongSoCau;
	}
	void setsoCauDung(int soCauDung)
	{
		this->soCauDung = soCauDung;
	}
	float getsoCauDung()
	{
		return this->soCauDung;
	}
	float getDiemTN()
	{
		diemTN = getsoCauDung() / gettongSoCau() * 10;
		return diemTN;
	}
	float getDiemTB()
	{
		// Assuming diemTB is the average score for Tracnghiem
		return getDiemTN();
	}
};


