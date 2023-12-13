#include "Lophoc.h"
void main()
{
	Lophoc a;
	a.nhap();
	a.xuat();
	int demBaiTracnghiem = a.demTracnghiem();
	int tgMonX = a.tongTGX(1);
	int diemTBmon = a.tinhDiemTB(1);
	cout << "so bai ktra trac nghiem la: " << demBaiTracnghiem<<endl;
	cout << "tong thoi gian mon hoc so 1 la: " << tgMonX << endl;
	cout << "diem trung binh mon hoc 1 la: " << diemTBmon << endl;
}