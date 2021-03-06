//
// Created by shirgold and EliadSellem on 26/12/2019.
//

#ifndef ADVANCEDPROGRAMMING_WHILECOMMAND_H
#define ADVANCEDPROGRAMMING_WHILECOMMAND_H


#include "conditionParser.h"

class WhileCommand : public ConditionParser {
    /*
     * execute all the command in the "while", while the condition is true.
     */
    virtual int execute(int index);
};

#endif //ADVANCEDPROGRAMMING_WHILECOMMAND_H
