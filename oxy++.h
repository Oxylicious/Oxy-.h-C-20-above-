// HEADER FILE MADE BY OXYLICIOUS, C++ MINIMALIST STYLE
#pragma once

// LIBRARY INCLUDE
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cmath>
#include <fstream>
#include <chrono>
#include <map>
#include <windows.h>
#include <iterator>
#include <array>
#include <set>
#include <unordered_map>
#include <sstream>
#include <ranges>
#include <format>

namespace oxy {

    // MACROS
    using string = std::string;
    template <typename T>
    using vector = std::vector<T>;
    template <typename A, typename B>
    using map = std::map<A, B>;
    template <typename C, size_t D>
    using array = std::array<C, D>;
    template <typename T>
    using set = std::set<T>;
    template <typename A, typename B>
    using umap = std::unordered_map<A, B>;

    // ============================================ IOSTREAM ============================================

    inline void cout(const auto&... args) {
        ((std::cout << args), ...);
    }

    inline void cin(auto&... args) {
        (std::cin >> ... >> args);
    }

    // ==================================================================================================


    // ============================================ CSTLIB ============================================

    inline void seedRand() {
        std::srand(static_cast<unsigned>(std::time(nullptr)));
    }

    inline int randi(int min, int max) {
        return min + std::rand() % (max - min + 1);
    }

    inline float randf (float min, float max) {
        return min + static_cast<float>(std::rand()) / RAND_MAX * (max - min);
    }

    // ================================================================================================

    // ============================================ CTIME ============================================

    inline std::time_t nowTime() {
        return std::time(nullptr);
    }

    inline string timeStr() {
        std::time_t t = std::time(nullptr);
        char buf[64];
        std::strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", std::localtime(&t));
        return buf;
    }

    // ===============================================================================================

    // ============================================ FSTREAM ============================================

    inline string readFile(const string& filename) {
        std::ifstream in(filename);
        if (!in) throw std::runtime_error("File not found: " + filename);
        return { std::istreambuf_iterator<char>(in), {} };
    }


    inline void writeFile(const string& filename, const string& content) {
        std::ofstream out(filename);
        out << content;
    }


    inline void appendFile(const string& filename, const string& content) {
        std::ofstream out(filename, std::ios::app);
        out << content;
    }

    inline bool fileExists(const string& filename) {
        std::ifstream f(filename);
        return f.good();
    }


    // =================================================================================================

    // ============================================ SSTREAM ============================================

    template<typename T>
    inline string toString(const T& value) {
        std::ostringstream oss;
        oss << value;
        return oss.str();
    }

    template<typename T>
    inline T fromString(const string& str) {
        std::istringstream iss(str);
        T value;
        iss >> value;
        return value;
    }

    // =================================================================================================


}

