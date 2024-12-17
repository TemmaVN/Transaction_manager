#include "GDVang.h"

GDVang::GDVang()
{
	this->LoaiVang = "";
	this->SoLuong = 0;
}

GDVang::GDVang(string MaGD, string NgayGD, long long DonGia, int SoLuong, string LoaiVang):GiaoDich(MaGD,NgayGD,DonGia)
{
	this->SoLuong = SoLuong;
	this->LoaiVang = LoaiVang;
}

void GDVang::SetLoaiVang(string LoaiVang)
{
	this->LoaiVang = LoaiVang;
}

void GDVang::SetSoLuong(int SoLuong)
{
	this->SoLuong = SoLuong;
}

string GDVang::GetLoaiVang()
{
	return this->LoaiVang;
}

int GDVang::GetSoLuong()
{
	return this->SoLuong;
}

long long GDVang::TriGia()
{
	return SoLuong * DonGia;
}

void GDVang::XuatTTGDVang()
{
	cout << "Thong tin cua giao dich vang la : " << endl;
	XuatTTGD();
	cout << "Loai vang la : " << this->LoaiVang << endl;
	cout << "So luong la : " << this->SoLuong << endl;
	cout << "Tri gia la : " << TriGia() << endl;
}


