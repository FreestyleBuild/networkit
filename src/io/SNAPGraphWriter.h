/*
 * SNAPGraphWriter.h
 *
 *  Created on: 24.09.2013
 *      Author: cls
 */

#ifndef SNAPGRAPHWRITER_H_
#define SNAPGRAPHWRITER_H_

#include "GraphWriter.h"

namespace NetworKit {

/**
 * Write graph in the Georgia Tech SNAP (Small-world Network
Analysis and Partitioning) (http://snap-graph.sourceforge.net/)
file format (do not confuse this with the Stanford Network Analysis Project.)
From the SNAP user guide:

		# A sample graph file in the SNAP format (.gr extension)
		# (lines beginning with a # symbol indicate comments)

		# p denotes the problem line
		# p <n> <m> <undirected/directed> <weight_type> <0 or 1-indexed>

		# n indicates the number of vertices.

		# m denotes the number of edges.

		# The third parameter can be either u denoting a undirected graph,
		# or d denoting a directed graph. Internally, an edge <u, v> in an
		# undirected graph is stored as two directed links u->v and v->u.

		# weight_type can be u (unweighted), i (integer), l (long, 8 bytes on 64-bit
		# architectures), f (float), or d (double)

		# For the fifth parameter, 0 indicates that the valid range of vertex IDs
		# is 0 to n-1. 1 indicates that it is 1 to n.

		# The problem line is followed by a listing on exactly m edges. The format
		# is <u v w> for a weighted graph, and <u v> for an unweighted graph.

Good job
 */
class SNAPGraphWriter: public NetworKit::GraphWriter {
public:
	SNAPGraphWriter();
	virtual ~SNAPGraphWriter();
	virtual void write(Graph& G, std::string path);

private:

};

} /* namespace NetworKit */
#endif /* SNAPGRAPHWRITER_H_ */
