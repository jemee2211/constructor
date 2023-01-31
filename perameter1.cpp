//WAP to get and display N numbers of Diamond
//companies information using encapsulation and use of
//parameterised constructor by including below
//mentioned attributes:
//- comp_id
//- comp_name
//- comp_staff_quantity
//- comp_revenue (per year)
//- comp_import_raw_diamonds (no. of raw diamonds
//imported per year)
//- comp_export_diamonds (no. of diamonds per year)
//- comp_ceo (name of CEO of the company)

#include<iostream>
#include<string.h>
using namespace std;

class user{
	
	private:
		
    int	comp_id;
    char comp_name[50];
    int comp_staff_quantity;
    int comp_revenue;
    char comp_import_raw_diamonds[50]; 
    char comp_export_diamonds[50];
    char comp_ceo[50];

	
	public:
		
		
	diamond(int comp_id,char comp_name[],int comp_staff_quantity, int comp_revenue , char comp_import_raw_diamonds[], char comp_export_diamonds[] , char comp_ceo[]){
	
    this->comp_id=comp_id;
    strcpy(this->comp_name,comp_name);
    this->comp_staff_quantity=comp_staff_quantity;
    strcmp(this->comp_import_raw_diamonds,comp_import_raw_diamonds);
    this->comp_revenue=comp_revenue;
    strcmp(this->comp_export_diamonds,comp_export_diamonds);
	strcmp(this->comp_ceo,comp_ceo);
	
	cout<<"Enter Company id:";
	cin>>comp_id;
	
	cout<<"Enter Company Name:";
	cin>>comp_name;
	
	cout<<"Enter Company Staff Quantity:";
	cin>>comp_staff_quantity;
	
	cout<<"Enter Company Revenue:";
	cin>>comp_revenue;
	
	cout<<"Enter Company Import Raw Diamonds:";
	cin>>comp_import_raw_diamonds;
	
	cout<<"Enter Company Export Diamonds:";
	cin>>comp_export_diamonds;
	
	cout<<"Enter Company CEO:";
	cin>>comp_ceo;
	
	
	}	
	
	void setter();
		
		
};

void user::setter(){
	
	cout<<"Company id = "<<comp_id<<endl;
    cout<<"Company name = "<<comp_name<<endl;
	cout<<"Company Staff Quantity = "<<comp_staff_quantity<<endl;
	cout<<"Company Comp Revenue = "<<comp_revenue<<endl;
	cout<<"Company Import Raw Diamonds = "<<comp_import_raw_diamonds<<endl;
	cout<<"Company Export Diamonds = "<<comp_export_diamonds<<endl;
	cout<<"Company CEO = "<<comp_ceo<<endl;
}

main(){
	
	
   user o;
	
	int n;
	int i;
	cout<<"Enter value:";
	cin>>n;
	
	for(i=0; i<n ; i++){
	
    o.diamond();
	o.setter();
}
	
}
