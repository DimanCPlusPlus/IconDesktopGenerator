#include<iostream>
#include"IconGenerator.hpp"
#include<string>

int main()
{
	std::string buffer{};

	std::cout<<"Path Icon Desktop - ";
	std::cin>>buffer;
    IconGenerator icon(buffer);
	buffer.clear();
	system("clear");

	std::cout<<"Write Version - ";
	std::cin>>buffer;
	icon.setVersion(buffer);
	buffer.clear();
	system("clear");

	std::cout<<"Write Name - ";
	std::cin>>buffer;
	icon.setName(buffer);
	buffer.clear();
	system("clear");

	std::cout<<"Write Exec Path - ";
	std::cin>>buffer;
	icon.setExec(buffer);
	buffer.clear();
	system("clear");

	std::cout<<"Write Icon Path - ";
	std::cin>>buffer;
	icon.setIcon(buffer);
	buffer.clear();
	system("clear");

	icon.createIcon();

	return 0;
}
