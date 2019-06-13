// Copyright 2019 Sazanov Dima

#include <gtest/gtest.h>

#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>

#include "include/alg_sort_station_formula_application.h"

using ::testing::internal::RE;
using std::vector;
using std::string;
class  AlgSortStationApplicationTest :public::testing::Test {
 protected:
        void Act(std::vector<std::string> args_) {
                std::vector<const char*> options;

                options.push_back("ASSF");
                for (size_t i = 0; i < args_.size(); ++i) {
                        options.push_back(args_[i].c_str());
                }

                const char** argv = &options.front();
                int argc = static_cast<int>(args_.size()) + 1;

                output_ = app_(argc, argv);
        }
        void Assert(std::string expected) {
                EXPECT_TRUE(::testing::internal::RE::PartialMatch(output_,
                        ::testing::internal::RE(expected)));
        }
 private:
        AlgSortStationApplication app_;
        std::string output_;
};

TEST_F(AlgSortStationApplicationTest, Do_Print_Help_Without_Arguments) {
        std::vector<std::string> args = {};

        Act(args);

        Assert("Welcome to the program -Sorting Station Algorithm-");
}

TEST_F(AlgSortStationApplicationTest, Do_Print_Info_With_Arguments) {
        std::vector<std::string> args = {"info"};

        Act(args);

        Assert("Welcome to the program -Sorting Station Algorithm-");
}

TEST_F(AlgSortStationApplicationTest, Print_Form_With_Space) {
        std::vector<std::string> args = { "(1+2)", "*3" };

        Act(args);

        Assert("Input Error");
}

TEST_F(AlgSortStationApplicationTest, Print_Result) {
        std::vector<std::string> args = { "(1+2)*3"};

        Act(args);

        Assert("result = 9.000000");
}

