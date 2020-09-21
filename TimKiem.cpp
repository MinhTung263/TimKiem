#include <iostream>
#include <string>
using namespace std;


class Nguoi{
	protected:
		string Ma,HoTen;
	public:
		
	void NhapN(){
		fflush(stdin);
		cout<<endl;
		cout<<"\t\t\t Nhap ma: ";
		getline(cin,Ma);
		cout<<"\t\t\t Ho ten: ";
		getline(cin,HoTen);
		
	}
	
	void HienThiN(){
		cout<<"\t\t\t Ma: "<<Ma<<" Ho ten: "<<HoTen;

	}
};
class SDT:public Nguoi{
	private:
		int SDT;
		string DiaChi;
	public:
		
	void NhapS(){
		Nguoi::NhapN();
		cout<<"\t\t\t Nhap so dien thoai: ";
		cin>>SDT;
		fflush(stdin);
		cout<<"\t\t\t Dia chi: ";
		getline(cin,DiaChi);
		
	}
	void HienThiS(){
		Nguoi::HienThiN();
		cout<<" SDT: "<<SDT<<" DiaChi: "<<DiaChi<<endl; 
	}
	int Tim(){
		return SDT;
	}
	
};

int main(){
	SDT dt[100];
	int n;
	int x,chon;
	do
	{
		system("cls");
		cout<<"\n\t\t\t 1. Them lien lac \n";
		cout<<"\n\t\t\t 2. Hien thi\n";
		cout<<"\n\t\t\t 3. Tim kiem \n";
		cout<<"\n\t\t\t 4. Thoat!\n";
		cout<<"\n\t\t\t Moi ban chon:";
		cin>>chon;
		switch(chon){
					case 1:{
							int dem=0, nLL;
							cout<<"\n\t\t\t Nhap so nguoi dung:";
							cin>>nLL;
							cout<<"\n\t\t\t --------------- THEM LIEN LAC ---------------------\n";
							for(int i=n;i<nLL+n;i++){
								dt[i].NhapS();
								dem++;
							}
							n+=dem;
						system("pause");
						break;
					}
					case 2:{
							cout<<"\n\t\t\t ------------------- LIEN HE -----------------------\n";
							for(int i=0;i<n;i++){
								dt[i].HienThiS();	
								
							}
							system("pause");
							break;
					}
					case 3:{
						cout<<"\n\t\t\t Nhap so dien thoai can tim:";
						cin>>x;
						int tontai=0;
						for(int i=0;i<n;i++){
							if(dt[i].Tim()==x){	
								dt[i].HienThiS();
								system("pause");
								tontai=1;
								
							}
							
						} if(tontai==0){
							cout<< "\n\t\t\t Nguoi dung nay khong co trong danh ba!\n";
							system("pause");	
						}
						break;
					}
					case 4:{
						system("pause");
						break;
					}
				default :
					system("pause");
					break;
		}
	}while(chon!=4);
	
}
