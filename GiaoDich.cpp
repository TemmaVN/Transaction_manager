#include "GiaoDich.h"

GiaoDich::GiaoDich()
{
	this->MaGD = "";
	this->NgayGD = "0/0/0000";
	this->DonGia = 0;
}

GiaoDich::GiaoDich(string MaGD, string NgayGD, long long DonGia)
{
	this->MaGD = MaGD;
	this->NgayGD = NgayGD;
	this->DonGia = DonGia;
}

void GiaoDich::SetMGD(string MaGD)
{
	this->MaGD = MaGD;
}

void GiaoDich::SetNgayGD(string NgayGD)
{
	this->NgayGD = NgayGD;
}

void GiaoDich::SetDonGia(long long DonGia)
{
	this->DonGia = DonGia;
}

string GiaoDich::GetMaGD()
{
	return this->MaGD;
}

string GiaoDich::GetNgayGD()
{
	return this->NgayGD;
}

long long GiaoDich::GetDonGia()
{
	return this->DonGia;
}

void GiaoDich::XuatTTGD()
{
	cout << "Thong tin giao dich la :" << endl;
	cout << "Ma giao dich la : " << this->MaGD << endl;
	cout << "Ngay giao dich la : " << this->NgayGD << endl;
	cout << "Don gia la : " << this->DonGia << endl;
}


