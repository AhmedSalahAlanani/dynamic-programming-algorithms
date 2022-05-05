#include <iostream>
#include <algorithm>

#include "Lis.hpp"

#define DEBUG_MODE false

namespace lifs
{
    Lifs::Lifs(std::initializer_list<Node> &&nodes)
        : m_nodes{std::move(nodes)}
    {
    }

    void Lifs::run()
    {
        std::cout << "Lifs started running..\n";

        for (auto it = m_nodes.rbegin(); it < m_nodes.rend(); it++)
        {
            findLIFS(it);
        }

        std::cout << "Lifs found for this sequence = " << getCurrentLIFS() << "\n";
    }

    void Lifs::findLIFS(std::vector<Node>::reverse_iterator k)
    {
#if DEBUG_MODE
        std::cout << "Finding LIS ending at index: " << m_nodes.rend() - k - 1 << "\n";
#endif
        if (k->isVisited())
        {
#if DEBUG_MODE
            std::cout << "This node was visited before \n";
#endif
            return;
        }

        k->setVisited();
        const auto currentNodeWeight = k->getWeight();
        for (auto it = k + 1; it < m_nodes.rend(); it++)
        {
            const auto nextNodeWeight = it->getWeight();
#if DEBUG_MODE
            std::cout << "\t\tcurrent node weight =  " << currentNodeWeight << ", next node weight = " << it->getWeight() << " \n";
#endif
            if (nextNodeWeight < currentNodeWeight)
            {
                findLIFS(it);
                k->addPossiblePath(it->getLongestPath() + 1);
                k->updateLongestPath();
            }

#if DEBUG_MODE
            std::cout << "\t\tprinting possible paths for index = " << m_nodes.rend() - it - 1 << "\n";
            it->printPossiblePaths();
#endif
        }

#if DEBUG_MODE
        std::cout << "\tprinting possible paths for index: " << m_nodes.rend() - k - 1 << "\n";
        k->printPossiblePaths();
#endif
        m_foundPaths.emplace_back(k->getLongestPath());

#if DEBUG_MODE
        std::cout << "found paths so far: \n";
        printFoundPaths();
#endif
    }

    void Lifs::printFoundPaths()
    {
        for (const auto path : m_foundPaths)
        {
            std::cout << path << "\n";
        }
    }

    uint16_t Lifs::getCurrentLIFS()
    {
        return *max_element(m_foundPaths.begin(), m_foundPaths.end());
    }

}