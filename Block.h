#pragma once
#ifndef TESTCHAIN_BLOCK_H
#define TESTCHAIN_BLOCK_H
#include <cstdint>
#include <iostream>

using namespace std;

class Block{
public:
    string sPrevHash;
    
    Block(uint32_t nIndexIn, const string &sDataIn);

    string GetHash();
    
    void MineBlock(uint32_t nDifficulty);

private:
    uint32_t _nIndex;
    uint64_t _nNonce;
    string _sData;
    time_t _tTime;
    string _sHash;

    string _CalculateHash() const;
};

#endif