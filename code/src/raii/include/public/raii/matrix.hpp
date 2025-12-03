#pragma once

#include <cstddef>

#include <utility>

namespace raii
{

    class matrix
    {
    public:

        // constructor
        matrix(size_t m, size_t n);

        // destructor
        ~matrix();

        // copy constructor
        matrix(matrix const& rhs);

        // move constructor
        matrix(matrix&& rhs) noexcept;

        // assignment operator (copied by value)
        matrix& operator=(matrix rhs);

        void swap(matrix& rhs) noexcept
        {
            using std::swap;
            swap(m_rows, rhs.m_rows);
            swap(m_cols, rhs.m_cols);
            swap(m_values, rhs.m_values);
        }


    private:

        size_t m_rows;
        size_t m_cols;
        double* m_values;

    };

}