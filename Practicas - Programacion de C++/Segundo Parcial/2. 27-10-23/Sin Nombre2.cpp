#include <iostream>
#include <string>
using namespace std;
int main(){
	cout<<endl<<"letras"<<endl;
	char letras[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','w','x','y','z'};
	for(int i=0; i<=24; i++){
		if(i<24){
			cout<<letras[i]<<",";
		}else{
			cout<<letras[i];
		}
	}
	return 0;
}
