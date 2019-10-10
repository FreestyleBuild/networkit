/*
 * Curveball.h
 *
 *  Created on: 26.05.2018
 *      Author:  Hung Tran <htran@ae.cs.uni-frankfurt.de>, Manuel Penschuck <networkit@manuel.jetzt>
 */
#ifndef NETWORKIT_RANDOMIZATION_CURVEBALL_HPP_
#define NETWORKIT_RANDOMIZATION_CURVEBALL_HPP_

#include <memory>
#include <utility>

#include <networkit/Globals.hpp>
#include <networkit/base/Algorithm.hpp>
#include <networkit/graph/Graph.hpp>

namespace NetworKit {

// pImpl
namespace CurveballDetails { class CurveballIM; }

class Curveball : public Algorithm {
public:

    explicit Curveball(const Graph &G);

    virtual ~Curveball();

    void run() override final {
        throw std::runtime_error("run() is not supported by this algorithm; use run(trades)");
    };

    void run(const std::vector<std::pair<node, node> >& trades);

    Graph getGraph(bool parallel = false);

    virtual std::string toString() const override final;

    virtual bool isParallel() const override final {
        return false;
    }

    count getNumberOfAffectedEdges() const;


private:
    std::unique_ptr<CurveballDetails::CurveballIM> impl;
};

} // ! namespace NetworKit

#endif // NETWORKIT_RANDOMIZATION_CURVEBALL_HPP_
