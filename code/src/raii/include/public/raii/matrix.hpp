#pragma once

#include <cstddef>

namespace raii
{

    class matrix
    {
    public:

        matrix(size_t m, size_t n);

    private:

        size_t m_rows;
        size_t m_cols;

    };

}