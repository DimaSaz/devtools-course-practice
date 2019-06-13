// Copyright 2019 Sazanov Dima

#include <stdexcept>
#include <exception>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <string>
#include "include/alg_sort_station_formula_application.h"

std::string AlgSortStationApplication::operator()
        (int argc, const char **argv) {
        std::string output = "result = ";
        if (argc == 1) {
                return Info();
        }
        try {
                output += ParseCommand(argc, argv);
        }
        catch (std::runtime_error &exp) {
                return exp.what();
        }
        catch (std::string &exp) {
                return exp;
        }
        return output;
}

std::string AlgSortStationApplication::Info() {
        return "Welcome to the program -Sorting Station Algorithm-\n"
                "To continue, enter the formula\n"
                "!!!The formula can contain only integers, brackets, "
                "and arithmetic signs!!!\n"
                "!!!The formula should be written without spaces!!!\n";
}

std::string AlgSortStationApplication::ParseCommand(
        int argc, const char **arg) {
        if (strcmp(arg[1], "info") == 0) {
                return Info();
        } else if (argc == 2) {
                return ASSF(argc, arg);
        } else {
                throw std::runtime_error("Input Error");
        }
}

std::string AlgSortStationApplication::ASSF(int argc, const char** arg) {
        AlgSortStationFormula assf(arg[2]);
        return std::to_string(assf.FormulaCalculator());
}

