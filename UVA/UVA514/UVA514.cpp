
#include <stack>
#include <iostream>

int main()
{
	int _size, _tren[1000]; 
	while (true) 
	{
		std::cin >> _size;

		if (_size == 0) { break; }

		while (true)
		{
			std::cin >> _tren[0];
			if (_tren[0] == 0) 
			{
				std::cout << std::endl;
				break;
			}
			for (int cont = 1; cont < _size; cont++) {
				std::cin >> _tren[cont];
			}
			int vagon = 1, pos_vagon = 0;
			std::stack<int> estacion;
			while (vagon <= _size)
			{
				estacion.push(vagon);

				while (!estacion.empty() && estacion.top() == _tren[pos_vagon])
				{
					estacion.pop();
					pos_vagon++;
					if (pos_vagon >= _size) { break; }
				}
				vagon++;

			} 
			if (estacion.empty()) { std::cout << "Yes" << std::endl; }
			else { std::cout << "No" << std::endl; }
		}
	}
	return 0;
}