#ifndef GDTIENTE_H
#define GDTIENTE_H
#include"Library.h"
#include"GiaoDich.h"

class GDTienTe:public GiaoDich
{
protected:
	int SoLuong;
	float TiGia;
	string LoaiTT;
public:
	GDTienTe();
	GDTienTe(string MaGD, string NgayGD, long long DonGia, int SoLuong, float TiGia, string LoaiTT);
	void SetSoLuong(int SoLuong);
	void SetTiGia(float TiGia);
	void SetLoaiTT(string LoaiTT);
	int GetSoLuong();
	float GetTiGia();
	string GetLoaiTT();
	long long TriGia();
	void XuatTTGDTT();
};

#endif // !GDTIENTE_H



