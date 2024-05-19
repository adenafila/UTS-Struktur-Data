#include <iostream>
#include <stack>

using namespace std;

int main (){
	stack<string> buku;
	
	buku.push("Ensiklopedia");
	buku.push("Kamus");
	buku.push("Biografi");
	
	cout << "Isi stack :\n";
	stack<string>tempStack = buku;
	
	while (!tempStack.empty()){
		cout << tempStack.top() << endl;
		tempStack.pop();
 	}
 	cout << endl;
 	
 	if(!buku.empty()){
 		cout << "Buku yang akan dihapus: " << buku.top() << endl;
	 }else {
	 	cout << "Stack sudah kosong" << endl;
	 	return 0;
	 }
	 
	 buku.pop();
	 
	 cout << "\nIsi stack setelah penghapusan:\n";
	 while (!buku.empty()){
	 	cout << buku.top()<<endl;
	 	buku.pop();
	 }
}
