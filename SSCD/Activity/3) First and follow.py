# Function to compute First set
def compute_first(symbol, grammar, first_sets):
    if symbol in first_sets:
        return first_sets[symbol]

    first = set()

    # If the symbol is a terminal
    if not symbol.isupper():
        return {symbol}  # Return the terminal itself

    # If the symbol is a non-terminal
    for production in grammar[symbol]:
        for prod_symbol in production:
            if prod_symbol == '#':  # Handle epsilon
                first.add('#')
                break
            first_of_symbol = compute_first(prod_symbol, grammar, first_sets)
            first.update(first_of_symbol - {'#'})
            if '#' not in first_of_symbol:
                break
        else:
            first.add('#')  # All symbols can derive #

    first_sets[symbol] = first
    return first

# Function to compute Follow set
def compute_follow(symbol, grammar, follow_sets, first_sets, start_symbol):
    if symbol in follow_sets:
        return follow_sets[symbol]

    follow = set()
    
    if symbol == start_symbol:
        follow.add('$')  # End of input symbol

    for lhs, productions in grammar.items():
        for production in productions:
            for i, prod_symbol in enumerate(production):
                if prod_symbol == symbol:
                    # Check what's follows the symbol
                    if i + 1 < len(production):
                        next_symbol = production[i + 1]
                        first_of_next = compute_first(next_symbol, grammar, first_sets)

                        follow.update(first_of_next - {'#'})
                        
                        # If # is in First(next_symbol), add Follow(next_symbol)
                        if '#' in first_of_next:
                            follow.update(compute_follow(next_symbol, grammar, follow_sets, first_sets, start_symbol))
                    else:
                        # Add Follow(lhs) to Follow(symbol) if lhs!= symbol
                        if lhs != symbol:
                            follow.update(compute_follow(lhs, grammar, follow_sets, first_sets, start_symbol))

    follow_sets[symbol] = follow
    return follow

# Main function to calculate First and Follow sets
def compute_first_and_follow(grammar):
    first_sets = {}
    follow_sets = {}
    start_symbol = list(grammar.keys())[0]

    # Calculate First sets
    for non_terminal in grammar:
        compute_first(non_terminal, grammar, first_sets)

    # Calculate Follow sets
    for non_terminal in grammar:
        compute_follow(non_terminal, grammar, follow_sets, first_sets, start_symbol)

    return first_sets, follow_sets

# Example grammar
grammar = {
    'S': [['A', 'B', 'C', 'D', 'E']],
    'A': [['a'], ['#']],
    'B': [['b'], ['#']],
    'C': [['c']],
    'D': [['d'], ['#']],
    'E': [['e'], ['#']]
}

first, follow = compute_first_and_follow(grammar)

print("First Sets:")
for key in first:
    print(f"First({key}) = {{ {', '.join(first[key])} }}")

print("\nFollow Sets:")
for key in follow:
    print(f"Follow({key}) = {{ {', '.join(follow[key])} }}")
