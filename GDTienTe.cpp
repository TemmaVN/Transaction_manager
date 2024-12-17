#include "GDTienTe.h"

GDTienTe::GDTienTe()
{
	this->LoaiTT = "";
	this->SoLuong = 0;
	this->TiGia = 0;
}

GDTienTe::GDTienTe(string MaGD, string NgayGD, long long DonGia, int SoLuong, float TiGia, string LoaiTT):GiaoDich(MaGD,NgayGD,DonGia)
{
	this->LoaiTT = LoaiTT;
	this->SoLuong = SoLuong;
	this->TiGia = TiGia;
}

void GDTienTe::SetLoaiTT(string LoaiTT)
{
	this->LoaiTT = LoaiTT;
}

void GDTienTe::SetSoLuong(int SoLuong)
{
	this->SoLuong = SoLuong;
}

void GDTienTe::SetTiGia(float TiGia)
{
	this->TiGia = TiGia;
}

string GDTienTe::GetLoaiTT()
{
	return this->LoaiTT;
}

int GDTienTe::GetSoLuong()
{
	return this->SoLuong;
}

float GDTienTe::GetTiGia()
{
	return this->TiGia;
}

long long GDTienTe::TriGia()
{
	return DonGia * SoLuong * int(TiGia);
}

void GDTienTe::XuatTTGDTT()
{
	cout << "Cac thong tin cua giao dich tien te la : " << endl;
	XuatTTGD();
	cout << "Loai Tien te la : " << LoaiTT << endl;
	cout << "So Luong la : " << LoaiTT << endl;
	cout << "Ti Gia La : " << TiGia << endl;
	cout << "Tri Gia La : " << TriGia() << endl;
}
