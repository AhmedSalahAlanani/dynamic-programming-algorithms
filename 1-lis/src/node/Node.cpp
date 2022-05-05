#include <iostream>
#include <algorithm>

#include "Node.hpp"

namespace lifs
{
    Node::Node(uint16_t weight)
        : m_weight{weight}
    {
    }

    bool Node::isVisited() const
    {
        return m_visited;
    }

    void Node::setVisited()
    {
        m_visited = true;
    }

    uint16_t Node::getWeight() const
    {
        return m_weight;
    }

    void Node::setLongestPath(uint16_t path)
    {
        m_longestPath = path;
    }

    void Node::updateLongestPath()
    {
        m_longestPath = *max_element(m_possiblePaths.begin(), m_possiblePaths.end());
    }

    uint16_t Node::getLongestPath() const
    {
        return m_longestPath;
    }

    void Node::addPossiblePath(uint16_t path)
    {
        m_possiblePaths.emplace_back(path);
    }

    void Node::printPossiblePaths() const
    {
        for (const auto path : m_possiblePaths)
        {
            std::cout << path << "\n";
        }
    }
}