# MOUDLE - 3 SYNTAX ANALYSIS

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

<b> Computing FOLLOW </b>

1) For the start symbol 'S', place '$' in FOLLOW(S).

* To Find the FOLLOW(B) proceed as follows:

2) If _A -> αB_ then, <br>
    FOLLOW(B) = FOLLOW(A), _Here there is no Terminal/Non-terminal following B, Therefore FOLLOW(B) = FOLLOW(A)_

3) If _A -> αBβ_ then, <br>
    * If β _does NOT produce_ ε then <br>
        FOLLOW(B) = FIRST(β)

    * If β _produces_ ε then <br>
        FOLLOW(B) = {FIRST(β) - ε} U FOLLOW(A)

### LL(1) Predictive Parser

1) Find the FIRST and FOLLOW of the Grammar.
2) Construct the predictive parser table (This table can also be used to ascertain if the given grammar is in the form of LL(1) or not)
3) Parse the given string with the help of the predictive parser table.

## Bottom-Up Parsers:

### Shift Reduce Parser
* There are 2 hardware devices involved, a stack and an input buffer
* The starting state of the Stack = '$' and the starting state of the input buffer is the 'w$' where 'w' is some input string.
* There are 4 actions carried out by the shift reduce parser, Shift, Reduce, Accept and Reject.
* Always find carry out the action that takes you closer towards the end goal.
* The configuration of the Stack and input buffer for the accepting state are '$S' and '$' respectively, where 'S' is the start state of the grammar. 

### Simple LR and Canonical LR

* Steps to be followed while performing Canonical LR parsing.
    1. Construction of Augmented Grammar.
    2. Closure of the Augmented Grammar.
    3. Collection of LR(0) Canonical items.
    4. Constructing Deterministic Finite Automata (DFA).
    5. Construction of Parsing table and parsing given string.

* Steps followed for SLR parsing
    * Steps from (1) to (4) same as canonical LR parsing
    5. Construct First and Follow for the given grammar.
    6. Use the First and Follow to build the Parsing table.



# FOR ASSIGNMENT

## Bring out 5 differences between 

### Top down and Bottom up parsers

Top-down and bottom-up parsers are two fundamental approaches used in the parsing process in compilers and interpreters for programming languages. They differ in how they process the input string and build the parse tree. Here are the key differences between the two:

### 1. **Parsing Strategy**

- **Top-Down Parsers:**
  - **Start from the root:** Begin parsing from the start symbol of the grammar and try to rewrite it to match the input string.
  - **Direction:** Work their way from the root (start symbol) down to the leaves (terminals) of the parse tree.
  - **Techniques:** Common techniques include Recursive Descent Parsing and Predictive Parsing (LL parsers).

- **Bottom-Up Parsers:**
  - **Start from the leaves:** Begin parsing from the input string and try to reduce it to the start symbol.
  - **Direction:** Work their way from the leaves (terminals) up to the root (start symbol) of the parse tree.
  - **Techniques:** Common techniques include Shift-Reduce Parsing and LR Parsing (SLR, LALR, and Canonical LR parsers).

### 2. **Parse Tree Construction**

- **Top-Down Parsers:**
  - **Construction:** Constructs the parse tree from top to bottom.
  - **Expansion:** Expand non-terminal symbols using production rules.

- **Bottom-Up Parsers:**
  - **Construction:** Constructs the parse tree from bottom to top.
  - **Reduction:** Reduce sequences of terminals and non-terminals to a non-terminal symbol according to the production rules.

### 3. **Backtracking**

- **Top-Down Parsers:**
  - **Backtracking:** May involve backtracking if a chosen production rule does not lead to a successful parse (unless they are predictive parsers like LL(k) that use lookahead to avoid backtracking).

- **Bottom-Up Parsers:**
  - **Backtracking:** Generally do not involve backtracking; they use a deterministic approach.

### 4. **Lookahead**

- **Top-Down Parsers:**
  - **Lookahead:** Often use lookahead tokens to make parsing decisions (e.g., LL(k) parsers look ahead k tokens).

- **Bottom-Up Parsers:**
  - **Lookahead:** May also use lookahead tokens, especially LR(k) parsers, to decide when to shift or reduce.

### 5. **Efficiency**

- **Top-Down Parsers:**
  - **Efficiency:** Simple and easy to implement but can be inefficient due to potential backtracking and lack of ability to handle left recursion directly.

- **Bottom-Up Parsers:**
  - **Efficiency:** More powerful and can handle a larger class of grammars, including those with left recursion; however, they are generally more complex to implement.

### 6. **Grammar Handling**

- **Top-Down Parsers:**
  - **Grammar Requirements:** Usually require the grammar to be in a specific form (e.g., LL parsers need the grammar to be LL(k) and free of left recursion).

- **Bottom-Up Parsers:**
  - **Grammar Requirements:** Can handle a wider range of grammars, including those that are not LL(k) and those with left recursion.

### 7. **Examples**

- **Top-Down Parsers:**
  - **Examples:** Recursive Descent Parser, LL(1) Parser.

- **Bottom-Up Parsers:**
  - **Examples:** Shift-Reduce Parser, LR(0) Parser, SLR(1) Parser, LALR(1) Parser, Canonical LR(1) Parser.

### 8. **Error Handling**

- **Top-Down Parsers:**
  - **Error Handling:** Can detect errors early in the parsing process.

- **Bottom-Up Parsers:**
  - **Error Handling:** May detect errors later, often after more input has been processed.

### Summary

