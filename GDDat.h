#ifndef GDDAT_H
#define GDDAT_H
#include"Library.h"
#include"GiaoDich.h"

class GDDat:public GiaoDich
{
protected:
	string LoaiDat;
	float DienTich;
public:
	GDDat();
	GDDat(string MaGD, string NgayGD, long long DonGia, string LoaiDat, float DienTich);
	void SetLoaiDat(string LoaiDat);
	void SetDienTich(float DienTich);
	string GetLoaiDat();
	float GetDienTich();
	void XuatTTGDDat();
};


#endif // !GDDAT_H


