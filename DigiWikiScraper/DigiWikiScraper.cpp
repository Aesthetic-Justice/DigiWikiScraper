#include "DigiWikiScraper.h"
using json = nlohmann::json;

std::string pull_from_page(std::string page)
{
    cpr::Url Original_URL = cpr::Url{ page };
    std::string page_content = extract_html_page(Original_URL);
    return page_content;
};

std::string pull_from_file()
{
    std::ifstream JSONfile("DigimonDatabase.txt");
    json data = json::parse(JSONfile);
    return data;
};

int main()
{
    std::cout << "Hello World!\n";



    std::cout << "test";
};