#include<iostream>
using namespace std;
int main()
{
	float von,laiXuat,soTienKyVong;
	int nam=0;
	cout<<"NHAP VON: ";
	cin>>von;
	cout<<"NHAP LAI XUAT: ";
	cin>>laiXuat;
	cout<<"NHAP SO TIEN CAN NHAN DUOC: ";
	cin>>soTienKyVong;
	while(von<soTienKyVong)
	{
		von+=von*laiXuat/100;
		nam++;
	}
	cout<<"\nSO NAM CAN DE NHAN DUOC SO TIEN KY VONG: "<<nam<<endl;
	cout<<"SAU "<<nam<<" NAM SO TIEN CO DUOC LA: "<<von;
	return 0;
}
