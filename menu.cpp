//#include <iostream>
//#include <conio.h>
//#include <stdio.h>
//#include <dos.h>
//#include <string.h>
//#include <windows.h>
#pragma once
//#include "kb.h"
#include "mylib.h"
#include "xulide.h"
using namespace std;

const int so_item = 6;
const int so_itemLTC= 6;
const int so_itemSV= 6;
const int so_itemMH= 6;
const int so_itemDIEM= 6;
const int dong =10;
const int cot = 50 ;
const int Up = 72;
const int Down = 80;

char thucdon [so_item][50] = {"1. QUAN LI LOP TIN CHI       ",
			                  "2. QUAN LI SINH VIEN         ",
			                  "3. QUAN LI MON HOC           ",
			                  "4. QUAN LI DIEM              ",
			                  "-----------------------------",
			                  "5. Ket thuc chuong trinh     "};// LOI O DAY
			                  
char thucdonLTC [so_itemLTC][50]= {"1. Them lop tin chi     ",
			                  "2. Xoa lop tin chi           ",
			                  "3. Sua                       ",
			                  "4. Xem danh sach Lop Tin Chi ",
			                  "5. Xem DSSVDK Lop Tin Chi    ",
			                  "6. Quay lai MENU Chinh       "};
char thucdonSV [so_itemSV][50]= {"1. Them lop sinh vien    ",
			                  "2. Xoa lop sinh vien         ",
			                  "3. Sua SV                    ",
			                  "3. Tim kiem thong tin SV     ",
			                  "5. Xem danh sach SV cua 1 Lop",
			                  "6. Quay lai MENU Chinh       "};
char thucdonMH [so_itemMH][50]= {"1. Them lop mon hoc      ",
			                  "2. Xoa mon hoc               ",
			                  "3. Sua mon hoc               ",
			                  "4. Dang Ki mon hoc           ",
			                  "5. Xem danh sach mon hoc     ",
			                  "6. Quay lai MENU Chinh       "};
char thucdonDIEM [so_itemDIEM][50]= {"1. Nhap diem cho LTC       ",
			                  "2. Bang Diem mon hoc             ",
			                  "3. Chinh sua diem                ",
			                  "4. Diem trung binh cua mot lop   ",
			                  "5. Diem Tong Ket               	",
			                  "6. Quay lai MENU Chinh		    "};
void Normal () {
	SetColor(15);
	SetBGColor(0);
}
void HighLight () {
	SetColor(15);
	SetBGColor(2);
}
int MenuDong(char td [so_item][50]){
  Normal();
  system("cls");   int chon =0;
  int i; 
  for ( i=0; i< so_item ; i++)
  { gotoxy(cot, dong +i);
    cout << td[i];
  }
  HighLight();
  gotoxy(cot,dong+chon);
  cout << td[chon];
  char kytu;
do {
  kytu = getch();
  if (kytu==-32) kytu = getch();
  switch (kytu) {
    case Up :if (chon >0)
  			  {
  		        Normal();
              	gotoxy(cot,dong+chon);cout << td[chon];
              	chon --;
              	HighLight();
              	gotoxy(cot,dong+chon); 	cout << td[chon];  				
  			  }
  			  break;
  	case Down :if (chon+1 <so_item)
  			  {
  		        Normal();
              	gotoxy(cot,dong+chon);	cout << td[chon];
              	chon ++;
              	HighLight();
              	gotoxy(cot,dong+chon); 	cout << td[chon];
  				
  			  }
  			  break;
  	case 13 : return chon+1;
  }  // end switch
  } while (1);
}

