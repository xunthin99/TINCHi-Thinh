#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string>
#include <stdio.h>
#include <dos.h>
#include<iomanip>
#include<fstream>
#include <cstdlib>
#include <ctime> 
#include <time.h>
#define MAXMH 300

// danh sach sinh vien : ds lien ket don 
struct sinhVien{
	char mssv[13]; 	//ma sinh vien //**//
	char ho[21]; 	//ho sinh vien
	char ten[11];	//ten sinh vien
	char phai[4]; 	// gioi tinh
	char sdt[12]; 	// so dien thoai
	char malop[15];
	int namnhaphoc;
};
struct nodeSinhVien{
	sinhVien SV;
	nodeSinhVien *next;
};
typedef nodeSinhVien *PTRSV;



// Danh sach dang ki (Danh sach lien ket don)
struct NodeDK {
	char mssv[11]; //ma sinh vien
	float  diem;	//diem
};
struct dsdk {
	NodeDK Dk;
	dsdk *next;
};
typedef dsdk *PTRDK;
// danh sach mon hoc  1 mang con tro 300 mon 

struct monHoc {
	char maMonHoc[11] ;
	std::string TenMH ;
	float sotclt ;
	float sotcth ;
};

struct DSMonHoc {
  int n;
  DSMonHoc *monHoc [MAXMH]; 
};


// danh sach lop tin chi theo cay nhi phan 

struct LopTC{
	int  malopTc; 		//ma lop
	char mmh[11];		//ma mon hoc
	int nienkhoa;		// nien khoa
	int hocki;		// hoc ki
	int nhom;			//nhom
	int so_svmax;
	int so_sv_min;
   
	PTRDK DSSVDK = NULL; // con tro tro den danh sach sv dang ki lop tin chi 
};
struct NodeLopTC{
	LopTC data ;
	NodeLopTC *pLeft;
	NodeLopTC *pRight;
};
typedef struct NodeLopTC NODE;
typedef NODE* TREE;
