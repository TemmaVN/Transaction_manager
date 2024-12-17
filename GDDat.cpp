#include "GDDat.h"

GDDat::GDDat()
{
	this->DienTich = 0;
	this->LoaiDat = "";
}

GDDat::GDDat(string MaGD, string NgayGD, long long DonGia, string LoaiDat,float DienTich):GiaoDich(MaGD,NgayGD,DonGia)
{
	this->DienTich = DienTich;
	this->LoaiDat = LoaiDat;
}

void GDDat::SetLoaiDat(string LoaiDat)
{
	this->LoaiDat = LoaiDat;
} 

void GDDat::SetDienTich(float DienTich)
{
	this->DienTich = DienTich;
}

string GDDat::GetLoaiDat()
{
	return this->LoaiDat;
}

float GDDat::GetDienTich()
{
	return this->DienTich;
}

void GDDat::XuatTTGDDat()
{
	cout << "Cac thong tin cua giao dich dat la : " << endl;
	XuatTTGD();
	cout << "Loai dat la : " << this->LoaiDat << endl;
	cout << "Dien tich : " << this->DienTich << endl;
}
