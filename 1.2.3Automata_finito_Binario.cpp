#include <iostream>
#include <cctype>
using namespace std;
enum class Estado{INICIO, BINARIO, NOBINARIO};

bool validar(string binary){
	int pos = 0;
	Estado actual = Estado::INICIO;
	while(pos < binary.length()){
		switch(actual){
			case Estado::INICIO:
				if(binary[pos] == '1' || binary[pos] == '0'){
					actual = Estado::BINARIO;
				}else{
					actual = Estado::NOBINARIO;
				}
			break;
		}
		pos++;
	}
	if (actual == Estado::BINARIO){
		return true;
	}else{
		return false;
	}
}
int main(){
	string value = "";
	
	cout<<"Ingrese el binario"<<endl;
	cin>>value;
	
	if(validar(value)){
		cout << "ES BINARIO"<< endl;
	}else{
		cout << "NO ES BINARIO"<< endl;
	}
	
	return 0;
}
