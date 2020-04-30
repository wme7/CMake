#include <omp.h>
#include <iostream>

int main()
{
    // Report the number of threads you can use in this computer
    std::cout << "This PC can run with " << omp_get_max_threads() << " threads :D" << std::endl;
    
    // If everything is ok, then 
    return 0;
}
