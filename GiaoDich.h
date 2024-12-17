#ifndef GIAODICH_H
#define GIAODICH_H

#include"Library.h"

class GiaoDich
{
protected:
	string MaGD;
	string NgayGD;
	long long DonGia;
public:
	GiaoDich();
	GiaoDich(string MaGD, string NgayGD, long long DonGia);
	void SetMGD(string MaGD);
	void SetNgayGD(string NgayGD);
	void SetDonGia(long long DonGia);
	string GetMaGD();
	string GetNgayGD();
	long long GetDonGia();
	void XuatTTGD();
};

#endif // !GIAODICH_H



