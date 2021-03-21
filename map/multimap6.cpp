#include<iostream>
#include<map>
#include<string>

using namespace std;

class grocery_list
{
    private:
        multimap <int,string> m;
    public:
        void add(int price,string item)
        {
            m.insert({price,item});
            cout << "Item added successfully" << endl;
        }

        void find(int price)
        {
            auto it = m.equal_range(price);
            cout << "The item with price " << price << " is : " << endl;
            for(auto itr = it.first;itr != it.second;itr++)
            {
                cout << itr->first << " " << itr->second <<endl;
            }
        }

        void print_sorted()
        {
            cout << "The list of items are :" << endl;
            for(auto x:m)
                cout << x.first << " " << x.second << endl;  
        }

        void print_greater_sorted(int price)
        {
            auto it = m.upper_bound(price);
            for(auto i = it ;i!= m.end();i++)
            {
                cout << (*i).first << " " << (*i).second << endl;
            }
        }

        
};

int main()
{
    grocery_list gl;
    gl.add(5,"DAIRY MILK");
    gl.add(10,"FIVE STAR");
    gl.add(20,"KIT KAT");
    gl.add(20,"SNICKERS");
    gl.add(25,"TOOTI FROOTI");
    gl.add(35,"CORNETTO");
    gl.add(40,"MAGNUM");
    gl.add(40,"FROOTI");
    gl.add(50,"CASSATA");

    gl.find(20);
    gl.find(40);

    gl.print_greater_sorted(20);
    

}