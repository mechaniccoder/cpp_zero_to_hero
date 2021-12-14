#include <iostream>

class Shape {};

class Square : public Shape {

};

class Circle : public Shape {

};

class Renderer {
public:
    void render(const std::vector<Square>& squares, const std::vector<Circle>& circles);
};

void Renderer::render(const vector<Square>& squares, const std::vector<Circle>& circles) {
    for (auto& square : squares) {}
}
