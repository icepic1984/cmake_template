#ifndef IMAGE_HPP_
#define IMAGE_HPP_

#include <vector>
#include <cstdint>

namespace img {

class Image {
public:
    Image(std::size_t width, std::size_t height);

    uint8_t& operator()(std::size_t x, std::size_t y);

    const uint8_t& operator()(std::size_t x, std::size_t y) const;

    uint8_t& operator[](std::size_t index);
    
    const uint8_t& operator[](std::size_t index) const;

private:
    std::size_t m_width;

    std::size_t m_height;

    std::vector<uint8_t> m_data;
};

}

#endif
