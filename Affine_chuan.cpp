#include <iostream>
#include <string>

using namespace std;

int gcd( int a, int b){
	if(a ==0) return b;
	if( b ==0) return a;
	else return gcd(b, a %b);
}

int mod_inverse( int a, int m){
	for( int x = 0; x < m ; x++){
		if(((a % m) *(x % m) % m) == 1){
			return x;
		}
	}
	return -1;
}
string encryp( string plain_text, int a, int b){
	string encryted_text = "";
	
}
