/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:48:46 by melperri          #+#    #+#             */
/*   Updated: 2022/04/06 13:09:41 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("Shrubbery", 145, 137) {
	std::cout << GREEN_IT << "Default ShrubberyCreationForm constructor called"
		<< END_COLOR << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("Shrubbery", 145, 137), _target(target) {
	std::cout << GREEN_IT << "Parametric ShrubberyCreationForm " << _target
		<< " constructor called" << END_COLOR << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form)
	: AForm(form), _target(form._target) {
	*this = form;
	std::cout << GREEN_IT << "Copy ShrubberyCreationForm constructor called"
		<< END_COLOR << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << GREEN_IT << "Destructor ShrubberyCreationForm called"
		<< END_COLOR << std::endl;
	return ;
}

std::string	ShrubberyCreationForm::getTarget() const {
	return _target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & /* form */) {
	std::cout << "Copy ShrubberyCreationForm assignement operator called"
		<< std::endl;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &form) {
	os << form.getName() << ", form sign is "
		<< form.getSign()
		<< ",\nsign grade is "
		<< form.getSignGrade()
		<< ",\nexecution grade is "
		<< form.getExecGrade() << ".";
	return os;
}

void	ShrubberyCreationForm::action() const {
	std::ofstream	out_file;
	std::string		file_name;

	file_name = this->getTarget().append("_shrubbery");
	out_file.open(file_name.c_str(), std::ofstream::out | std::ofstream::trunc);
	out_file << "                                           ..                  .:\n"
			<< "                                          .==.                .-=.\n"
			<< "                                        :-*@@+=:            :-+@@*=:\n"
			<< "                                         .=%#-               .-##-.\n"
			<< "                                           =:   ..         .   --\n"
			<< "                                           .     =:       :-    .\n"
			<< "                                                 .+       *\n"
			<< "                                                  #.     :#\n"
			<< "                                  :   .---        :%:   :%:       .---.  :\n"
			<< "                                  *       =.       -%=.+%:       :=      +:\n"                                  
			<< "                              .:-%@*-:.    ++-=.    :@@%:    .=-*+    .:*%=::\n"
			<< "                              .:-#%*:.     := ..     =@-     .. +:    .:+%-..\n"
			<< "                                 .*      :: +*+=:.   =@:   .:=+*+ :-     +:\n"
			<< "                                  :       +.   .-+*: =@: -*+-.   .+      .\n"
			<< "                                          +-      .*+=@-**.      :+\n"
			<< "                                 :-       =#-=-.    *@@%*    .-=-*=       ::\n"
			<< "                      .           .==      +%  =    .%@%.    =  #+      -+.           .\n"
			<< "                     :=             *-     =+    =+- =@+ -+-    +=     -*             +\n"
			<< "                    :*#-            :%.    %.   +-:=#=@##=:==    %    .%:           .*%=\n"
			<< "                  :=*@@*=-.     :+== =%*-  %=   --  :@@@.  -:   -%  -*%+=++:      :=+@@#=-.\n"
			<< "                    .-+.        +  :* .+*###%##*+.  *@#  .=**#%###*+.*:  +        .:*.\n"
			<< "                     .:    ...      #==.       .-#@+ =@# =@#-.       ==#      :-==-:  -\n"
			<< "                       -----=+#*.   *-.=  -=-     +@#*@%#@*    -=-  =:-#    -#+:.  .--\n"
			<< "                               -%-  +=.  .: -**=   :#@@@#:  =*#- ::  .-*   +%:\n"
			<< "                                :%*..#.      -%=:.   *@#  :-=##-:.    #: -#*.\n"
			<< "                                  =**%=++*%@@@@@@%*-+@*+%@@@%#*###*##**=:\n"
			<< "                                     .:-+**##*+===++%@@@*+===++##*+=:\n"
			<< "                           ::  =.    -**=:           *@#          .-+*=.    =: .:\n"
			<< "                          .#-=#*. .+*-       .=*%#+*@%=#%#+:      :=*:  -%+-+=\n"
			<< "                              .=+%@-       .***#:.=#@@@@%+: .%+*#:      .#@*+:\n"
			<< "                          .     +%#  ..   :%- :#.   :@@@.   :#. :%-   :  =%.\n"
			<< "                         ==  .-*= +*=+:   #=   .*.   #@@   :*    -%   +=+#::*=:  .#\n"
			<< "                          ==%+-           %     *-   *@%   -+     %.         :=#*=.\n"
			<< "                           =+.:          -%  +.::    *@@    .: *  #=         .:.%\n"
			<< "                           .*+*      =  -#=*=-       *@@.      -=+=#-  -.    =+*-\n"
			<< "                                     +**=.           #@@.           =*++.\n"
			<< "                                                     %@@:\n"
			<< "                                                     @@@:\n"
			<< "                                                    .@@@:\n"
			<< "                                                    :@@@-\n"
			<< "                                                    =@@@+\n"
			<< "                                                    +@@@#\n"
			<< "                                                    *@@@%\n"
			<< "                                                    *@@@%\n"
			<< "                                                    #@@@%\n"
			<< "                                                    #@@@@\n"
			<< "                                                    %@@@@.\n"
			<< "                                                    %@@@@-\n"
			<< "                                                    @@@@@=\n"
			<< "                                                   .@@@@@+\n"
			<< "                                                   :@@@@@*\n"
			<< "                                                   -@@@@@@.\n"
			<< "                                                   =@@@@@@=\n"
			<< "                                                  :@@@@@@@@.\n"
			<< "                                                 .%@@@@@@@@*\n"
			<< "                                                .#@@@@@@@@@@%-\n"
			<< "                                             .:+%@@@@@@@@@@@@@*.\n"
			<< "                                          .+%@@@@@@@@@@@@@@@@@@@%*===:\n"
			<< "                                       :=*%@@@@@@@@@@@@@@@@@@@@@@@@@@@#=:\n"
			<< "                                   -*%@#++@@%+=--%@+--#@@%:..+@@*#@@@%###%*.\n"
			<< "                                  *=..    @%.    +=    =@*   -%:  +@:    .*#:\n"
			<< "                                  .      +#.     .      -#=:  :    %.       .\n"
			<< "                                        :-                         .:" << std::endl;
	return ;
}
