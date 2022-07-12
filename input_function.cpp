#include <iostream>
std::string input(std::string s){
	std::cout<<s;
	std::string x;
	getline(std::cin,x);
	
	return x;
}

main(){
	std::string str=input("Enter your string: ");
	std::cout<<str;
}
