#include <iostream>
#include <ctime>
#include <cstdlib>

main(){
	srand(time(0));
	std::string pass;
	int n;
	std::string word= "abcdefghijklmnopqrstuvwxyz"
				 	  "ABCDDEFGHIJKLMNOPQRSTUVWXYZ"
				 	  "0123456789";
	printf("Input length of password: ");
	std::cin>>n;
	for(int i=1;i<=n;++i) pass+= word[rand()%word.length()];
	std::cout<<"Your new generated password is: "<<pass;
}