| Aspect             | Top-Down Parsers                    | Bottom-Up Parsers                     |
|--------------------|-------------------------------------|---------------------------------------|
| **Strategy**       | Root to leaves                      | Leaves to root                        |
| **Parse Tree**     | Construct top-down                  | Construct bottom-up                   |
| **Backtracking**   | Possible                            | Generally not required                |
| **Lookahead**      | Often used                          | Often used                            |
| **Efficiency**     | Simple but less powerful            | More powerful but complex             |
| **Grammar**        | Requires specific form (e.g., LL)   | Handles a wider range of grammars     |
| **Examples**       | Recursive Descent, LL(1)            | Shift-Reduce, LR, SLR, LALR, Canonical LR |
| **Error Handling** | Early error detection               | Later error detection                 |

These differences highlight the distinct approaches and capabilities of top-down and bottom-up parsers, influencing their suitability for different types of grammars and parsing tasks.

### SR and LR parsers


Shift-Reduce (SR) and LR parsers are both types of bottom-up parsers used in compiler design to analyze and interpret the syntax of programming languages. They share some commonalities but also have significant differences in terms of their parsing strategies, efficiency, and implementation complexity. Here are the key differences between SR and LR parsers:

### 1. **Basic Concept**

- **Shift-Reduce (SR) Parsers:**
  - **General Concept:** Use a stack to hold symbols and an input buffer. Actions include shifting symbols from the input buffer to the stack and reducing symbols on the stack using production rules.
  - **Mechanism:** Operate using two main actions—shift (move a symbol from the input to the stack) and reduce (apply a production rule to replace a series of symbols on the stack with a non-terminal).

- **LR Parsers:**
  - **General Concept:** A specific type of shift-reduce parser that uses a deterministic finite automaton (DFA) to make parsing decisions.
  - **Mechanism:** Utilize a more sophisticated approach, maintaining a state and using lookahead tokens to decide whether to shift or reduce.

### 2. **Parsing Table**

- **Shift-Reduce (SR) Parsers:**
  - **Parsing Table:** Generally simpler; consists of actions like shift, reduce, accept, and error. Often hand-crafted for simpler grammars.
  - **Conflicts:** More prone to shift-reduce and reduce-reduce conflicts due to simpler, less sophisticated parsing tables.

- **LR Parsers:**
  - **Parsing Table:** More complex; consists of action and goto tables that are generated based on a detailed analysis of the grammar.
  - **Conflicts:** Better at resolving conflicts because they use state information and lookahead tokens, leading to fewer conflicts in properly defined grammars.

### 3. **Grammar Handling**

- **Shift-Reduce (SR) Parsers:**
  - **Grammar Suitability:** Suitable for simpler and smaller grammars. Can struggle with more complex grammars.
  - **Left Recursion:** May have difficulty handling grammars with left recursion.

- **LR Parsers:**
  - **Grammar Suitability:** Capable of handling a wide range of grammars, including those with left recursion and more complex structures.
  - **Left Recursion:** Can effectively handle left recursion and other complex grammar constructs.

### 4. **Lookahead**

- **Shift-Reduce (SR) Parsers:**
  - **Lookahead:** Typically do not use lookahead tokens or use only a very limited lookahead (e.g., one token).

- **LR Parsers:**
  - **Lookahead:** Use lookahead tokens (typically one or more) to make parsing decisions. For example, LR(1) parsers use one lookahead token.

### 5. **Efficiency and Complexity**

- **Shift-Reduce (SR) Parsers:**
  - **Efficiency:** Simpler and faster for smaller grammars, but less efficient for complex grammars due to potential conflicts and less powerful conflict resolution.
  - **Complexity:** Easier to implement and understand but less powerful.

- **LR Parsers:**
  - **Efficiency:** More efficient for complex grammars as they use a more powerful parsing table and state information.
  - **Complexity:** More complex to implement and understand due to the need for detailed parsing tables and state management.

### 6. **Examples**

- **Shift-Reduce (SR) Parsers:**
  - **Examples:** Basic shift-reduce parsers used in educational settings or for very simple languages.

- **LR Parsers:**
  - **Examples:** Canonical LR(1), SLR(1) (Simple LR), and LALR(1) (Look-Ahead LR) parsers.

### 7. **Error Handling**

- **Shift-Reduce (SR) Parsers:**
  - **Error Handling:** Less robust error handling, typically reporting errors later in the parsing process.

- **LR Parsers:**
  - **Error Handling:** More robust error handling due to detailed state information and lookahead, allowing for earlier and more accurate error detection.

### Summary

| Aspect             | Shift-Reduce (SR) Parsers             | LR Parsers                               |
|--------------------|---------------------------------------|------------------------------------------|
| **Concept**        | Basic shift and reduce actions        | Uses DFA, state information, and lookahead |
| **Parsing Table**  | Simpler, prone to conflicts           | Complex, resolves conflicts better        |
| **Grammar Handling** | Suitable for simpler grammars       | Handles complex grammars well             |
| **Left Recursion** | Struggles with left recursion         | Handles left recursion effectively        |
| **Lookahead**      | Limited or no lookahead               | Uses lookahead tokens (e.g., LR(1))       |
| **Efficiency**     | Simpler but less efficient for complex grammars | More efficient for complex grammars       |
| **Complexity**     | Easier to implement and understand    | More complex to implement                 |
| **Examples**       | Basic educational parsers             | Canonical LR(1), SLR(1), LALR(1)          |
| **Error Handling** | Less robust, later error detection    | More robust, earlier error detection      |

These differences highlight the relative simplicity of SR parsers compared to the more sophisticated and powerful LR parsers, making each suitable for different parsing tasks and types of grammars.