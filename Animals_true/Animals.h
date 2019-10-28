#ifndef ANIMALS_H_INCLUDED
#define ANIMALS_H_INCLUDED

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


struct Animal
{
    virtual void feed(Food* food) = 0;
    virtual void walk() = 0;
    virtual void wash() = 0;

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

struct Dog:Animal
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
enum Animals{Cat, Dog};

Animal* Create_animals(Animals type)
{
    switch(type)
    {
        case(Animals::Cat)
        {
            return new Cat();
        }
        case(Animals::Dog)
        {
            return new Dog();
        }
    }
}

class Predicate
{
    virtual bool test(int v) = 0;
};
class is_even: Predicate
{
    bool test(int v)override
    {
        return v % 2 == 0;
    }
};
bool all_of(int* first, int* last, Predicate* p)
{
    for(;first != last; ++first)
    {
        if(!p->test(*first))
        {
            return;
        }
    }
}
#endif // ANIMALS_H_INCLUDED
