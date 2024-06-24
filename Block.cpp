#include "Block.h"
#include "sha256.h"
#include <sstream>

using namespace std;

Block::Block(uint32_t nIndexIn, const string &sDataIn) : _nIndex(nIndexIn), _sData(sDataIn) {
    _nNonce = -1;
    _tTime = time(nullptr);
}

string Block::GetHash(){
    return _sHash;
}

void Block::MineBlock(uint32_t nDifficulty){
    char sctr[nDifficulty + 1];
    for(uint32_t i = 0; i < nDifficulty; ++i){
        sctr[i] = '0';
    }
    sctr[nDifficulty] = '\0';
    string str = sctr;
    do {
        _nNonce++;
        _sHash = _CalculateHash();
    } while(_sHash.substr(0, nDifficulty) != str);
    cout << "Block mined: " << _sHash << endl;
}

inline string Block::_CalculateHash() const {
    stringstream ss;
    ss << _nIndex << _tTime << _sData << _nNonce << sPrevHash;
    return sha256(ss.str());
}




