#pragma once
#include "BaiKtra.h"
class Tuluan : public BaiKtra
{
	private:
		int diemTL;
	public:
		void nhap()
		{
			BaiKtra::nhap();
			cout << "diem bai kt tu luan: "; cin >> this->diemTL;
		}
		void xuat()
		{
			BaiKtra::xuat();
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
		float getDiemTB()
		{
			// Assuming diemTB is the score for Tuluan
			return diemTL;
		}
};

