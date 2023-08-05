#pragma once
#include <iostream>
#include <fstream>
#include "cpr/cpr.h"
#include "nlohmann/json.hpp"

std::ofstream writeTXT("DigimonDatabase.txt");
std::ofstream writeJSON("DigimonDatabase.JSON");

//takes in URL as argument
std::string extract_html_page(cpr::Url& url) {
	//pulls in page at URL
	cpr::Response response = cpr::Get(url);

	return response.text;
}