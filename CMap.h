#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <map>

using namespace std;
class CMapEl {
public:
    std::string key;
    std::vector<long double> value;

    CMapEl(
        std::string key,
        std::vector<long double> value
    )
    {
        this->key = key;
        this->value = value;
    }
    CMapEl(
        std::string key,
        long double value
    )
    {
        this->key = key;
        this->value = { value };
    }
};

class CMap {
private:
    std::vector<CMapEl> vec;
public:
    CMap() {
        this->vec = {};
    }
    CMap(std::vector<CMapEl> vec) {
        this->vec = vec;
    }

    void setdefault(std::string key, long double value) {
        bool tmp = 1;
        for (auto i : vec) {
            if (key == i.key) {
                tmp = 0;

                break;
            }
        }
        if (tmp)vec.push_back(CMapEl(key, { value }));
    }

    void setValue(std::string key, long double value) {
        for (int i = 0; i != vec.size(); i++) {
            if (vec[i].key == key) {
                vec[i].value.push_back(value);
            }
        }
    }

    std::vector<long double> getValues(std::string key) {
        for (auto i : vec) {
            if (key == i.key) {
                return i.value;
            }
        }
    }

    std::string getKey(int index) {
        return vec[index].key;
    }

    CMapEl getItem(int index) {
        return vec[index];
    }
    std::vector<CMapEl>  getAllItems() {
        return vec;
    }
    void print() {
        for (auto it : vec) {
            std::cout << it.key << ": ";
            for (auto l : it.value) {
                std::cout << l << ", ";
            }
            std::cout << "\n";
        }
    }
};
