#include <iostream>

#include <glvisualisation.h>

int main()
{
    GLVisualisation visualisation;
    visualisation.init();

    while (1)
    {
        visualisation.start();
        visualisation.finish();
    }

    std::cout << "program done\n";
    return 0;
}
