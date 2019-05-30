#include <iostream>

#include <glvisualisation.h>

int main()
{
    GLVisualisation visualisation;
    visualisation.init();

    while (1)
    {
        visualisation.start();

        visualisation.set_color(1.0, 1.0, 1.0);
        visualisation.paint_textured_rectangle(1, 1, 63);

        visualisation.finish();
    }

    std::cout << "program done\n";
    return 0;
}
