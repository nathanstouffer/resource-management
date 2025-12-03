
#include <gtest/gtest.h>

#include <raii/matrix.hpp>

namespace raii
{

    TEST(rule_of_five, ctor)
    {
        matrix mtx(3, 3);
    }

} // stf