#ifndef __GL_MODEL_H__
#define __GL_MODEL_H__

// #define __DIR__ std::parseLastDir(__FILE__)

class Model {
public:
    Model(
        const char *vertexShaderSourcePath,
        const char *fragmentShaderSourcePath);
        
    ~Model();
    // render model to display
    void render();
    void toX(float *verties, unsigned int size);
    
private:
    unsigned int VBO;
    unsigned int VAO;
    unsigned int program;
    unsigned int vertexShader;
    unsigned int fragmentShader;
    
    void fullPath(const char *path, char *full);
    void loadSource(const char *path, char *source);
    unsigned int getShaderWithSource(const char *source, unsigned int type);
    void compileFragmentShader(const char *source);
    void compileVertexShader(const char *source);
    void compileLinkProgram();
    void createVBO(float *verties, unsigned int size);
};

#endif
