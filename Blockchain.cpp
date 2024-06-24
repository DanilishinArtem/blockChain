#include "Blockchain.h"

using namespace std;

Blockchain::Blockchain() {
    _vChain.push_back(Block(0, "Genesis Block"));
    _nDifficulty = 10;
}

void Blockchain::AddBlock(Block bNew) {
    bNew.sPrevHash = _vChain.back().GetHash();
    bNew.MineBlock(_nDifficulty);
    _vChain.push_back(bNew);
}

Block Blockchain::_GetLastBlock() const {
    return _vChain.back();
}