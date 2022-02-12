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
 
 1. void
 2. int
 3. float
 4. double
 5. char
 6. bool

 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

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
    int age = 40;
    int heightInCm = 188;
    int numberOfChildren = 1;
    float pi = 3.14159f;
    float e = 2.71826f;
    float root2 = 1.41421f;
    double carMilage = 1334.56;
    double carValue = 16735.78;
    double carEngineCapacity = 2238.10;
    char firstInitial = 'j';
    char middleInitial = 'm';
    char lastInitial = 'h';
    bool married = false;
    bool happy = true;
    bool hungry = true;

    ignoreUnused(number, age, heightInCm, numberOfChildren, pi, e, root2, carMilage, carValue, carEngineCapacity, firstInitial, middleInitial, lastInitial, married, happy, hungry); //passing each variable declared to the ignoreUnused() function
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
float marathonFinishTime(int numberOfTrianingSessions, float numberOfTrainingMiles = 523.87f, bool newRunningShoes = true)
{
    ignoreUnused(numberOfTrianingSessions, numberOfTrainingMiles, newRunningShoes);
    return {};
}
/*
 2)
 */
bool married(bool havePartner, float yearsTogether, bool proposed = true, double venueCost = 5555.55)
{
    ignoreUnused(havePartner, yearsTogether, proposed, venueCost);
    return {};
}
/*
 3)
 */
double schoolPerformance(int students, float averageGrade, int teachers = 51, bool sportsProgramme = true)
{
    ignoreUnused(students, averageGrade, teachers, sportsProgramme);
    return {};
}
/*
 4)
 */
float restaurantBillShare(int numberOfDiners =12, float foodCost = 1234.56f, float drinkCost = 569.99f, bool serviceGood = false, char country = 'e', double acceptableTip = 0.075)
{
    ignoreUnused(numberOfDiners, foodCost, drinkCost, serviceGood, country, acceptableTip);
    return {};
}
/*
 5)
 */
double stressLevel(bool doSport = false, int numberOfChildren = 5, bool didSchoolRun = true, double income = 45678.23, bool happyWithJob = false, int numberOfFriends = 4)
{
    ignoreUnused(doSport, numberOfChildren, didSchoolRun, income, happyWithJob, numberOfFriends);
    return {};
}
/*
 6)
 */
bool buySecondHandCar(int numberOfSeats, char colour, float engineSize, char manufacturer = 'b', double milage = 123456.78, bool acceptTradeIn = false)
{
    ignoreUnused(numberOfSeats, colour, engineSize, manufacturer, milage, acceptTradeIn);
    return {};
}
/*
 7)
 */
bool winFishingCompetition(int fishCaught, float totalWeightCaught, bool biggestCatchOfTheDay = true, float hoursFishing = 13.78f)
{
    ignoreUnused(fishCaught, totalWeightCaught, biggestCatchOfTheDay, hoursFishing);
    return {};
}
/*
 8)
 */
void babyBedTime(float timeInbath, bool pyjamasOn = true, int numberOfStoires = 3, bool nightLightOn = true)
{
    ignoreUnused(timeInbath, pyjamasOn, numberOfStoires, nightLightOn);
}
/*
 9)
 */
bool makeFishAndChips(float fishWeight, int numberOfChips = 30, bool salt = true, float vinegarInMl = 20.5f, bool mushyPeas = true)
{
    ignoreUnused(fishWeight, numberOfChips, salt, vinegarInMl, mushyPeas);
    return {};
}
/*
 10)
 */
float jewelleryValue(int numberOfRing = 5, int numberOfNecklaces = 3, int numberOfBraclets = 1, bool gold = true, bool silver = false, float totalWeightRings = 34.56f, float totalWeightNecklaces = 11.11f, float totalWeightBraclets = 9.87f)
{
    ignoreUnused(numberOfRing, numberOfNecklaces, numberOfBraclets, gold, silver, totalWeightRings, totalWeightNecklaces, totalWeightBraclets);
    return {};
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
    auto poistionAfterRace = marathonFinishTime(56, 678.91f, true);
    //2)
    auto ballAndChain = married(true, 5.7f, true, 8967.78);
    //3)
    auto schoolLeaugueTablePosition = schoolPerformance(1103, 3.67f, 66, false);
    //4)
    auto myShareOfFoodBill = restaurantBillShare(8, 555.55f, 890.76f, true, 'i', 0.125);
    //5)
    auto heartAttackRisk = stressLevel(true, 1, false, 98789.76, true, 35);
    //6)
    auto buyCar = buySecondHandCar(4, 'r', 2222.22f, 'm', 5678.78, true);
    //7)
    auto braggingRights = winFishingCompetition(22, 67.89f, true, 8.96f);
    //8)
    babyBedTime(10.3f, false, 2, false);
    //9)
    auto succesfulFridayNight = makeFishAndChips(200.45f, 40, true, 10.3f, true);
    //10)
    auto insuranceValue = jewelleryValue(3, 6, 2, false, true, 22.45f, 10.43f, 8.12f);
    
    ignoreUnused(carRented, poistionAfterRace, ballAndChain, schoolLeaugueTablePosition, myShareOfFoodBill, heartAttackRisk, buyCar, braggingRights, babyBedTime, succesfulFridayNight, insuranceValue);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
