#ifndef CURL_HELPERS_H
#define CURL_HELPERS_H

#include <string>

size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output);

#endif