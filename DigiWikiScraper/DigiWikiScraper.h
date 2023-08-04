#pragma once

std::ofstream writeJSON("DigimonDatabase.json");

//takes in URL as argument
std::string extract_html_page(cpr::Url& url) {
	//pulls in page at URL
	cpr::Response response = cpr::Get(url);

	//if the pull request was sucessful, return page as JSON text string
	if (response.status_code == 200) {
		return response.text;
	}
	//else return error
	else {
		return 0;
	};
}