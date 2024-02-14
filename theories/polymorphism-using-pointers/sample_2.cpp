#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::vector;

class Text
{
    string text;
public:
    Text(const string& t): text(t) {}

    virtual string get() const
    {
        return text;
    }
};

class FancyText: public Text
{
    string left_bracket;
    string right_bracket;
public:
    FancyText(const string& t, const string& left, const string& right):
        Text(t), left_bracket(left), right_bracket(right) {}
    
    string get() const override
    {
        return left_bracket + Text::get() + right_bracket;
    }
};

int main()
{
    // Create a vector containing Text class pointers
    vector<Text*> texts
    {
        new Text("ABC"),
        new FancyText("XYZ", "<<", ">>")
    };

    for (const auto& t : texts)
    {
        cout << t->get() << '\n';
    }
    // ->
    // ABC    
    // <<XYZ>>
}