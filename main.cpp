#include <iostream>
#include <cpr/cpr.h>

int main() {
    int temp = 0;
    cpr::Response r;
    while(1){
        std::cout << "\nEnter command:\n1.Get\n2.Post\n3.Put\n4.Delete\n5.Patch\n6.Exit\n";
        std::cin >> temp;
        if(temp == 1){
            r = cpr::Get(cpr::Url("http://httpbin.org/get"));
            std::cout << r.text;
        }
        if(temp == 2){
            r = cpr::Get(cpr::Url("http://httpbin.org/post"));
            std::cout << r.text;
        }
        if(temp == 3){
            r = cpr::Get(cpr::Url("http://httpbin.org/put"));
            std::cout << r.text;
        }
        if(temp == 4){
            r = cpr::Get(cpr::Url("http://httpbin.org/delete"));
            std::cout << r.text;
        }
        if(temp == 5){
            r = cpr::Get(cpr::Url("http://httpbin.org/patch"));
            std::cout << r.text;
        }
        if(temp == 6)
            break;
    }
    return 0;
}
