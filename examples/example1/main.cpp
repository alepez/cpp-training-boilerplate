#include <fmt/format.h>
#include <spdlog/spdlog.h>

int main(int argc, const char* argv[]) {
  SPDLOG_INFO("argc={}", argc);

  for (int i = 0; i < argc; ++i) {
    SPDLOG_INFO("argv[{}]={}", i, argv[i]);
  }

  return 0;
}
