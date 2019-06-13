// Copyright 2019 Sazanov Dima

#ifndef MODULES_ALGORITHM_SORT_STATION_INCLUDE_ALG_SORT_STATION_FORMULA_APPLICATION_H_
#define MODULES_ALGORITHM_SORT_STATION_INCLUDE_ALG_SORT_STATION_FORMULA_APPLICATION_H_

#include <string>
#include "include/alg_sort_station_formula.h"
#include "include/algorithm_sort_station.h"

class AlgSortStationApplication {
private:
	std::string ParseCommand(int argc, const char** argv);
	std::string ASSF(int argc, const char** arg);
public:
	std::string Info();
	AlgSortStationApplication() = default;
	std::string operator()(int argc, const char **argv);
};

#endif  // MODULES_ALGORITHM_SORT_STATION_INCLUDE_ALG_SORT_STATION_FORMULA_APPLICATION_H_

