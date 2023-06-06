#ifndef OPENGLFRAMEWORK_NODE_H
#define OPENGLFRAMEWORK_NODE_H

#include <string>
#include <vector>
#include <glm/detail/type_mat4x4.hpp>
#include <memory>

class Node {

public:
    // Constructor
    Node();

    // Getters for parent and child nodes
    std::shared_ptr<Node> getParent();
    std::shared_ptr<Node> getChildren(std::string name);

    // Remove a child node with a given name
    std::shared_ptr<Node> removeChildren(std::string name);

    // Get a list of all child nodes
    std::vector<std::shared_ptr<Node>> getChildrenList();

    // Setters for node name and parent
    void setName(std::string name);
    void setParent(std::shared_ptr<Node> parent);

    // Set the local and world transformation matrices
    void setLocalTransform(const glm::fmat4& localtransform);
    void setWorldTransform(const glm::fmat4& worldtransform);

    // Add a child node
    void addChildren(std::shared_ptr<Node> child);

    // Get the local and world transformation matrices
    glm::fmat4 getLocalTransform();
    glm::fmat4 getWorldTransform();

    // Get the name and path of the node
    std::string getName();
    std::string getPath();

    // Get the depth of the node in the tree hierarchy
    int getDepth();
protected:
    // Parent and child nodes
    std::shared_ptr<Node> parent_;
    std::vector<std::shared_ptr<Node>> children_;

    // Node name and path
    std::string name_;
    std::string path_;

    // Depth of the node in the tree hierarchy
    int depth_ = 1;

    // Local and world transformation matrices
    glm::fmat4 localTransform_ = glm::fmat4(1.0);
    glm::fmat4 worldTransform_ = glm::fmat4(1.0);

};

#endif //OPENGLFRAMEWORK_NODE_H
   
