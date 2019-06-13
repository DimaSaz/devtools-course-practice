// Copyright 2019 Sazanov Dima

#include <cstdlib>
#include <cstdio>
#include <string>
#include <iostream>

#include "include/alg_sort_station_formula_application.h"

int main(int argc, const char** argv) {
    ASSFApplication app;
    std::string output = app(argc, argv);
    std::cout << output.c_str() << std::endl;
    return 0;
}
