#include <stdio.h>

	extern int extern_Var;
	void auto_fun(){
		auto int auto_Var=20;
		auto_Var++;
		printf("auto_fun:%d\n", auto_Var);
	}



	void static_fun(){
		static int static_Var=30;
		static_Var++;
		printf("static_fun:%d\n", static_Var);
	}


	void reg_fun(){
		register int reg_Var=40;
		reg_Var++;
		printf("reg_fun:%d\n", reg_Var);
	}

	void extern_fun1(){
		extern_Var+=5;
	}

	int main(){
		printf("extern_fun:%d\n", extern_Var);
		extern_fun1();
		printf("extern_fun1:%d\n", extern_Var);
		

		auto_fun();


		static_fun();
		static_fun();


		reg_fun();

		return 0;
	}


