/*
 * IconGenerator.hpp
 *
 *  Created on: Oct 5, 2021
 *      Author: dima
 */

#ifndef ICONGENERATOR_HPP_
#define ICONGENERATOR_HPP_

#include<iterator>
#include<string>
#include<fstream>

class IconGenerator final {
private:
std::ofstream os;
public:
	IconGenerator(std::string path);
	virtual ~IconGenerator();

	void setVersion(std::string version) noexcept;
	void setName(std::string name) noexcept;
	void setExec(std::string exec) noexcept;
	void setIcon(std::string Icon) noexcept;
	void createIcon() noexcept;
};

#endif /* ICONGENERATOR_HPP_ */
