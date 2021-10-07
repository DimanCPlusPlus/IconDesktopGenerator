/*
 * IconGenerator.cpp
 *
 *  Created on: Oct 5, 2021
 *      Author: dima
 */

#include "IconGenerator.hpp"

IconGenerator::IconGenerator(std::string path)
{
	os.open(path, std::ios::app);
	os<<"[Desktop Entry]"<<'\n';
}

IconGenerator::~IconGenerator() {}

void IconGenerator::setVersion(std::string version)noexcept
{
	os<<"Version="<<version<<'\n';
}

void IconGenerator::setName(std::string name) noexcept
{
	os<<"Name="<<name<<'\n'
	  <<"Comment=Start "<<name<<'\n';
}

void IconGenerator::setExec(std::string exec) noexcept
{
	os<<"Exec="<<exec<<'\n';
}

void IconGenerator::setIcon(std::string icon) noexcept
{
	os<<"Icon="<<icon<<'\n';
}

void IconGenerator::createIcon() noexcept
{
	os<<"Terminal=false"<<'\n'
      <<"Type=Application"<<'\n';
	os.close();
}
/*
[Desktop Entry]
Version=1.0
Name=Eclipse
Comment=Start Eclipse
Exec=/home/dima/eclipse/eclipse
Icon=/home/dima/eclipse/icon.xpm
Terminal=false
Type=Application
 *
 */
