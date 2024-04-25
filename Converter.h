#pragma once
#include "CMap.h"

long double  Converter(std::string from_str, long double from_str_value, std::string to_str) {

    CMap map_ = CMap();

    map_.setdefault("DOLLAR", 1);
    map_.setdefault("RUB", 92.29);
    map_.setdefault("GMB", 7.24);
    map_.setdefault("YEN", 155.61);


    return (map_.getValues(to_str)[0] * from_str_value) / map_.getValues(from_str)[0];
}