//int Menu (char td [so_item][50]){
//
//  system("cls");   int chon =0;
//  int i;
//  for ( i=0; i< so_item ; i++)
//  { gotoxy(cot, dong +i);
//    cout << td[i];
//  }
//Nhaplai:
//  gotoxy (cot, dong + so_item);
//  cout << "Ban chon 1 so (1..10) :    ";
//  gotoxy (wherex()-4, wherey());
//  cin >> chon;
//  if (chon <1 || chon >so_item) goto Nhaplai;
//  return chon;
//
//}
//MENU CHA
int menuConLTC(char td [so_itemLTC][50]){
	int chon; 
	LopTC ltc;
	TREE t;
	KhoiTaoCay(t);
	
    while  (1) {
        chon = MenuDong (td); 
        switch (chon) {
        
        case 1: gotoxy (50,20); 
		        cout << "Vua chon chuc nang Them lop tin chi " << chon;
		        Sleep(1000);
		        system("cls");
		        nhap (ltc);
				break;
        case 2:gotoxy (50,20); 
		        cout << "Vua chon chuc nang Xoa lop tin chi " << chon; 
		         break;
		case 3: gotoxy (50,20); 
		        cout << "Vua chon chuc nang Sua lop tin chi " << chon;
				break;
		case 4: gotoxy (50,20); 
		        cout << "Vua chon chuc nang Xem danh sach Lop Tin Chi" << chon;
				break;
		case 5: gotoxy (50,20); 
		        cout << "Vua chon chuc nang Xem DSSVDK Lop Tin Chi" << chon;
				break;
        case so_itemLTC : return 0; 
         }
        Sleep (1000);
    }
    return 0;
}
int menuConSV(char td [so_itemSV][50]){
	int chon;  
    while  (1) {
        chon = MenuDong (td); 
        switch (chon) {
        
        case 1: gotoxy (50,20); 
		        cout << "Vua chon chuc nang " << chon;
				break;
        case 2:gotoxy (50,20); 
		        cout << "Vua chon chuc nang " << chon; 
		         break;
		case 3: gotoxy (50,20); 
		        cout << "Vua chon chuc nang " << chon;
				break;
		case 4: gotoxy (50,20); 
		        cout << "Vua chon chuc nang " << chon;
				break;
		case 5: gotoxy (50,20); 
		        cout << "Vua chon chuc nang " << chon;
				break;
        case so_itemSV : return 0; 
         }
        Sleep (1000);
    }
    return 0;
}
int menuConDIEM(char td [so_itemDIEM][50]){
	int chon;  
    while  (1) {
        chon = MenuDong (td); 
        switch (chon) {
        
        case 1: gotoxy (50,20); 
		        cout << "Vua chon chuc nang " << chon;
				break;
        case 2:gotoxy (50,20); 
		        cout << "Vua chon chuc nang " << chon; 
		         break;
		case 3: gotoxy (50,20); 
		        cout << "Vua chon chuc nang " << chon;
				break;
		case 4: gotoxy (50,20); 
		        cout << "Vua chon chuc nang " << chon;
				break;
		case 5: gotoxy (50,20); 
		        cout << "Vua chon chuc nang " << chon;
				break;
        case so_itemDIEM : return 0; 
         }
        Sleep (1000);
    }
    return 0;
}
int menuConMH(char td [so_itemMH][50]){
	int chon;  
    while  (1) {
        chon = MenuDong (td); 
        switch (chon) {
        
        case 1: gotoxy (50,20); 
		        cout << "Vua chon chuc nang " << chon;
				break;
        case 2:gotoxy (50,20); 
		        cout << "Vua chon chuc nang " << chon; 
		         break;
		case 3: gotoxy (50,20); 
		        cout << "Vua chon chuc nang " << chon;
				break;
		case 4: gotoxy (50,20); 
		        cout << "Vua chon chuc nang " << chon;
				break;
		case 5: gotoxy (50,20); 
		        cout << "Vua chon chuc nang " << chon;
				break;
        case so_itemMH : return 0; 
         }
        Sleep (1000);
    }
    return 0;
}
int main (){
  int chon;  
    while  (1) {
        chon = MenuDong (thucdon);
        switch (chon) {
        case 1: gotoxy (50,20);
		        cout << "Vua chon chuc nang QUAN LI LOP TIN CHI " << chon;
		        Sleep (1000);
		        system("cls");
		        menuConLTC(thucdonLTC); //Da hien thi dc menu con
			    break;
        case 2:gotoxy (50,20); 
		        cout << "Vua chon chuc nang QUAN LI SINH VIEN" << chon;
		        Sleep (1000);
		        system("cls");
		        menuConSV(thucdonSV);
		        break;
		case 3: gotoxy (50,20); 
		        cout << "Vua chon chuc nang QUAN LI MON HOC" << chon;
		        Sleep (1000);
		        system("cls");
		        menuConMH(thucdonMH);
				break;
		case 4: gotoxy (50,20); 
		        cout << "Vua chon chuc nang DIEM " << chon;
		        Sleep (1000);
		        system("cls");
		        menuConDIEM(thucdonDIEM);
				break;
        case so_item  : return 0; 
         }
         Sleep (1000);
    }
    return 0;
}
