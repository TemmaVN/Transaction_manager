#ifndef GDVANG_H
#define GDVANG_H
#include"Library.h"
#include"GiaoDich.h"

class GDVang:public GiaoDich
{
protected:
	int SoLuong;
	string LoaiVang;
public:
	GDVang();
	GDVang(string MaGD, string NgayGD, long long DonGia, int SoLuong, string LoaiVang);
	void SetSoLuong(int SoLuong);
	void SetLoaiVang(string LoaiVang);
	int GetSoLuong();
	string GetLoaiVang();
	long long TriGia();
	void XuatTTGDVang();
};


#endif // !GDVANG_H

