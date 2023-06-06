#ifndef OPENGLFRAMEWORK_POINTLIGHTNODE_H
#define OPENGLFRAMEWORK_POINTLIGHTNODE_H


#include "Node.hpp"

class PointLightNode : public Node {

public:
    std::vector<int> getColor();
    float getBrightness();

    void setBrightness(float brightness);
    void setColor(std::vector<int> color);

private:
    std::vector<int> color_ = {}; // private variable for the color
    float brightness_ = 1;
};


#endif //OPENGLFRAMEWORK_POINTLIGHTNODE_H
