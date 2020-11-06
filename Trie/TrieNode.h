#ifndef TRIE_TRIENODE_H
#define TRIE_TRIENODE_H

#include <vector>

struct TrieNode {
    //char data{};
    int n_children;
    std::vector<TrieNode*> children;
    std::vector<int> address;

    TrieNode();
};


#endif //TRIE_TRIENODE_H
