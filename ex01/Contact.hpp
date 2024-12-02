/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:58:52 by alamini           #+#    #+#             */
/*   Updated: 2024/12/02 18:46:33 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

class Contact
{
    private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkestsecret;

    public:
    Contact();
    ~Contact();
    void set_contact(std::string firstname, std::string lastname, std::string nickname,
        std::string phonenumber, std::string darkestsecret);
    void get_single_contact(int index);
    void get_all_contacts(int num_of_contacts);    
};
void write_value(std::string field);
