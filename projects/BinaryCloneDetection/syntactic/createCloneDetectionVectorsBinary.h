#include "rose.h"
#include "SqlDatabase.h"

#include <string>
#include <fstream>
#include <iostream>
#include <fstream>
#include <stack>
#include <deque>

#ifndef CREATE_CLONE_DETECTION_VECTORS_BINARY
#define CREATE_CLONE_DETECTION_VECTORS_BINARY

#include <stdio.h>
#include <iostream>

// Ignores function boundaries
bool createVectorsForAllInstructions(SgNode* top, const std::string& filename, const std::string& functionName, int functionId,
                                     size_t windowSize, size_t stride, const SqlDatabase::TransactionPtr&);
void createVectorsRespectingFunctionBoundaries(SgNode* top, const std::string& filename, size_t windowSize, size_t stride,
                                               const SqlDatabase::TransactionPtr&);
void createVectorsNotRespectingFunctionBoundaries(SgNode* top, const std::string& filename, size_t windowSize, size_t stride,
                                                  const SqlDatabase::TransactionPtr&);
void createDatabases(const SqlDatabase::TransactionPtr &tx);

#endif // CREATE_CLONE_DETECTION_VECTORS_BINARY
