#include <iostream>
#include <memory>
struct Task
{
    int mId;
    Task(int id ) :mId(id)
    {
        std::cout<<"Task::Constructor"<<std::endl;
    }
    ~Task()
    {
        std::cout<<"Task::Destructor"<<std::endl;
    }
};
int main()
{
    // Create a unique_ptr object through raw pointer
    std::unique_ptr<Task> taskPtr(new Task(23));
    //Access the element through unique_ptr
    int id = taskPtr->mId;
    std::cout<<id<<std::endl;
    return 0;
}
