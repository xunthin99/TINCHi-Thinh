#pragma once
#include "kb.h"

//using namespace std;

void ThemNodeVaoCay(TREE &t, LopTC x)
{
	
	if (t == NULL)
	{
		NODE* p = new NODE;
		p->data = x ;
		p->pLeft = NULL;
		p->pRight = NULL;
		t = p; 
	}
	else
	{
		if (x.malopTc > t->data.malopTc)
		{
			ThemNodeVaoCay(t->pRight, x);
		}
		else if (x.malopTc < t->data.malopTc)
		{
			ThemNodeVaoCay(t->pLeft, x);
		}
	}
}
void KhoiTaoCay(TREE &t)
{
	t = NULL;
}
void nhap (LopTC x){
	    NODE* t = new NODE;
		std::cout << "\nNhap ma lop tin chi : ";
		std::cin >> x.malopTc ;
		fflush(stdin);
		std::cout << "\nNhap ma mon hoc : " ;
		gets(x.mmh) ;
		std::cout << "\nNhap nien khoa: " ;
		std::cin >>x.nienkhoa;
		std::cout << "\nNhap hoc ky : ";
		std::cin >> x.hocki ; 
		std::cout<<"\nNhap nhom : " ;
		std::cin >> x.nhom ;
		std::cout << "\nNhap so sinh vien max : " ;
		std::cin >> x.so_svmax ;
		std::cout <<"\nNhap so sinh vien min : " ;
		std::cin >>x.so_sv_min ;
		
		ThemNodeVaoCay(t, x);
}

