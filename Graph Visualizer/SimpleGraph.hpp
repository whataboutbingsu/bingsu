#pragma once


/*************************************************************************
* File: SimpleGraph.h
*
* A header file defining a set of functions which can be used to visualize a
* simple graph.  The types declared here and the DrawGraph() function will
* allow you to render a scaled version of a SimpleGraph you pass in.
*/

#include <iostream>
using std::ostream;
#include <vector>
//#include <cstddef>

/**
* Type: Node
* -----------------------------------------------------------------------
* A type representing a node in a graph.  Each node stores only the x and
* y coordinates of where the node is in the plane; all other information
* about the node is stored implicitly by its position in the SimpleGraph
* list of nodes.
*/
struct Node {
	double x, y;
	Node(double, double);
	double distance(const Node& next);
};

/**
* Type: Edge
* -----------------------------------------------------------------------
* A type representing an edge in the graph.  It stores its endpoints by
* the indices in which they occur in the SimpleGraph's list of Nodes.
*/
struct Edge {
	unsigned start, end;
	Edge(unsigned, unsigned);
	
};

/**
* Type: SimpleGraph
* -----------------------------------------------------------------------
* A type representing a simple graph of nodes and edges.
*/

class SimpleGraph {
	unsigned N;
	std::vector<Node> nodes;
	std::vector<Edge> edges;
	std::vector<double> distances;
	std::vector<double> Frepel;
	std::vector<double> Fattract;
public:
	SimpleGraph();
	void update(void);
	unsigned getEdgeSize() { return edges.size(); }
	Node getNode(unsigned);
	Edge getEdge(unsigned);
	void printDistances();
	// ... other functions?
};

/**
* Function: DrawGraph(SimpleGraph& graph)
* -----------------------------------------------------------------------
* "Draws" the specified graph by listing the edges as ((xm,ym),(xn,yn))
*/

//**************************************
// Helper function for drawing (printing out) the node coordinates:
ostream& operator<<(ostream& latefordinner, const Node& n);

void DrawGraph(SimpleGraph& userGraph);
