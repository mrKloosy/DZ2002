#include <iostream>
#include <vector>

using namespace std;

class SqVector
{
private:
    vector<int> data;

public:

    void addSq() 
    {
        for (int i = 0; i < data.size(); ++i) 
        {
            data[i] = (i + 1) * (i + 1);
        }
    }

    void displayVector(ostream& os) const 
    {
        for (int value : data) 
        {
            os << value << " ";
        }
        os << endl;
    }

    SqVector()
    {
        data.resize(10);
        addSq();
    }

    ~SqVector()
    {

    }
};

int main()
{
    SqVector squareVector;
    squareVector.displayVector(cout);
}