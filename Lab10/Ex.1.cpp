#include <iostream>

int main() {
    // Вартість розмов для кожного населеного пункту у копійках за хвилину
    double c1, c2, c3;
    std::cout << "Enter the cost of the call for the first settlement (kopecks/min): ";
    std::cin >> c1;
    std::cout << "Enter the cost of the call for the second settlement (kopecks/min): ";
    std::cin >> c2;
    std::cout << "Enter the cost of the call for the third settlement (kopecks/min): ";
    std::cin >> c3;

    // Тривалість розмов для кожного населеного пункту в хвилинах
    int t1, t2, t3;
    std::cout << "Enter the duration of the conversation for the first settlement (min): ";
    std::cin >> t1;
    std::cout << "Enter the duration of the conversation for the second settlement (min): ";
    std::cin >> t2;
    std::cout << "Enter the duration of the conversation for the third settlement (min): ";
    std::cin >> t3;

    // Розрахунок вартості кожної розмови та загальної вартості
    double cost1 = c1 * t1;
    double cost2 = c2 * t2;
    double cost3 = c3 * t3;
    double total_cost = cost1 + cost2 + cost3;

    // Виведення результату
    std::cout << "The cost of a call for the first settlement: " << cost1 << " kopecks" << std::endl;
    std::cout << "The cost of a call for the second settlement: " << cost2 << " kopecks" << std::endl;
    std::cout << "The cost of a call for the third settlement: " << cost3 << " kopecks" << std::endl;
    std::cout << "Total cost of calls: " << total_cost << " kopecks" << std::endl;

    // Початкова ціна товару
    double initial_price;
    std::cout << "Enter the original price of the product: ";
    std::cin >> initial_price;

    // Знижка на товар у відсотках
    double discount_percentage;
    std::cout << "Enter the amount of the product discount (%): ";
    std::cin >> discount_percentage;

    // Розрахунок ціни товару після знижки
    double discounted_price = initial_price * (1 - discount_percentage / 100);

    // Підвищення ціни товару на відсоток
    double increase_percentage;
    std::cout << "Enter the amount of the product price increase (%): ";
    std::cin >> increase_percentage;

    // Розрахунок кінцевої ціни товару після знижки та підвищення
    double final_price = discounted_price * (1 + increase_percentage / 100);

    // Виведення результату
    std::cout << "The final price of the product: " << final_price << std::endl;

    return 0;
}