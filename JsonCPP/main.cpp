#include <iostream>
#include <fstream>
#include "json/json.h"

int main() {
    Json::Value root;
    std::ifstream inputfile;

    inputfile.open("file.json");

    Json::CharReaderBuilder builder;
    builder["collectComments"] = true;
    JSONCPP_STRING errs;

    if (!parseFromStream(builder, inputfile, &root, &errs)) {
        std::cout << errs << std::endl;
        return EXIT_FAILURE;
    }
    std::cout << root << std::endl;
    return EXIT_SUCCESS;
}
