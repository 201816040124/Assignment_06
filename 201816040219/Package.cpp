#include <iostream>
using namespace std;
#include <string>
#include "Package.h" // include definition of class Package


Package::Package( string first,string second,string dizhi,string chengshi,string zhou,int you,double zhong,double ang)
//���캯��
{
 send=first;
 receive=second;
 di=dizhi;
 cheng=chengshi;
 zhouu=zhou;
 a=you;

 if(zhong>=0)
      setWei(zhong);
 else
    cout<<"wight out of range";

 if(ang>=0)
     setAng(ang);
else
    cout<<"out of range";
}

void Package::setWei(double zhong)
{
    b=zhong;
}

double Package::getWei()
{
    return b;
}

void Package::setAng(double ang)
{
    c=ang;
}

double Package::getAng()
{
    return c;
}


double Package::calculatecost()
{
    return b*c;
}

void Package::print()
{

    cout<<"�ļ���"<<send<<" "<<"�ռ���"<<receive<<"  "
    <<"��ַ "<<di<<"  "<<"����"<<cheng<<"  "<<"�� "
    <<zhouu<<"  "<<"�������� "<<a<<"  "<<
   "����"<<b<<"  "<<"��˾"<<c<<"  ";
}






