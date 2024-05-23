#include <iostream>
#include "stack.h"

int main() {
    Stack st;


    st.push(6);
    st.push(60);
    st.push(40);

  
    std::cout << "Stack contents: ";
    st.show();

 
    std::cout << "Popped element: " << st.pop() << std::endl;

    std::cout << "Remaining Stack contents: ";
    st.show();


    st.push(100);
    st.push(200);


    std::cout << "Updated Stack contents: ";
    st.show();


    std::cout << "Final Stack contents: ";
    st.show();

    return 0;
}
