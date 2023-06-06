#ifndef OPENGLFRAMEWORK_CAMERANODE_H
#define OPENGLFRAMEWORK_CAMERANODE_H


#include "Node.hpp"

class CameraNode : public Node{
public:
    bool getPerspective();
    bool getEnabled();

    glm::fmat4 getProjectionMatrix();

    void setEnabled(bool enabled);
    void setProjectionMatrix(glm::fmat4 projectionmatrix);

private:
    bool isPerspective_;
    bool isEnabled_;

    glm::fmat4 projectionMatrix_;

};


#endif //OPENGLFRAMEWORK_CAMERANODE_H
