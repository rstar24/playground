#include <iostream>
#include <regex>

int main() {
    std::string input = "123-456,7890 12_345, sdf2222";  // Replace this with your input string
    std::regex pattern(R"(\d{3}(?:\D*\d{3})*)");

    std::sregex_iterator it(input.begin(), input.end(), pattern);
    std::sregex_iterator end;

    while (it != end) {
        std::smatch match = *it;
        std::cout << "Triplet of digits: " << match.str() << std::endl;
        ++it;
    }

    return 0;
}
