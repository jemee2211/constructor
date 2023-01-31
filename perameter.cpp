#include<iostream>

using namespace std;
class cafe{
	
	private:
		
		int cafe_id;
		int cafe_staff_quantity;
		char cafe_name[50];
		char cafe_type[50];
		char cafe_rating[50];
		char cafe_location[50];
		char cafe_establish_year[50];
		
   public:
   	
   		    void setter();
			void getter();
			
};
void cafe::setter(){
	
	
				
			cout<<"Enter id:";
			cin>>cafe_id;
				
			cout<<"Enter staff quantity:";
			cin>>cafe_staff_quantity;
				
			cout<<"Enter name:";
			cin>>cafe_name;
			
			cout<<"Enter type:";
			cin>>cafe_type;
				
			cout<<"Enter rating:";
			cin>>cafe_rating;
				
			cout<<"Enter location:";
			cin>>cafe_location;
				
			cout<<"Enter establish year:";
			cin>>cafe_establish_year;
			
				
}
void cafe::getter(){
	
	cout<<cafe_id<<endl;
	cout<<cafe_staff_quantity<<endl;
	cout<<cafe_name<<endl;
	cout<<cafe_type<<endl;
	cout<<cafe_rating<<endl;
	cout<<cafe_location<<endl;
	cout<<cafe_establish_year<<endl;
	
}
main(){
	
	cafe obj;
	int n;
	int i;
	cout<<"Enter value:";
	cin>>n;
	
	for(i=0; i<n ; i++){
	
	    obj.setter();
		obj.getter();
	}
	
}
