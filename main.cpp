#include "Blockchain.h"

using namespace std;


int main(){
    Blockchain bChain = Blockchain();

    cout << "Mining block 1 ... " << endl;
    bChain.AddBlock(Block(1, "Test Data"));
    cout << "Mining block 2 ... " << endl;
    bChain.AddBlock(Block(2, "Test Data 2"));
    cout << "Mining block 3 ... " << endl;
    bChain.AddBlock(Block(3, "Test Data 3"));

    return 0;
}