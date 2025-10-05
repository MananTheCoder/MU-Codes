#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef pair<int, int> pii;

#define forn(i, n) for (int i = 0; i < n; i++)
#define pb push_back

class Human
{
    double weight;

public:
    string name;
    int age;
    bool open_to_art377;
    char gender;

    bool hand_raise_accepted()
    {
        return true;
    }

    void speak() // Langha's fav function
    {
        if (hand_raise_accepted())
        {
            cout << "Bla bla bla\n";
        }
    }

    void setWeight(int weight)
    {
        if (age > 17)
        {
            // save
        }
        // throw error this->weight = weight;
    }

    int getWeight()
    {
        return weight;
    }
};

vi input_vector()
{
    int n;
    cin >> n;
    vi v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    return v;
}

void print_vec(vi &v)
{
    forn(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void playing_with_class()
{
    // Human *Tirth = new Human();
    Human Langha;
    Langha.setWeight(90);
    cout << Langha.getWeight() << "\n";
    // Langha.weight = 90;
}

void solve()
{
    playing_with_class();
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}