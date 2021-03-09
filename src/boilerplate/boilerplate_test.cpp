#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <fmt/format.h>

#include <boilerplate/boilerplate.hpp>

TEST_CASE("boilerplate test example") {
  REQUIRE(boilerplate::the_answer() == 42);
  REQUIRE(0.99999 == Catch::Approx(1));
  REQUIRE_THAT("C++ is magic", Catch::Matchers::EndsWith("magic"));
}
