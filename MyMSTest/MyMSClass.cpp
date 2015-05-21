// MyMSClass.cpp: implementation of the CMyMSClass class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MyMSTest.h"
#include "MyMSClass.h"
#include <iostream>
using namespace std;
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CMyMSClass::CMyMSClass()
{
	for(int i=0;i<=9;i++){
		arr[i]=0;
	}
}

CMyMSClass::~CMyMSClass()
{

}

void CMyMSClass::test(int k)
{
	if(k>=0&&k<=9){
		for(int l=1;l<=5;l++){
			arr[k]=l;
			test(k+1);
		}
	}else{
		parsearr();
	}
}
void CMyMSClass::parsearr()
{
	if(isTrue()){
		result="正确答案";
		return;
	}else{
		result="错误答案";
		return;
	}
}

bool CMyMSClass::isTrue()
{
	if((function0())&&(function1())&&(function2())&&(function3())&&(function4())\
		&&(function5())&&(function6())&&(function7())&&(function8())&&(function9())){
		return true;
	}
	else{
		return false;
	}
}

bool CMyMSClass::function0()
{
	int i_0=arr[0];
	switch(i_0){
	case 1:
 		return ((arr[0]!=2)&&(arr[1]==2));	
	case 2:
		return ((arr[0]!=2)&&(arr[1]!=2)&&(arr[2]==2));
	case 3:
		return ((arr[0]!=2)&&(arr[1]!=2)&&(arr[2]!=2)&&(arr[3]==2));
	case 4:
		return ((arr[0]!=2)&&(arr[1]!=2)&&(arr[2]!=2)&&(arr[3]!=2)&&(arr[4]==2));
	case 5:
		return ((arr[0]!=2)&&(arr[1]!=2)&&(arr[2]!=2)&&(arr[3]!=2)&&(arr[4]!=2)&&(arr[5]==2));
	default:
		return false;
	}
}
bool CMyMSClass::function1()
{
		int i_1=arr[1];
	switch(i_1){
	case 1:
		return ((arr[0]!=arr[1])&&(arr[1]==arr[2])&&(arr[2]!=arr[3])&&(arr[3]!=arr[4])&&(arr[4]!=arr[5])&&(arr[5]!=arr[6])&&(arr[6]!=arr[7])&&(arr[7]!=arr[8])&&(arr[8]!=arr[9]));	
	case 2:
		return ((arr[0]!=arr[1])&&(arr[1]!=arr[2])&&(arr[2]==arr[3])&&(arr[3]!=arr[4])&&(arr[4]!=arr[5])&&(arr[5]!=arr[6])&&(arr[6]!=arr[7])&&(arr[7]!=arr[8])&&(arr[8]!=arr[9]));	
	case 3:
		return ((arr[0]!=arr[1])&&(arr[1]!=arr[2])&&(arr[2]!=arr[3])&&(arr[3]==arr[4])&&(arr[4]!=arr[5])&&(arr[5]!=arr[6])&&(arr[6]!=arr[7])&&(arr[7]!=arr[8])&&(arr[8]!=arr[9]));	
	case 4:
		return ((arr[0]!=arr[1])&&(arr[1]!=arr[2])&&(arr[2]!=arr[3])&&(arr[3]!=arr[4])&&(arr[4]==arr[5])&&(arr[5]!=arr[6])&&(arr[6]!=arr[7])&&(arr[7]!=arr[8])&&(arr[8]!=arr[9]));	
	case 5:
		return ((arr[0]!=arr[1])&&(arr[1]!=arr[2])&&(arr[2]!=arr[3])&&(arr[3]!=arr[4])&&(arr[4]!=arr[5])&&(arr[5]==arr[6])&&(arr[6]!=arr[7])&&(arr[7]!=arr[8])&&(arr[8]!=arr[9]));	
	default:
		return false;
	}
}
bool CMyMSClass::function2()
{
		int i_2=arr[2];
	switch(i_2){
	case 1:
		return (arr[0]==arr[2]);
	case 2:
		return (arr[1]==arr[2]);
	case 3:
		return (arr[3]==arr[2]);
	case 4:
		return (arr[6]==arr[2]);
	case 5:
		return (arr[5]==arr[2]);
	default:
		return false;
	}
}
bool CMyMSClass::function3()
{
		int i_3=arr[3];
	int m=0;
	for(int l=0;l<10;l++){
		if(arr[l]==1)m++;
	}
	switch(i_3){
	case 1:
		return (m==0);
	case 2:	
		return (m==1);
	case 3:	
		return (m==2);
	case 4:	
		return (m==3);
	case 5:	
		return (m==4);
	default:
		return false;
	}
}
bool CMyMSClass::function4()
{
		int i_4=arr[4];
	switch(i_4){
	case 1:
		return (arr[4]==arr[9]);
	case 2:	
		return (arr[4]==arr[8]);
	case 3:	
		return (arr[4]==arr[7]);
	case 4:	
		return (arr[4]==arr[6]);
	case 5:	
		return (arr[4]==arr[5]);
	default:
		return false;
	}
}
bool CMyMSClass::function5()
{
		int i_5=arr[5];
	int ma=0,mb=0,mc=0,md=0,me=0;
	for(int lma=0;lma<10;lma++){
		if(arr[lma]==1)ma++;	
		if(arr[lma]==2)mb++;
		if(arr[lma]==3)mc++;
		if(arr[lma]==4)md++;
		if(arr[lma]==5)me++;
	}
	switch(i_5){
	case 1:
		return (ma==mb);
	case 2:	
		return (ma==mc);
	case 3:	
		return (ma==md);
	case 4:	
		return (ma==me);
	case 5:	
		return ((ma!=mb)&&(ma!=mc)&&(ma!=md)&&(ma!=me));
	default:
		return false;
	}
}
bool CMyMSClass::function6()
{
		int i_6=arr[6];
	switch(i_6){
	case 1:
		return (abs(arr[6]-arr[7])==4) ;
	case 2:	
		return (abs(arr[6]-arr[7])==3) ;
	case 3:	
		return (abs(arr[6]-arr[7])==2) ;
	case 4:	
		return (abs(arr[6]-arr[7])==1) ;
	case 5:	
		return (abs(arr[6]-arr[7])==0) ;
	default:
		return false;
	}
}
bool CMyMSClass::function7()
{
		int i_7=arr[7];
	int ma=0;
	for(int lma=0;lma<10;lma++){
		if((arr[lma]==1)||(arr[lma]==5))ma++;	
	}
	switch(i_7){
	case 1:
		return (ma==2);
	case 2:	
		return (ma==3);
	case 3:	
		return (ma==4);
	case 4:	
		return (ma==5);
	case 5:	
		return (ma==6);
	default:
		return false;
	}
}
bool CMyMSClass::function8()
{
		int i_8=arr[8];
	int ma=0;
	for(int lma=0;lma<10;lma++){
		if((arr[lma]==2)||(arr[lma]==3)||(arr[lma]==4))ma++;	
	}
	switch(i_8){
	case 1:
		return ((ma==2)||(ma==3)||(ma==5)||(ma==7));
	case 2:	
		return ((ma==1)||(ma==2)||(ma==6));
	case 3:	
		return ((ma==1)||(ma==4)||(ma==9));
	case 4:	
		return ((ma==1)||(ma==8));
	case 5:	
		return ((ma==5)||(ma==10));
	default:
		return false;
	}
}
bool CMyMSClass::function9()
{
		int i_9=arr[9];
	int ma=0;
	switch(i_9){
	case 1:
		return (arr[9]==1);
	case 2:	
		return (arr[9]==2);
	case 3:	
		return (arr[9]==3);
	case 4:	
		return (arr[9]==4);
	case 5:	
		return (arr[9]==5);
	default:
		return false;
	}
}

