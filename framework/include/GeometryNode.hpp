#ifndef OPENGLFRAMEWORK_GEOMETRYNODE_H
#define OPENGLFRAMEWORK_GEOMETRYNODE_H

#include <structs.hpp>
#include "Node.hpp"

class GeometryNode : public Node{
public:
    /**
     * Get the geometry object associated with this node.
     * @return the geometry object
     */
    model_object getGeometry();

    /**
     * Set the geometry object associated with this node.
     * @param model the new geometry object
     */
    void setGeometry(model_object model);

private:
    model_object geometry_;
};

#endif //OPENGLFRAMEWORK_GEOMETRYNODE_H
