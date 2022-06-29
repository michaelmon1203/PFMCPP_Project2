#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:

 int
 unsigned int
 float
 double 
 bool
 char

2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int myFingerAmount = 10;
    int myGearAmount = 56;
    int myMoneyAmount = -1000;
    unsigned int alphabetNumber = 26;
    unsigned int gearKnobAmount = 4;
    unsigned int midiKeyboardKeyAmount = 25;
    bool myGenderIsMale = true;
    bool didIPassedCodingReview = false;
    bool savedEnoughMoney4QuitingJob = false;
    float myHeight = 183.2f;
    float myWeight = 80.5f;
    float stratStringScale = 635.0f;
    double laptopWeightInKG = 1.35;
    double pieApproximate = 3.14;
    double mpcOneWeightInKG = 3.5;
    char myName = 'a';
    char mySamplerName = 's';
    char myLaptopName = 'm';
    
    ignoreUnused(number, myFingerAmount, myGearAmount, myMoneyAmount, alphabetNumber, gearKnobAmount, midiKeyboardKeyAmount, myGenderIsMale, didIPassedCodingReview, savedEnoughMoney4QuitingJob, myHeight, myWeight, stratStringScale, laptopWeightInKG, pieApproximate, mpcOneWeightInKG, myName, mySamplerName, myLaptopName); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool buyALaptop(int budget, int modelNumber = 1)
{ 
    ignoreUnused(budget, modelNumber); 
    return { };
}
/*
 2)
 */
int howMuchMoneyIOwn(int bankAcount = 30000, int payPal = 200, int cash = 300, int loan = 4000)
{ 
    ignoreUnused(bankAcount, payPal, cash, loan); 
    return { };
}
/*
 3)
 */
char myLongestRightFinger(float thumbLength = 5.1f, float indexLength = 6.0f, float middleLength = 6.5f, float ringLength = 5.8f, float littleLength = 5.0f)
{ 
    ignoreUnused(thumbLength, indexLength, middleLength, ringLength, littleLength); 
    return { };
}
/*
 4)
 */
char mostCheapTransport(int moneyLeft = 5, float priceForBike = 1.5f, int priceForBus = 1, int pirceForTaxi = 20)
{ 
    ignoreUnused(moneyLeft, priceForBike, priceForBus, pirceForTaxi); 
    return { };
}
/*
 5)
 */
int howMuchCanIGetSellingGears(int priceForOP1 = 1200, int priceForIpad = 300, int priceForMixer = 150)
{ 
    ignoreUnused(priceForOP1, priceForIpad, priceForMixer);
    return { };
}
/*
 6)
 */
float howMuchVolumeWaterLeft(float cup1 = 35.6f, float cup2 = 40.0f)
{ 
    ignoreUnused(cup1, cup2);
    return { };
}
/*
 7)
 */
bool canIPassMyBossReview(bool iDoFinishedWork = false, bool myBossReviewedIt = false)
{ 
    ignoreUnused(iDoFinishedWork, myBossReviewedIt); 
    return { };
}
/*
 8)
 */
int howManyStringsOnThisInstrument(bool isItClassicalGuitar = false, bool isItUkulele = false, bool isItAFenderElectronic = false)
{ 
    ignoreUnused(isItClassicalGuitar, isItUkulele, isItAFenderElectronic); 
    return { };
}
/*
 9)
 */
int howManyTracksDoesBandNeed(int drumset, bool haveGuitarist = false, bool haveBassist = false, bool haveVocalist = false)
{ 
    ignoreUnused(drumset, haveGuitarist, haveBassist, haveVocalist); 
    return { };
}
/*
 10)
 */
int howManyFollowersDoIHave(int youTubeSub = 1000, int instagramSub = 500)
{ 
    ignoreUnused(youTubeSub, instagramSub); 
    return { };
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto laptopBought = buyALaptop(1000, 2);
    //2)
    auto myWealth = howMuchMoneyIOwn(10000, 300, 32, -500);
    //3)
    auto whichFingerToUse = myLongestRightFinger (5.2f, 6.3f, 7.0f, 6.0f, 5.3f);
    //4)
    auto methodToGoHome = mostCheapTransport(2, 1.3f, 5, 20);
    //5)
    auto moneyBack = howMuchCanIGetSellingGears(1100, 200, 120);
    //6)
    auto drinkWater = howMuchVolumeWaterLeft(12.6f, 40.1f);
    //7)
    auto nailTheJob = canIPassMyBossReview(false, false);
    //8)
    auto stringsINeedtoBuy = howManyStringsOnThisInstrument(false, false, true);
    //9)
    auto mixerChannelRequirement = howManyTracksDoesBandNeed(3, true, false, true);
    //10)
    auto myInfluence = howManyFollowersDoIHave(800,34);
    
    ignoreUnused(carRented, laptopBought, myWealth, whichFingerToUse, methodToGoHome, moneyBack, drinkWater, nailTheJob, stringsINeedtoBuy, mixerChannelRequirement, myInfluence);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
