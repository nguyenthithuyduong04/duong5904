#include<iostream>
#include<string.h>
using namespace std;
class GV{
	private:
		char ht[30];
		int t;
		char bc[15];
		char chuyenNganh[20];
		float bl,lcb;
	public:
		void Nhap()
		{
			cout<<"Nhap ho ten: ";
			fflush(stdin);
			cin.getline(ht,30);
			cout<<"Nhap tuoi: ";
			cin>>this->t;
			fflush(stdin);
			cout<<"Nhap bang cap: ";
			cin.getline(bc,15);
			cout<<"Nhap chuyen nganh: ";
			cin.getline(chuyenNganh,20);
			cout<<"Nhap bac luong: ";
			cin>>this->bl;
		}
		float get_luong(){
			lcb=bl*610;
			return this->lcb;
		}
		void Xuat()
		{
			cout<<"Ho ten: "<<ht<<endl
				<<"Tuoi: "<<t<<endl
				<<"Bang cap: "<<bc<<endl
				<<"Chuyen nganh: "<<this->chuyenNganh<<endl
				<<"Bac luong: "<<this->bl<<endl
				<<"Luong co ban: "<<this->lcb<<endl;
		}
};
void Nhap_danh_sach(GV a[], int &n)
{
	cout<<"\nNhap danh sach "<<n<<" giao vien :"<<endl;
	for(int i=0; i<n; i++){
		cout<<"[+] Nhap giao vien thu :"<<i+1<<endl;
		a[i].Nhap();
	}
}
void Xuat_danh_sach(GV a[], int n)
{
	cout<<"\nXuat danh sach "<<n<<" giao vien:"<<endl;
	for(int i=0; i<n; i++){
		cout<<"[+] Xuat giao vien thu :"<<i+1<<endl;
		a[i].Xuat();
	}
}
void Tien_luong_nho_hon_2000(GV a[], int &n)
{
	cout<<"\nDanh sach giao vien co tien luong nho hon 2000 la :"<<endl;
	for(int i=0; i<n; i++){
		if(a[i].lcb < 2000){
		cout<<"[+] Giao vien thu :"<<i+1<<endl;
		a[i].Xuat();
	    }
	}
}
int main()
{
	int n;
	cout<<"\nNhap so luong giao vien :";
	cin>>n;
	GV a[n];
	Nhap_danh_sach(a,n);
	Xuat_danh_sach(a,n);
	Tien_luong_nho_hon_2000(a,n);
	return 0;
}
