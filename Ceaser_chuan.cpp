#include <iostream>
#include <string>

using namespace std;

string encrypt( string plain_text, int key){
	string encrypted_text = "";
	for( int i = 0; i < plain_text.length() ; i++){
		char c = plain_text[i];
		if(isalpha(c)){
			char base = islower(c) ? 'a':'A'; 
			char encryted_char =((c - base + key) % 26 ) + base;
			encrypted_text += encryted_char;
		}else{
			encrypted_text += c;
		}
	}
	return encrypted_text;
}
string descrypt( string encrypted_text, int key){
	string descryted_text ="";
	for( int i = 0; i < encrypted_text.length(); i++){
		char c = encrypted_text[i];
		if(isalpha(c)){
			char base = islower(c) ? 'a':'A';
			char descryted_char = ((c - base - key +26) %26)+ base;
			descryted_text += descryted_char;
		}else{
			descryted_text += c;
		}
	}
	return descryted_text;
}
int main(){
	while(true){
		cout<<"Nhap lua chon: "<<endl;
		cout<<"1.Ma hoa"<<endl;
		cout<<"2.Giai ma"<<endl;
		cout<<"3.Thoat"<<endl;

	int choice;
	cin>>choice;
	if(choice == 1){
	string plain_text;
	int key;
	cout<<"Nhap chuoi can ma hoa: "<<endl;
	cin.ignore();
	getline(cin,plain_text);
	cout<<" Nhap khoa k(So nguyen): "<<endl;
	cin>>key;
	string encrypted_text = encrypt(plain_text, key);
	cout<<" Chuoi sau khi ma hoa: "<<encrypted_text<<endl;	
	}
	else if(choice == 2){
	string encrypted_text;
	int key;
	cout<<"Nhap chuoi can giai ma:  "<<endl;
	cin.ignore();
	getline(cin,encrypted_text);
	cout<<" Nhap khoa k(So nguyen): "<<endl;
	cin>>key;
	string descrypted_text = descrypt(descrypted_text, key);
	cout<<"Ban ro ban dau la: "<<descrypted_text<<endl;
	}
	else if(choice == 3){
		cout<<"Ket thuc chuong trinh "<<endl;
	}
	else {
		cout<<"Khong co lua chon hop le !!!"<<endl;
		break;
	}
	}
	return 0;
}
