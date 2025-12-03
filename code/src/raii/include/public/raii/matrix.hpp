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

        // copy operations
        matrix(matrix const& rhs);
        matrix& operator=(matrix rhs);

        // move operations
        //matrix(matrix&& rhs) noexcept;
        //matrix& operator=(matrix&& rhs) noexcept;

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