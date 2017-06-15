#include <image.hpp>

int main(int argc, char* argv[])
{
    img::Image img(10,10);
    img(5,5) = 255;
    
    return 0;
}

