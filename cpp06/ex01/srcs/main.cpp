/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:15:32 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/09 11:44:52 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data *mydata = new Data();
	Data *deserialized_data;
	uintptr_t serialized_data;
	
	mydata->_int = 42;
	mydata->_string = "vsedat";
	std::cout << mydata->_int << std::endl;
	std::cout << mydata->_string << std::endl;
	std::cout << mydata << std::endl;
	
	serialized_data = serialize(mydata);

	deserialized_data = deserialize(serialized_data);
	std::cout << deserialized_data->_int << std::endl;
	std::cout << deserialized_data->_string << std::endl;
	std::cout << deserialized_data << std::endl;
	delete mydata;
	return (1);
}





//	Data *student = new Data();
//	Data *deserialize_data;
//	uintptr_t serialized_data;
//
//	std::cout << V_CYAN << std::endl;
//	std::cout << "----- Original data: -----" << std::endl;
//	define_data(student);
//	print_data(student);
//
//	std::cout << V_ORANGE << std::endl;
//	std::cout << "--- After serialization: ---" << std::endl;
//	serialized_data = serialize(student);
//	std::cout << serialized_data << std::endl;
//
//	std::cout << V_GREEN << std::endl;
//	std::cout << "-- After deserialization: --" << std::endl;
//	deserialize_data = deserialize(serialized_data);
//	print_data(deserialize_data);
//	delete student;
//}
