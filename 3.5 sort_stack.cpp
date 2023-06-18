#include <bits/stdc++.h> 
void sortStack(stack<int> &a)
{
	// Write your code here
	stack<int> b;

	while(!a.empty())
	{
		if(b.empty())
		{
			b.push(a.top());
			a.pop();
		}
		else if(a.top()<b.top())
		{
			int x = a.top(),n=0;
			a.pop();
			while(!b.empty() and b.top()> x)
			{
				a.push(b.top());
				b.pop();
				n++;
			}
			b.push(x);
			for(int i=0;i<n;i++)
			{
				b.push(a.top());
				a.pop();
			}
		}
		else{
			b.push(a.top());
			a.pop();
		}
	}

	a = b;
	
}
