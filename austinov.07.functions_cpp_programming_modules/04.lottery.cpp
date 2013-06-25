/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/*     Many state lotteries use a variation of the simple lottery    */
/* portrayed by Listing7.4. In these variations you choose several   */
/* numbers from one set and call them the field numbers.             */
/* For example, you might select five numbers from the field of 1–47 */
/* You also pick a single number (called a meganumber or a powerball */
/* from a second range, such as 1 – 27. To win the grand prize, you  */
/* have to guess all the picks correctly. The chance of winning is   */
/* the product of the probability of picking all the field numbers   */
/* times the probability of picking the meganumber. For instance,    */
/* the probability of winning the example described here is the      */
/* product of the probability of picking 5 out of 47 correctly times */
/* the probability of picking 1 out of 27 correctly. Modify Listing  */
/* 7.4 to calculate the probability of winning this kind of lottery. */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>
# include <array>

const unsigned NUM47 = 47;
const unsigned NUM27 = 27;
const unsigned PCKS5 = 5;
const unsigned PICK1 = 1;

long double prob(unsigned, unsigned);
long double prob(unsigned n, unsigned p)
{
    long double result = 1.0;
    for (; p > 0; n--, p--)
        result = result * p / n ;
    return result;
}

int main()
{
    std::cout << "The probability of winnig for " << PCKS5
              << " out of " << NUM47 << " plus " << PICK1
              << " out of " << NUM27 << " is "
              << prob(NUM47, PCKS5) * prob(NUM27, PICK1)
              << "." << std::endl;
    return 0;
}

