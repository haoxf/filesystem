//
// Created by jefding on 2019/3/10 0010.
//

#ifndef ANDROIDPHOTFIX_FS_H
#define ANDROIDPHOTFIX_FS_H

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

//#if defined(__cplusplus) && __cplusplus >= 201703L && defined(__has_include) && __has_include(<filesystem>)
//#include <filesystem>
//namespace fs = std::filesystem;
//#else
#include "include/ghc/filesystem.hpp"
namespace fs = ghc::filesystem;
//#endif

#pragma clang diagnostic pop

#endif //ANDROIDPHOTFIX_FS_H
