#include "raii/matrix.hpp"

namespace raii
{

    matrix::matrix(size_t m, size_t n) : m_rows(m), m_cols(n), m_values(new double[m * n]) {}

    matrix::~matrix()
    {
        delete[] m_values;
    }

}