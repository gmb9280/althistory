#include "Vertex.h"


Vertex::Vertex()
{
	this->x = new float(0); 
}

Vertex::Vertex(float _x, float _y)
{
}
Vertex::Vertex(float _x, float _y, float _z)
{
	this->x = new float(_x); 
	this->y = new float(_y); 
	this->z = new float(_z);
}

const float& Vertex::getX()
{
	return *this->x; 
}

const float& Vertex::getY()
{
	return *this->y; 
}

const float& Vertex::getZ()
{
	return *this->z; 
}


void Vertex::setX(float _x)
{
}

void Vertex::setY(float _y)
{

}

void Vertex::setZ(float _z)
{
}

void Vertex::set(Vertex _v)
{
}; 


Vertex::~Vertex()
{
}
