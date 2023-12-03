#include "Ktra.h"
void main()
{
	Ktra a;
	a.nhap();
	a.xuat();
	int soBaiTN = a.countTracnghiem();
	cout << "so bai kiem tra trac nghiem: "<<soBaiTN<<endl;
	int sumTimeX = a.tongTGX(12);
	cout << "tong thoi gian mon x: " << sumTimeX<<endl;
	int AvgSubjectX = a.AvgX(12);
	cout << "diem trung binh mon x: " << AvgSubjectX << endl;
}