/*          Nama Kelompok 7
            Talia Desty Maharani_2117051017
            Retno Lestari_2117051077
            Nur fitriyani_2117051096
            Shafira Andaya Putri_2157051009
	    Tema : Vending Machine
*/

#include <iostream>
#include <conio.h>
#define maks 5           //nilai maks nya 5
using namespace std;

struct vendingMachine{
	int top;
	string data[4];	
};
string dat;

struct vendingMachine M;

bool isFull(){         //untuk mengecek apakah datanya full
	if (M.top==maks){
		return true;
	}else{
		return false;
	}
}

bool isEmpty(){        //untuk mengecek apakah data nya kosong
	if(M.top == -1){
		return true;
	}else{
		return false;
	}
}

void push(string dat){        //untuk menambah kan satu data
	if(isFull()==true){
		cout<<"Barang sudah penuh"<<endl;
	}else{
		M.top++;
		M.data[M.top]=dat;
	}
}


void pop(){          //untuk mengambil satu data paling atas
	if(isEmpty()==true){
		cout<<"Barang sudah habis/kosong"<<endl;
	}else{
		cout<<"Barang yang diambil : " <<M.data[M.top]<<endl;
		M.top--;
	}
}

void print(){          // untuk menampilkan data
	cout<<"\nTumpukan Barang : \n";
	for(int i=M.top; i>=0; i--){
		cout<<" "<<M.data[i]<<endl;
	}
}

void clear(){       //untuk mengosongkan atau menghapus data
	cout<<"\nBarang telah kosong";
	M.top=-1;
}

int main(){
	M.top=-1;
	int pilihan;
	char ulang;
	
	do{
		system("cls");
		cout<<"\t Vending Machine \n";
		cout<<"\n1. Push\n";
		cout<<"2. Pop\n";
		cout<<"3. Print\n";
		cout<<"4. Clear\n";
		cout<<"5. Exit\n";
		
		cout<<"Masukkan Pilihan : ";
		cin>>pilihan;
		
		if(pilihan==1){
			cout<<"\n=====================\n";
			cout<<"\nTambah Barang";
			cout<<"\nBarang yang disimpan : ";
			cin>>dat;
			push(dat);
			ulang = 'y';
		}
		else if(pilihan==2){
			pop();
			getch();
			ulang = 'y';
		}
		else if(pilihan==3){
			print();
			cout<<"Ulang? ";
			cin>>ulang;
		}
		else if(pilihan==4){
			clear();
			cout<<"\nUlang? ";
			cin>>ulang;
		}
		else if(pilihan==5){
			exit(0);
		}
	}
	while(ulang=='y');
}
