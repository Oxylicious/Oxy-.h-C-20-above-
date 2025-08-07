# oxy++.h 🧪✨  
**A minimalist, all-in-one C++ header for fast prototyping and clean code.**  
Made with chaos lmaoo by [@Oxylicious](https://github.com/yourusername)

**If you are lazy asf, this guy will hit a thumbs up lol**

---

## 🧩 What is this?

`oxy++.h` is a custom header file that includes all the **essential STL headers**, **short-hand macros**, and **utility functions** so you can just drop it in and start coding.

- Clean syntax for `cout`, `cin`, `vector`, `map`, etc.
- Random utilities (`randi`, `randf`, `seedRand`)
- File I/O helpers (`readFile`, `writeFile`, `appendFile`)
- Time utilities (`nowTime`, `timeStr`)
- String conversion tools (`toString`, `fromString`)
- C++20 support (`<ranges>`, `<format>`, etc.)

---

## 🚀 How to Use

1. Drop `oxy++.h` into your project directory.
2. Include it in your code like a true rebel:

```cpp
#include "oxy++.h"
```

## The whole parameters of this header 🍷💯

```cpp
// Macros:
using string = std::string;
template<typename T> using vector = std::vector<T>;
template<typename A, typename B> using map = std::map<A, B>;
template<typename T> using set = std::set<T>;
template<typename A, typename B> using umap = std::unordered_map<A, B>;

// I/O shortcuts:
cout(...args);  // same as std::cout << ...
cin(...args);   // same as std::cin >> ...

// Random:
randi(min, max);        // random int
randf(min, max);        // random float
seedRand();             // seed with time

// Time:
nowTime();              // time_t now
timeStr();              // formatted string

// Files:
readFile(filename);
writeFile(filename, content);
appendFile(filename, content);
fileExists(filename);

// Strings:
toString(anything);       // Convert to String
fromString(str);         // Convert from string to any data type
```

#ENJOY!! 🔥🐦‍🔥
