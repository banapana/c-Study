#include <iostream>

using namespace std;

class Car
{
private:
	int gasolineGauge;

public:
	Car(int _gasolineGauge)
		:gasolineGauge(_gasolineGauge)
	{

	}

	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car
{
private:
	int electricGauge;

public:
	HybridCar(int _gasolineGauge, int _electricGauge)
		:Car(_gasolineGauge), electricGauge(_electricGauge)
	{

	}

	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;

public:
	HybridWaterCar(int _gasolineGauge, int _electricGauge, int _waterGauge)
		:HybridCar(_gasolineGauge, _electricGauge), waterGauge(_waterGauge)
	{

	}

	void ShowCurrentGauge()
	{
		cout << "�ܿ� ���ָ�: " << GetGasGauge() << endl;
		cout << "�ܿ� ���ⷮ: " << GetElecGauge() << endl;
		cout << "�ܿ� ���ͷ�: " << waterGauge << endl;
	}
};

void main()
{
	HybridWaterCar hybridWaterCar(1, 2, 3);
	hybridWaterCar.ShowCurrentGauge();
}