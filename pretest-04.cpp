#include<iostream>
#include<iomanip>
using namespace std;

struct ElemtList{
	char npm[12];
	char nama[40];
	float ipk;
	ElemtList* next;
};

typedef ElemtList* pointer;
typedef pointer List;

void createList(List& First){
	First=NULL;	
}

void createElement(pointer& pBaru){
	pBaru=new ElemtList;
	cout << "Masukkan NPM	: ";cin>>pBaru->npm;
	cout << "Masukkan Nama	: ";cin.ignore();cin.getline(pBaru->nama,40);
	cout << "Masukkan IPK	: ";cin>>pBaru->ipk;
	pBaru->next=NULL;
}

void insertFirst(List& First, pointer pBaru)
{
	if (First==NULL) First=pBaru;
	else {pBaru->next=First; First=pBaru;}
}

void insertSortName(List& First, pointer pBaru){
	pBaru=First;
	if(pBaru==NULL){
		cout<<"List Kosong";
	}
	else {
		
	}
}

void traversal(List First, pointer pBantu){
	if (First==NULL){
        cout<<"List kosong!"<<endl;
    }
    else {
		pBantu = First;
  		int i = 1;
  		cout << setfill(' ')<<setw(5) << "No" << setw(13) << " NPM " << setw(30) << " Nama " << setw(5) << " IPK " << endl;
  		do {
   			cout << setw(5) << i << setw(13) << pBantu->npm << setw(30) << pBantu->nama << setw(5) << pBantu->ipk << endl;
   			pBantu = pBantu->next;
   			i++;
  			} 
			while (pBantu != NULL); {
   		cout << endl;
   		}
	}	
}

main(){
	pointer pBaru;
    pointer pBantu;
    List mhs;
    int n;
    
    createList(mhs);
    cout<<"Masukkan jumlah mahasiswa ";cin>>n;
    for(int i=0;i<n;i++){
    	cout<<"Data mahasiswa ke-"<<i+1<<endl;
    	createElement(pBaru);
    	insertFirst(mhs,pBaru);
	}
	insertSortName(mhs,pBaru);
	traversal(mhs, pBantu);
}
