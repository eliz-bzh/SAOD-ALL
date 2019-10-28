#ifndef INTEGER_H_INCLUDED
#define INTEGER_H_INCLUDED

struct SqlDatabaze
{
    void connectDatabase();
};

struct mySqlConnection
{
    void connectDatabase();
};

struct Connection
{
    bool open()
    {

    }
};

struct Animal
{
    virtual void feed(Food* food) = 0;
    virtual void walk() = 0;
    void wash() = 0;

};

struct Cat:Animal
{
    int health;
    int happiness;
    int clean;
    void feed(Food* food)override
    {
        health += food.get_calories();
        happiness += food.get_calories();
    }
    void wash()override
    {
        clean += 10;
        happiness += 20;
    }
    void walk()override
    {
        happiness += 150;
    }
};

struct Food
{
    virtual int get_calories() = 0;
};

struct Fish:Food
{
    int calories;
    int get_calories()
    {
        return calories;
    }
};





#endif // INTEGER_H_INCLUDED
