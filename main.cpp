#include "src/SimpleClass.h"
#include <memory>

int main()
{
    std::unique_ptr<SimpleClass> p_SimpleClassObject(new SimpleClass);
    p_SimpleClassObject->ShowMessage("Hello, World!");
    return 0;
}