#include "Vertex.h"
class Triangle
{
public:
	// Default constructor - initializes to nullptrs
	Triangle();

	Triangle(Vertex x, Vertex y, Vertex z); 

	// Constructor for vertices, normals, and texture coords
	Triangle(Vertex x, Vertex y, Vertex z,
		Vertex na, Vertex nb, Vertex nc,
		Vertex ta, Vertex tb, Vertex tc);

	// Three-point constructor in local coordinates
	~Triangle();

private: 
	// Permanent pointers to vertices
	Vertex* a; 
	Vertex* b; 
	Vertex* c; 

	// Normals
	Vertex* n_a; 
	Vertex* n_b; 
	Vertex* n_c; 

	// UVs (Texture coords)
	Vertex* t_a; 
	Vertex* t_b; 
	Vertex* t_c; 

	float scale = 1; // always 1 to start
};

