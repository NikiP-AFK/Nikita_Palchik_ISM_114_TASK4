#pragma once
#include <iostream>

/**
* \brief Класс Trig для работы с переменной, передаваемой функции
*/
class trig
{
protected:
	double a;
public:

	/**
	 * \brief Конструктор по умолчанию
	 */
	trig() = default;

	/**
	 * \brief Параметризованный конструктор
	 */
	trig(const double a);

	/**
	 * \brief Деструктор
	 */
	virtual ~trig() = default;

	/**
	 * \brief Получение значения переменной
	 */
	double get_a() const;

	/**
	 * \brief сеттер значения переменной
	 */
	void set_a(const double a);

};

/**
* \brief Класс Trigonometry для вычисления значений и производных
*/
class trigonometry :public trig
{
protected:

	/**
	* \brief Получение значения переменной
	*/
	double get_num(const double a) const;

private:
	void set_sin();
	void set_cos();
	void set_tg();
	void set_der_sin();
	void set_der_cos();
	void set_der_tg();
	double sin;
	double cos;
	double tg;
	double der_sin;
	double der_cos;
	double der_tg;

public:

	/**
	* \brief конструктор по умолчанию
	*/
	trigonometry() = default;

	/**
	* \brief параметризованный конструктор
	*/
	trigonometry(const double a);

	/**
	* \brief Деструктор
	*/
	~trigonometry() = default;

	/**
	* \brief Получение значения переменной
	*/
	double get_a() const;

	/**
	 * \brief Задаем значение переменной
	 */
	void set_a(const double a);

	/**
	* \brief Получение значения sin
	*/
	double get_sin() const;

	/**
	* \brief Получение значения cos
	*/
	double get_cos() const;

	/**
	* \brief Получение значения tg
	*/
	double get_tg() const;

	/**
	* \brief Получение значения sin'
	*/
	double get_der_sin() const;

	/**
	* \brief Получение значения cos'
	*/
	double get_der_cos() const;
	
	/**
	* \brief Получение значения tg'
	*/
	double get_der_tg() const;

	
    // перегружаем операторы ввода и вывода для упрожения ввода от пользователя и вывода на экран
	/**
	 * \brief Перегруженный оператор ввода
	 */
	friend std::istream& operator>> (std::istream& in, trigonometry& f);

	/**
	* \brief Перегруженный оператор вывода
	*/
	friend std::ostream& operator<< (std::ostream& out, const trigonometry& f);

	/**
     * @brief Метод для корректного вывода ответа
     */
};