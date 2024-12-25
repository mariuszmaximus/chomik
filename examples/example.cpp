#include  <cstdlib>
#include <filesystem>

#ifndef APP_CHOMIK
    #define APP_CHOMIK  "chomik"
#endif

#ifndef APP_DIR
    #define APP_DIR  "./"
#endif

#ifndef FILE_CHOMIK
    #define FILE_CHOMIK  "exampe1.chomik"
#endif

int main() {
    std::filesystem::current_path(APP_DIR);
    std::system(APP_CHOMIK " " FILE_CHOMIK);
    return 0;
}
