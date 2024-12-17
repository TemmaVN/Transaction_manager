#include "GDNha.h"

GDNha::GDNha()
{
	this->DiaChi = "";
	this->DienTich = 0;
	this->LoaiNha = "";
}

GDNha::GDNha(string MaGD, string NgayGD, long long DonGia, string LoaiNha, string DiaChi, float DienTich):GiaoDich(MaGD, NgayGD, DonGia)
{
	this->LoaiNha = LoaiNha;
	this->DiaChi = DiaChi;
	this->DienTich = DienTich;
}

void GDNha::SetLoaiNha(string LoaiNha)
{
	this->LoaiNha = LoaiNha;
}

void GDNha::SetDiaChi(string DiaChi)
{
	this->DiaChi = DiaChi;
}

void GDNha::SetDienTich(float DienTich)
{
	this->DienTich = DienTich;
}

string GDNha::GetLoaiNha()
{
	return this->LoaiNha;
}

string GDNha::GetDiaChi()
{
	return this->DiaChi;
}

float GDNha::GetDienTich()
{
	return this->DienTich;
}

void GDNha::XuatTTGDNha()
{
	cout << "Cac thong tin cua giao dich nha la : " << endl;
	XuatTTGD();
	cout << "Loai nha la : " << LoaiNha << endl;
	cout << "Dia chi la : " << DiaChi << endl;
	cout << "Dien tich " << DienTich << " m**2" << endl;
}
