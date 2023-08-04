#include <iostream>
#include <fstream>
#include "cpr/cpr.h"
#include "gumbo.h"
#include "DigiWikiScraper.h"

int main()
{
    std::cout << "Hello World!\n";

    cpr::Url Original_URL = cpr::Url{ "https://digimoncardgame.fandom.com/wiki/BT5-001" };
    std::string page_content = extract_html_page(Original_URL);

    writeJSON << page_content;

    std::cout << "Printing complete!\n";
}