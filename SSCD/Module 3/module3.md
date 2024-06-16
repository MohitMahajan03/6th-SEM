# MOUDLE - 3 SYNTAZ ANALYSIS

## Introduction

## Role Of Parsers

## Context Free Grammars

## Writing a grammar

## Derivation

## Ambiguity

## Left Recursion

### Elimination of Left Recursion

Consider,
*   A -> Aα | β

Elimination of left recursion is achieved by the following steps
*   A  -> βA'
*   A' -> αA' | ε

For group productions
*   A -> Aα<sub>1</sub> | Aα<sub>2</sub> |... | Aα<sub>n</sub> | β<sub>1</sub> | β<sub>2</sub> | ... | β<sub>n</sub>

Eliminatino is performed as follows
*   A  -> β<sub>1</sub>A' | β<sub>2</sub>A' | ... | β<sub>n</sub>A' 
*   A' -> α<sub>1</sub>A' | α<sub>2</sub>A' | ... | α<sub>n</sub>A' | ε

### Left Factoring

>If RHS of more than 1 production starts with the same symbol, then such a grammar is called left factored grammar

Consider,
*   A -> aα<sub>1</sub> | aα<sub>2</sub> | aα<sub>3</sub>

After Left Factoring, the grammar looks as follows:
*   A  -> aA' | Γ
*   A' -> α<sub>1</sub> | α<sub>2</sub> | α<sub>3</sub>


## Error Recovery Strategies

## Top Down Parsers:

### Left Recursive Descent Parser (LL(0))
>Explain & Write Code Snippet

### First and Follow

<b> Computing FIRST </b>

1) If production is of the form _A -> aB_ then, <br>
        FIRST(A) = {a}, _Consider only terminals_

2) If production is of the form _A -> Ba_ then, <br>
        FIRST(A) = FIRST(B), _Check FIRST(B) and add it to FIRST(A)_

3) If production is of the form _A -> B<sub>1</sub>B<sub>2</sub>B<sub>3</sub>_ then,

    *   if B<sub>1</sub> _does NOT produce_ ε then, <br>
            FIRST(A) = FIRST(B<sub>1</sub>)

    *   if B<sub>1</sub> _PRODUCES_ ε then, <br>
            FIRST(A) = {FIRST(B<sub>1</sub>) - ε} U FIRST(B<sub>2</sub>B<sub>3</sub>)<br>

        * Add FIRST(B<sub>1</sub>) into FIRST(A) and replace it by ε in the production, and then Add FIRST(B<sub>2</sub>), and subsequently _if B<sub>2</sub> produces ε_ repeat the entire process again

## Bottom-Up Parsers:

### Shift Reduce Parser

### Simple LR and Canonical LR