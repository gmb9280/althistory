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
	*(this->x) = _x; 
}

void Vertex::setY(float _y)
{
	*(this->y) = _y;
}

void Vertex::setZ(float _z)
{
	*(this->z) = _z;
}

void Vertex::set(Vertex _v)
{
	*(this->x) = _v.getX(); 
	*(this->y) = _v.getY(); 
	*(this->z) = _v.getZ();
}; 


Vertex::~Vertex()
{
}
