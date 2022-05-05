#ifndef NODE_H
#define NODE_H
#include <vector>

namespace lifs
{
    static constexpr auto ONE_NODE_PATH = 1;

    class Node
    {
    public:
        Node(uint16_t weight);
        Node() = delete;
        ~Node() = default;
        bool isVisited() const;
        void setVisited();
        uint16_t getWeight() const;
        void setLongestPath(uint16_t path);
        void updateLongestPath();
        uint16_t getLongestPath() const;
        void addPossiblePath(uint16_t path);
        void printPossiblePaths() const;

    private:
        bool m_visited = false;
        uint16_t m_weight;
        uint16_t m_longestPath = ONE_NODE_PATH;
        std::vector<uint16_t> m_possiblePaths{ONE_NODE_PATH};
    };
}

#endif