#ifndef Graphic_HPP

#define Graphic_HPP



#include <vector>
/**
 * @brief The classes for visualizing the result with being able to set width and height of the output.
 * Drawing dots and lines
 */
struct Color
{
    float r, g, b;

    Color();
    Color(float r, float g, float b);
    ~Color();
};


class Graphic
{
public:
    Graphic(int width, int height);
    ~Graphic();

    Color get_color(int x, int y) const;
    void set_color(const Color& color, int x, int y);
    void draw_point(const Color& color, int x, int y);
    void draw_line(const Color& color, int x1, int y1, int x2, int y2, double m);
    void Export(const char* path) const;

private:
    int64_t m_width;
    int64_t m_height;
    std::vector<Color> m_colors;
};

#endif