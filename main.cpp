#include <iostream>
#include <queue>

class MyStack {
private:
std::queue<int> stack_q;
public:
    void push(int x) {
		int size;
		int top;

		stack_q.push(x);
		size = stack_q.size();
		while (size > 1)
		{
			top = stack_q.front();
			stack_q.pop();
			stack_q.push(top);
			size--;
		}
	}
    
    int pop() {
        int top;

		top = stack_q.front();
		stack_q.pop();
		return (top);
    }
    
    int top() {
        return (stack_q.front());
    }
    
    bool empty() {
        return (stack_q.empty());
    }
};

int main()
{
	int ii;
	MyStack s;

	s.push(4);
	s.push(7);
	printf("\n%i %i\n",s.top(),s.top());
	printf("\n%i %i\n",s.pop(),s.pop());
	return (1);
}