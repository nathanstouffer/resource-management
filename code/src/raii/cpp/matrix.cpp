#include "raii/matrix.hpp"

#include <cstring>  // include for memcpy

namespace raii
{

    matrix::matrix(size_t m, size_t n) : m_rows(m), m_cols(n), m_values(new double[m * n]) {}

    matrix::~matrix()
    {
        delete[] m_values;
    }

    matrix::matrix(matrix const& rhs) : m_rows(rhs.m_rows), m_cols(rhs.m_cols), m_values(new double[m_rows * m_cols])
    {
        std::memcpy(m_values, rhs.m_values, m_rows * m_cols * sizeof(double));
    }

    matrix& matrix::operator=(matrix rhs)
    {
        swap(rhs);
        return *this;
    }

}