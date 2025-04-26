#include <iostream>
#include <emscripten.h>

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    void hello() {
        std::cout << "Hello from WebAssembly!" << std::endl;
    }
}
