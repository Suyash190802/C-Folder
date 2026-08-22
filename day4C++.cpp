#include <iostream>

class IntContainer
{
    int data[50];
    int count;

public:
    IntContainer()
    {
        count = 0;
    }

    void add(int value)
    {
        data[count++] = value;
    }

    int size()
    {
        return count;
    }

    int* begin()
    {
        return data;
    }

    int* end()
    {
        return data + count;
    }
};

int main()
{
    IntContainer i;

    i.add(10);
    i.add(20);
    i.add(30);
    i.add(40);
    i.add(50);
    i.add(60);

    for (int *t = i.begin(); t != i.end(); t++)
    {
        std::cout << *t << " ";
    }

    return 0;
}










/* #include <iostream>
#include <string>

class Memento
{
public:
    std::string song;

    Memento(std::string s) : song(s) {}
};

class MusicPlayer
{
    std::string Currentsong;

public:
    void play(std::string s)
    {
        Currentsong = s;
    }

    std::string getCurrentSong()
    {
        return Currentsong;
    }

    Memento save()
    {
        return Memento(Currentsong);
    }

    void restore(Memento m)
    {
        Currentsong = m.song;
    }
};

int main()
{
    MusicPlayer m;

    m.play("Qawali");

    Memento saved = m.save();

    m.play("Qawali by nusrat saheb");

    std::cout << m.getCurrentSong() << std::endl;

    m.restore(saved);

    std::cout << m.getCurrentSong();

    return 0;
}
 */







/* #include <iostream>
#include <vector>

class WeatherStation
{
    std::vector<void (*)(int)> observers;
    int temperature;

public:
    void attach(void (*obs)(int))
    {
        observers.push_back(obs);
    }

    void setTemperature(int newTemp)
    {
        temperature = newTemp;

        for (int i = 0; i < observers.size(); i++)
            observers[i](newTemp);
    }
};

void display(int temp)
{
    int t = (temp - 32) * 5 / 9;
    std::cout << t << std::endl;
}

void displayAlert(int temp)
{
    if (temp > 40)
        std::cout << "High temperature warning!" << std::endl;
}

int main()
{
    WeatherStation w;

    w.attach(display);
    w.attach(displayAlert);

    w.setTemperature(53);

    return 0;
} */
/* #include <iostream>
#include <vector>
int main()
{
    std::vector<int> i;
    i.push_back(45);
    i.push_back(78);
    i.push_back(92);
    i.push_back(60);
    std::cout << "Size: "<<i.size()<< std::endl;
    i.at(1)=85;
    i.pop_back();
    i.clear();
    std::cout << "Empty: "<<i.empty()<< std::endl;
    return 0;
} */
/* #include<iostream>
void processMarks(int arr[] , int size, bool(*callback)(int))
{
  for(int i=0;i<size;i++)
  {
        if (callback(arr[i]))
        {
            std::cout<<arr[i]<<" "<<std::endl;
        }
  }
}
  bool isPass(int marks)
    {
       return marks>=40;
    }
   bool isDistinction(int marks)
   {
    
       return marks>=80;
   }
int main()
{
  int arrMarks[5]={40,41,53,87,89};
   std::cout<<"ispass marks"<<std::endl;
  processMarks(arrMarks,5,isPass);
  std::cout<<"isDistinction marks"<<std::endl;
  processMarks(arrMarks,5,isDistinction);
  return 0;
} */
/* #include <iostream>
int compare(int a,int b)
{
    if(a>b)
      return a;
    else
      return b;
}
int difference(int a,int b)
{
    return a-b;
}
int main()
{
    int(*op)(int, int);
    op=compare;
    std::cout<< "Greater marks: " <<op(45, 87)<<std::endl;
    op=difference;
    std::cout<< "Difference: " <<op(45, 87)<<std::endl;
    return 0;
} */
/* #include<iostream>
#include<string>
class Student
{
  public:  
        std::string name;
        int* const marks;
    Student(std::string n, int m)
        : name(n), marks(new int(m))
    {     
    }
    Student(const Student& s)
          : name(s.name) , marks(new int(*(s.marks)))
    {
    }
    ~Student()
    {
        delete marks;
        std::cout <<"Memory deleted for "<<name<<std::endl;
    }
    void display()
    {
         std::cout<<"Name of student:"<<name<<std::endl;
         std::cout<<"Marks of student:"<<*marks<<std::endl;
    }
};
int main()
{ 
    Student s1("Suyash", 85);
    Student s2 = s1;
    std::cout<< "Before modification:" <<std::endl;
    s1.display();
    s2.display();
    *s2.marks = 95;
    std::cout<< "After modifying copied student's marks:" <<std::endl;
    s1.display();
    s2.display();
    return 0;
} */