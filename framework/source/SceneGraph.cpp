#include "SceneGraph.hpp"

#include <utility>

/**
 * Constructor for the SceneGraph class that creates a new root node for 
the scene graph.
 */
SceneGraph::SceneGraph() {
    setRoot(std::make_shared<Node>(Node()));
}

/**
 * Returns the name of the scene graph.
 * @return the name of the scene graph
 */
std::string SceneGraph::getName() {
    return name_;
}

/**
 * Sets the name of the scene graph.
 * @param name the name to set for the scene graph
 */
void SceneGraph::setName(std::string name) {
    this->name_ = std::move(name);
}

/**
 * Sets the root node of the scene graph.
 * @param root the new root node to set for the scene graph
 */
void SceneGraph::setRoot(std::shared_ptr<Node> root) {
    this->root_ = std::move(root);
}

/**
 * Returns the root node of the scene graph.
 * @return the root node of the scene graph
 */
std::shared_ptr<Node> SceneGraph::getRoot() const {
    return root_;
}

/**
 * Returns the path of the root node.
 * @return the path of the root node
 */
std::string SceneGraph::printGraph() {
    return root_->getPath();
}

/**
 * Destructor for the SceneGraph class.
 */
SceneGraph::~SceneGraph() {

}
