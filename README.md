This a repository for some projects about practicing solving different problems in C++ using CodeBlocks IDE

## General Good Practices 💪✅

### Why passing string by reference and making it const?
Using `const std::string& name` in the `Student` constructor as a parameter is a good practice in C++ for passing strings, especially when you don't intend to modify the string within the constructor and want to avoid unnecessary string copies.

Here's why it's beneficial:

1. **Efficiency**: Passing by reference (`const std::string&`) avoids unnecessary copying of the string. If you pass a `std::string` by value, a copy of that string will be made when the function is called. For larger strings or frequent string passing, this could lead to unnecessary overhead.

2. **Avoids Modification**: Using `const` indicates that the parameter won't be modified within the constructor. It's a good practice to make it clear in the function signature that the parameter is read-only.

3. **Flexibility**: Passing by reference allows you to work with existing strings without making a new copy. It's especially useful if you're dealing with strings from other parts of the program.

For instance:
```cpp
Student student("Alice");
```

When creating a `Student` object as shown above, you can directly pass a string literal or an existing `std::string` object without creating an extra copy of the string.

In summary, using `const std::string&` as a parameter in this context helps in optimizing performance by avoiding unnecessary string copies while ensuring that the passed string is not modified within the constructor.

### Why not "using namespace std;" is good

The `std::string` class is part of the C++ Standard Library (`std` namespace), so it's available by default when you include the `<string>` header file in your C++ program.

When you write `#include <string>`, it includes the declarations and definitions of the `std::string` class and other related functionalities provided by the C++ Standard Library's string handling facilities.

In C++, using `using namespace std;` at the global scope or in a header file is generally discouraged, especially when it's used in larger codebases or projects. This is because it introduces all the names from the `std` namespace into the global namespace, potentially causing naming conflicts and making the code less maintainable.

By explicitly qualifying `std::string`, you make it clear that `string` belongs to the `std` namespace. This practice helps to prevent naming clashes, especially when using multiple libraries or writing larger programs where different libraries might have functions or classes with the same name.

However, within smaller scopes such as functions, using `using namespace std;` might be acceptable in some cases where it won't cause ambiguity issues.

Therefore, it's a good practice to use the `std::` prefix when referring to entities from the `std` namespace to ensure clarity, readability, and to prevent potential naming collisions.