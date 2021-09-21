#ifndef __TRIENODE_H__
#define __TRIENODE_H__

class TrieNode
{
private:
    /* data */
public:
    bool isEnd;
    TrieNode* children[26];

};

#endif // __TRIENODE_H__