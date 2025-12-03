
#include <gtest/gtest.h>

#include <raii/matrix.hpp>

namespace raii
{

    TEST(rule_of_five, constructor)
    {
        matrix mtx(3, 3);
    }

    TEST(rule_of_five, copy_constructor)
    {
        matrix* mtx0 = new matrix(3, 3);
        matrix mtx1 = *mtx0;
        delete mtx0;
    }

    TEST(rule_of_five, copy_assignment)
    {
        matrix mtx0 = matrix(1, 1);
        {
            matrix mtx1 = matrix(4, 4);
            mtx0 = mtx1;
        }
    }

    TEST(rule_of_five, move_constructor)
    {
        matrix* mtx0 = new matrix(3, 3);
        matrix mtx1 = std::move(*mtx0);
        delete mtx0;
    }

    TEST(rule_of_five, move_assignment)
    {
        matrix mtx0 = matrix(1, 1);
        {
            matrix mtx1 = matrix(4, 4);
            mtx0 = std::move(mtx1);
        }
    }

} // stf