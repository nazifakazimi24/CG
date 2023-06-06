#include "PointLightNode.hpp"

#include <utility>

/**
 * Assign3 
 * @return color as vector with 3 values
 * glm:vector?
 */
std::vector<float> PointLightNode::getColor() {
    return lightColor_;
}

/** Assign3 
 * set the values of the color for the light
 * @param color
 */
void PointLightNode::setColor(std::vector<float> color) {
    lightColor_ = std::move(color);
}

/**
 * Assign3 
 * getter for the brightness
 * @return
 */
float PointLightNode::getIntensity() {
    return lightIntensity_;
}

/**
 * Assign3 
 * getter for the brightness
 * @param brightness
 */
void PointLightNode::setIntensity(float intensity) {
    lightIntensity_ = intensity;
}