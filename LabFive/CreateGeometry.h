#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include "Mesh.h"
#include <string>

#include <vector>
#include "tiny_obj_loader.h"
#include <glm/glm.hpp>
#include <sys/stat.h>
#include <fcntl.h>
#include <io.h>
#include <iostream>

struct VertexData {
	std::vector<GLfloat> vertex;
	std::vector<GLfloat> normals;
	std::vector<GLuint> indicies;
};

Mesh loadFile(GLuint program, std::string fileName);


GLfloat * getCubeVert();

GLfloat * getCubeNorm();

GLuint * getCubeIndicies();

Mesh loadCubeFile(GLuint program, std::string fileName);

Mesh createCube(GLuint program);