
#include <iostream>
#include <memory>
using namespace std;

// Resource class
class Resource {
public:
    Resource() { cout << "Resource acquired" << endl; }
    ~Resource() { cout << "Resource released" << endl; }
    void use() { cout << "Resource is being used" << endl; }
};

// Manual Smart Pointer using RAII
class MySmartPointer {
private:
    Resource* ptr;

public:
    MySmartPointer(Resource* p) { ptr = p; }

    ~MySmartPointer() {
        delete ptr;
        cout << "Manual smart pointer destroyed" << endl;
    }

    Resource* operator->() { return ptr; }

    MySmartPointer(const MySmartPointer&) = delete;
    MySmartPointer& operator=(const MySmartPointer&) = delete;
};

int main() {
    cout << "----- Manual RAII Smart Pointer -----" << endl;
    {
        MySmartPointer smartPtr(new Resource());
        smartPtr->use();
    }

    cout << "\n----- unique_ptr -----" << endl;
    {
        unique_ptr<Resource> uniquePtr(new Resource());
        uniquePtr->use();

        cout << "Raw pointer available: "
             << (uniquePtr.get() != nullptr) << endl;

        uniquePtr.reset();
        cout << "After reset: " << (uniquePtr == nullptr) << endl;
    }

    cout << "\n----- shared_ptr -----" << endl;
    {
        shared_ptr<Resource> sharedPtr1(new Resource());
        shared_ptr<Resource> sharedPtr2 = sharedPtr1;
        weak_ptr<Resource> weakPtr = sharedPtr1;

        sharedPtr1->use();
        cout << "Shared Pointer Count: "
             << sharedPtr1.use_count() << endl;
        cout << "Weak Pointer Expired: "
             << weakPtr.expired() << endl;
    }

    cout << "\nProgram completed successfully." << endl;
    return 0;
}
