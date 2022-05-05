#ifndef LIFS_H
#define LIFS_H
#include <vector>
#include <initializer_list>

#include "node/Node.hpp"

namespace lifs
{
    class Lifs
    {
    public:
        Lifs(std::initializer_list<Node> &&nodes);
        Lifs() = delete;
        ~Lifs() = default;

        void run();

    private:
        std::vector<Node> m_nodes;
        std::vector<uint16_t> m_foundPaths;

        void findLIFS(std::vector<Node>::reverse_iterator k);
        void printFoundPaths();
        uint16_t getCurrentLIFS();
    };
}

#endif