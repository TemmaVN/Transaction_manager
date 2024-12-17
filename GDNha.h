#ifndef GDNHA_H
#define GDNHA_H
#include"GiaoDich.h"

class GDNha:public GiaoDich
{
protected:
	string LoaiNha;
	string DiaChi;
	float DienTich;
public:
	GDNha();
	GDNha(string MaGD, string NgayGD, long long DonGia, string LoaiNha, string DiaChi, float DienTich);
	void SetLoaiNha(string LoaiNha);
	void SetDiaChi(string DiaChi);
	void SetDienTich(float DienTich);
	string GetLoaiNha();
	string GetDiaChi();
	float GetDienTich();
	void XuatTTGDNha();
};

#endif // !GDNHA_H



