#include <cstdio>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <limits>
#include <atomic>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>


extern "C" auto CPPTest() -> void
{
    std::atomic_int atomInt { 100 };
    auto const oldValue = atomInt.fetch_add(11);
    printf("old value = %d, new value = %d\n", oldValue, atomInt.load());

    printf("The float value is: %f\n", M_E + sin(M_PI / 6.0));
}


