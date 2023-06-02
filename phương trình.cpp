#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.1415926535898

void giaiptbacnhat(float a, float b)
{
    if (a==0&&b==0)
        cout<<"Phuong trinh vo so nghiem"<<endl;
    else if (a==0&&b!=0)
        cout<<"Phuong trinh vo nghiem"<<endl;
    else
        cout<<"Phuong trinh co nghiem: x= "<<-b/a<<endl;
}
void giaiptbachai(float a, float b, float c)
{
    if (a==0)
        giaiptbacnhat(b,c);
    else
    {
        float delta=b*b-4*a*c;
        if (delta<0)
            cout<<"Phuong trinh vo nghiem"<<endl;
        else if (delta==0)
            cout<<"Phuong trinh co nghiem kep x= "<<-b/(2*a);
        else cout<<"Phuong trinh co nghiem x1= "<<(-b+sqrt(delta))/(2*a)<<" x2= " <<(-b-sqrt(delta))/(2*a)<<endl;
    }
        }
void giaiptbacba(float a, float b, float c, float d)
{
    float delta,k,x1,x2,x3,x;
    if(a==0)
    {
      cout<<"Phuong trinh vo nghiem"<<endl;
    }
    delta=pow(b,2)-3*a*c;
    k=(9*a*b*c-2*pow(b,3)-27*pow(a,2)*d)/(2*sqrt(pow(fabs(delta),3)));
    if(delta>0)
    {
      if(fabs(k)<=1)
      {
        x1=(2*sqrt(delta)*cos(acos(k)/3)-b)/(3*a);
        x2=(2*sqrt(delta)*cos(acos(k)/3-(2 *PI/3))-b)/(3*a);
        x3=(2*sqrt(delta)*cos(acos(k)/3+(2 *PI/3))-b)/(3*a);
        cout<<"phuong trinh co 3 nghiem phan biet: "<<endl;
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
        cout<<"x3="<<x3<<endl;
      }
      if(fabs(k)>1)
      {
        x=((sqrt(delta)*fabs(k))/(3*a*k))*(pow((fabs(k)+sqrt(pow(k,2)-1)),1.0/3)+pow((fabs(k)-sqrt(pow(k,2)-1)),1.0/3))-(b/(3*a));
        cout<<"Phuong trinh co 1 ngiem duy nhat la:" <<x<<endl;
      }
     }
    else if(delta==0)
    {
      x=(-b-pow(-(pow(b,3)-27*a*a*d),1.0/3))/(3*a);
      cout<<"Phuong trinh co nghiem boi: "<<x<<endl;
    }
    else
    {
      x=(sqrt(fabs(delta))/(3*a))*(pow((k+sqrt(k*k+1)),1.0/3)-pow(-(k-sqrt(k*k+1)),1.0/3))-(b/(3*a));
      cout<<"phuong trinh co 1 nghiem duy nhat: "<<x<<endl;
    }
  }

void display()
{
    while(true)
    {
        cout<<endl<<"______________________________"<<endl;
        cout<<"0. Ket thuc chuong trinh"<<endl;
        cout<<"1. Phuong trinh bac nhat"<<endl;
        cout<<"2. Phuong trinh bac hai"<<endl;
        cout<<"3. Phuong trinh bac ba"<<endl;
        cout<<"______________________________"<<endl<<endl;
        int choice;
        float a,b,c,d;
        cin>>choice;
        switch (choice)
        {
            case 0:
                return;
                break;
            case 1:
                cout<<"Nhap he so ax + b = 0"<<endl;
                cin>>a>>b;
                giaiptbacnhat(a,b);
                break;
            case 2:
                cout<<"Nhap he so ax^2 + bx + c = 0"<<endl;
                cin>>a>>b>>c;
                giaiptbachai(a,b,c);
                break;
            case 3:
                cout<<"Nhap he so ax^3 + bX^2 + cx + d = 0"<<endl;
                cin>>a>>b>>c>>d;
                giaiptbacba(a,b,c,d);
                break;
            default:
                cout<<"Loi!"<<endl;
        }
    }
}
int main()
{
    cout<<"GIAI PHUONG TRINH CO BAN:"<<endl;
    display();
    cout<<"Ket thuc chuong trinh"<<endl;
    return 0;
    
}
