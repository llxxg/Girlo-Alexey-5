#include <iostream>

int main()
{
	int switch_on = 0;
	setlocale(LC_ALL, "Ru-ru");

	std::cout << "Введите метод вычисления:" << std::endl;
	std::cout << "1. 5.1.1 Низкий" << std::endl;
	std::cout << "2. 5.1.2 Средний" << std::endl;
	std::cout << "3. 5.1.3 Высокий" << std::endl;
	std::cout << "4. 5.2.1 Низкий" << std::endl;
	std::cout << "5. 5.2.2 Средний" << std::endl;
	std::cout << "6. 5.2.3 Высокий" << std::endl;

	std::cout << std::endl;

	std::cout << "Вы выбрали: ";
	
	std::cin >> switch_on;

	std::cout << std::endl;


	switch (switch_on)
	{
	case 1: {
		std::cout << "5.1.1 (Низкий) L = 1,51cosx^2+2x^3" << std::endl;

		double X;

		std::cout << std::endl;

		std::cout << "Введите x: ";
		std::cin >> X;

		long double L = 1.51 * cos(pow(X, 2)) + 2 * pow(X, 3);
		std::cout << "L = " << L << std::endl;
	}
		  break;

	case 2: {
		std::cout << "5.1.2 (Средний) D = (7,8a^2+3,52t)/(ln(a+2y)+e^y)" << std::endl;

		double A, T, E, Y;

		std::cout << std::endl;

		std::cout << "Введите a: ";
		std::cin >> A;
		std::cout << "Введите t: ";
		std::cin >> T;
		std::cout << "Введите y: ";
		std::cin >> Y;
		std::cout << "Введите e: ";
		std::cin >> E;

		std::cout << std::endl;

		long double D = (7.8 * pow(A, 2) + 3.52 * T) / (log(A + 2 * Y) + pow(E, Y));
		long double D1 = (7.8 * pow(A, 2) + 3.52 * T);
		long double D2 = (log(A + 2 * Y) + pow(E, Y));

		std::cout << "1 = " << D1 << std::endl;
		std::cout << "2 = " << D2 << std::endl;
		std::cout << "D = " << D << std::endl;
	}
		  break;

	case 3: {
		std::cout << "5.1.3 (Высокий) G = tg(x^4 - 6) - cos^3(z + xy) / cos^4 x^3 c^2" << std::endl;

		double X, Z, Y, C;

		std::cout << std::endl;

		std::cout << "Введите x: ";
		std::cin >> X;
		std::cout << "Введите z: ";
		std::cin >> Z;
		std::cout << "Введите y: ";
		std::cin >> Y;
		std::cout << "Введите c: ";
		std::cin >> C;

		std::cout << std::endl;

		long double G1 = (tan(pow(X, 4) - 6) - (pow(cos(Z + X * Y), 3)));
		long double G2 = (pow(cos(pow(X, 3) * pow(C, 2)), 4));
		long double G = (tan(pow(X, 4) - 6) - (pow(cos(Z + X * Y), 3))) / (pow(cos(pow(X, 3) * pow(C, 2)), 4));

		std::cout << "1 = " << G1 << std::endl;
		std::cout << "2 = " << G2 << std::endl;
		std::cout << "G = " << G << std::endl;
	}
		  break;

	case 4: {
		std::cout << "5.2.1 (Низкий) Решить площадь трапеции по заданной формуле: S = (1/2)*(a+b)*H" << std::endl;
		
		double A, B, H;
		
		std::cout << std::endl;
		
		std::cout << "Введите a: ";
		std::cin >> A;
		std::cout << "Введите b: ";
		std::cin >> B;
		std::cout << "Введите H: ";
		std::cin >> H;
		
		std::cout << std::endl;
		
		long double S = 0.5 * (A + B) * H;
		std::cout << "S = " << S << std::endl;
	}
		  break;

	case 5: {
		std::cout << "5.2.2 (Средний)" << std::endl;

		double T = 4.1;
		double P = 3;
		
		std::cout << std::endl;
		std::cout << "t = 4.1" << std::endl;
		std::cout << "p = 3" << std::endl;

		std::cout << std::endl;

		std::cout << "k = sqrt(pt)" << std::endl;
		long double K = sqrt(T * P);
		std::cout << "k = " << K << std::endl;

		std::cout << std::endl;
		std::cout << "x = pt^2 + sqrt(k)" << std::endl;
		long double X = pow(P * T, 2) + sqrt(K);
		std::cout << "x = " << X << std::endl;

		std::cout << std::endl;
		std::cout << "y = tg^3x^2 + kt" << std::endl;
		long double Y = pow(tan(pow(X, 3)), 3) + K * T;
		std::cout << "y = " << Y << std::endl;
	}
		  break;

	case 6: {
		std::cout << "5.2.3 (Высокий)" << std::endl;

		double X;
		double summation = 0;
		
		std::cout << std::endl;

		std::cout << "Введите x: ";
		std::cin >> X;
		
		double answer = cos(X) * ((cos(3 * X) / 9));

		std::cout << std::endl;
		
		while (fabs(answer) <+ 5)
		{
			summation += answer;
			answer += cos(X) * ((cos(3 * X) / 9));
			std::cout << " Ответ = " << answer << std::endl;
		}
	}
		  break;

	default:
		std::cout << "!!!!!" << std::endl;
		break;
	}
}

