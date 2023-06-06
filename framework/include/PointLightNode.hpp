#ifndef OPENGLFRAMEWORK_POINTLIGHTNODE_H
#define OPENGLFRAMEWORK_POINTLIGHTNODE_H


#include "Node.hpp"

class PointLightNode : public Node {

public:
    std::vector<float> getColor();
    //Assign3
    float getIntensity();

    void setIntensity(float intensity);
    void setColor(std::vector<float> color);

private:
    std::vector<float> lightColor_ = {}; // private variable for the color
    float lightIntensity_ = 1;
};


#endif //OPENGLFRAMEWORK_POINTLIGHTNODE_H
