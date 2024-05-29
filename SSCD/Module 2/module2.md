# INTRODUCTION TO COMPILERS

## Language Processors

* Compiler is a program that converts a program in the source language to a target language.
* The compiler's job is to report errors as it translates the language.
* Another language processor is an _interpreter_ which directly translates and executes instructions line by line.
* A compiled program is faster where as interpreter gives better error diagnostics than a compiler.

<img src = "Javaeg.png">

* The _preprocessor_ is a program that helps the compiler.
* It's main job is to collect source programs, expand shorthands/macros into source language statements.
* This code is then fed into the _compiler_ which produces an assembly level code.
* The _assembler_ processes this assembly language program.
* The assembler produces relocatable code, which which will have to be linked together by a _linker_. 
* The _loader_ puts all the linked executable files into memory for execution.

<img src = "langproc.png">

## The Structure of a Compiler

* COMPILER -> Analysis
           |
           -> Synthesis

* The analysis part:
    1) Breaks source program into constituent parts
    2) Impose grammatical structure
    3) Informs if code is symantically or syntactically unsound.
    4) Also called the front-end of the compiler.

* The synthesis part:
    1) Constructs the target program from the source program.
    2) Also called as the back-end of the compiler.

<img src = "Struct_comp.png">

### Lexical Analysis

* The Lexical Analyzer :
    1) Reads stream of characters making up the source program.
    2) Groups characters into meaningful sequences called lexemes.
    3) It produces outputs in the form of _tokens_ whose structure is _(token-name, attribute-value)_.
    4) These tokens are then passed onto the _syntax analzer_.
    5) The _attribute value points to an entry in the symbol table for this token.

<img src = "examp.png">

## Evolution of Programming Languages

* Computers were built in the 1940's and were programmed using 1's and 0's i.e. Machine code.
* The operations were really low level, like move data from registers and compare 2 values etc.
* This kind of programming was tedious, slow and error prone, and programs were difficult to understand and modify.

### Move To Higher Level Languages

* The 1st move to higher langauges started with mnemonics for the machine code, this led to the emergence of _assembly_ languages.
* Later to assembly languages, macros were added to help write the shorthands in the assembly language.

* Higher level programming languages were developed in the 1950's with _Fortran_, _Cobol_ for business data processing and _Lisp_ for symbolic data computation.
* These higher level programming languages were required to write numerical computations, business applications and symbolic programs.
* More features were added to these languages to make programming more easier, natural and robust.

>These high level programming languages can be classified into generations.

* First Generation: Machine Languages
* Second Generation: Assembly Language
* Third Generation: High Level Languages like Cobol, Fortran, Lisp, C, C++, C#, Java, Python etc.
* Fourth Generation: These languages are built for a particular application like NOMAD, SQL and Postscript.
* Fifth Genereation: These are logic and constraint based languages like Prolog and OPS5.

>Languages are classified based on how the computation takes place, and what computations are to take place i.e. imperative languages and declarative languages.

* Languages like C, C++, C# and Java are imperative languages.
* Imperative languages work on program states, and the satements that are executed alter the states.

* Languages like ML, Haskell and Prolog are declarative languages.
* Declarative programming languages specifies what work is to be done without specifying the control flow.

* Von Nuemann language models are languages that whose computational models are based on the Von Neumann computer architecture. 
* C and Fortran are Von Nuemann languages.

>Languages are classified based on the structure and their functionalities.

* Object Oriented Programming: Style where program consists of objects and them interacting with each other. Ex: C++, C#, Java, etc.

* Scripting Languages: These are interpreted languages which _"glue together"_ computations also called as scripts. Ex:
Awk, JavaScript, Perl, PHP, Python, Ruby and Tcl.

## Science of Building Compiler

