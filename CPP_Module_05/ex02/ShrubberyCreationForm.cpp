/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:48:46 by melperri          #+#    #+#             */
/*   Updated: 2022/03/18 04:48:46 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {
	std::cout << GREEN_IT << "Default ShrubberyCreationForm constructor called"
		<< END_COLOR << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: _target(target) {
	std::cout << GREEN_IT << "Parametric ShrubberyCreationForm " << _target
		<< " constructor called" << END_COLOR << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) {
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

std::string	ShrubberyCreationForm::getTarget() {
	return _target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form) {
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
/*
void	asdf(void) {
	std:: cout << "                                           ..                  .:\n"
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
*/
