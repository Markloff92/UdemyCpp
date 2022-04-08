#include <iostream>
#include <queue>

// Queue FIFO Prinzip (first-in, first-out)

void correct_exam(std::queue<int> &queue)
{
    while (queue.size() > 0)
    {
        std::cout << "Done with student: " << queue.front() << std::endl;
        queue.pop(); // hier loescht man von unten oder linksseitig, wenn man sich bildlich anstell an schlange
    }
}

int main()
{
    std::queue<int> my_queue;

    my_queue.push(1080131311); // wert hinzufuegen aber rechtsseitig
    my_queue.push(1080131312);
    my_queue.push(1080131313);

    correct_exam(my_queue);

    return 0;
}
