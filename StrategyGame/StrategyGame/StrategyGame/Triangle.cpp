#include "Triangle.h"


// Blank triangle
Triangle::Triangle()
{
	this->a = nullptr; 
	this->b = nullptr; 
	this->c = nullptr;

	this->n_a = nullptr; 
	this->n_b = nullptr; 
	this->n_c = nullptr; 
	
	this->t_a = nullptr; 
	this->t_b = nullptr; 
	this->t_b = nullptr; 
}

// Triangle with verts, UVs, and normals initialized
Triangle::Triangle(Vertex a, Vertex b, Vertex c,
	Vertex na, Vertex nb, Vertex nc, 
	Vertex ta, Vertex tb, Vertex tc)
{
	*(this->a) = a;
	*(this->b) = b;
	*(this->c) = c;

	*(this->n_a) = na;
	*(this->n_b) = nb;
	*(this->n_c) = nc;

	*(this->t_a) = ta;
	*(this->t_b) = tb;
	*(this->t_c) = tc;

}

// Triangle with no UVs or normals
Triangle::Triangle(Vertex a, Vertex b, Vertex c)
{
	*(this->a) = a; 
	*(this->b) = b; 
	*(this->c) = c;
	// Set normals and UVs to default values
	*(this->n_a) = Vertex(.5f, .5f, .5f);
	*(this->n_b) = Vertex(.5f, .5f, .5f);
	*(this->n_c) = Vertex(.5f, .5f, .5f);

	*(this->t_a) = Vertex(.5f, .5f, .5f);
	*(this->t_b) = Vertex(.5f, .5f, .5f);
	*(this->t_b) = Vertex(.5f, .5f, .5f);
}


Triangle::~Triangle()
{
}
