/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Rewrite the final Time class example (Listings 11.10, 11.11, and  */
/* 11.12) so that all the overloaded operators are implemented using */
/* friend functions.                                                 */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "04.time.h"

int main()
{
    Time aida(3, 35);
    Time tosca(2, 48);
    std::cout << "Aida and Tosca:\n";
    std::cout << aida <<"; " << tosca << std::endl;
    std::cout << "Aida + Tosca: " << aida + tosca << std::endl;
    std::cout << "Aida * 1.17: " << aida * 1.17 << std::endl;
    std::cout << "10.0 * Tosca: " << 10.0 * tosca << std::endl;
    return 0;
}

