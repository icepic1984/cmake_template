#include "image.hpp"

namespace img {

Image::Image(std::size_t width, std::size_t height) :
    m_width(width),
    m_height(height),
    m_data(width * height)
{}

uint8_t& Image::operator()(std::size_t x, std::size_t y)
{
    return m_data[x + m_width * y];
}

const uint8_t& Image::operator()(std::size_t x, std::size_t y) const
{
    return m_data[x + m_width * y];
}

uint8_t& Image::operator[](std::size_t index)
{
    return m_data[index];
}

const uint8_t& Image::operator[](std::size_t index) const
{
    return m_data[index];
}

}
