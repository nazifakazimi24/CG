#ifndef APPLICATION_SOLAR_HPP
#define APPLICATION_SOLAR_HPP

#include "application.hpp"
#include "model.hpp"
#include "structs.hpp"
#include "../../framework/include/Node.hpp"
#include "../../framework/include/SceneGraph.hpp"


// gpu representation of model
class ApplicationSolar : public Application {
public:
    // allocate and initialize objects
    ApplicationSolar(std::string const &resource_path);

    // free allocated objects
    ~ApplicationSolar();

    // react to key input
    void keyCallback(int key, int action, int mods);

    //handle delta mouse movement input
    void mouseCallback(double pos_x, double pos_y);

    //handle resizing
    void resizeCallback(unsigned width, unsigned height);

    // draw all objects
    void render() const;

    SceneGraph *sceneGraph_; // scene graph, contains the scene

    std::vector<std::shared_ptr<GeometryNode>> planets_;

    model_object stars_;
    //Assign5
    model_object screenquad_object;

    //framebuffer_object framebuffer_obj;

protected:
    void load_planets();
    void load_textures();

    void generate_stars();

    void generate_trails();
    //Assign5
    void generate_screen();


    void initializeShaderPrograms();

    void initializeGeometry();

    // update uniform values
    void uploadUniforms();

    // upload projection matrix
    void uploadProjection();

    // upload view matrix
    void uploadView();

    // cpu representation of model
    model_object planet_object;
    //Assign5
    bool initialize_framebuffer(unsigned width, unsigned height);

    unsigned screen_width;
    unsigned screen_height;
    framebuffer_object framebuffer_obj;
    
    // camera transform matrix
    glm::fmat4 m_view_transform;
    // camera projection matrix
    glm::fmat4 m_view_projection;
    // root Node (contains camera)


};

#endif
