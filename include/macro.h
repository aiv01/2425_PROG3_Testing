#include <iostream>

#ifdef HELLO_YES
#define HELLO std::cout << "Hello World\n";
#else 
#define HELLO 
#endif