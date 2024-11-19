#include<iostream>
using namespace std;
int main() {
  int trip_fare,base_fare,wait_time,journey_time,distance,pms,pkms,time_enter;
  int disc_perc,surcharge_rate,disc_amount,surchrg_amount;
  char surcharge,promo,yes='y',no='n';
  int v_choice;
  bool v_type;
  cout<<"Enter Vehicle type: 1 for Car and 2 for Bike: ";cin>>v_choice;
  v_type=(v_choice == 1);
  switch(v_type){
  	case 1:
	  cout<<"Vehicle type: Car"<<endl;
	  break;
	default:
	  cout <<"Vehicle type: Bike"<<endl;
    }
  
 /* if(v_type) {
        cout<<"Vehicle type: Car"<<endl;
  } 
  else {
        cout <<"Vehicle type: Bike"<<endl;
  }
  */
  cout<<"Enter BASE fare: ";cin>>base_fare;
  cout<<"Enter your Journey time in Minutes: ";cin>>journey_time;
  cout<<"Enter distance traveled in Kilometers (KM): ";cin>>distance;
  cout<<"Enter Waiting time: ";cin>>wait_time;
  cout<<"Enter Promo code if available: "<<endl<<"y for YES and n for NO.";cin>>promo;
  cout<<"Enter per minute charges: ";cin>>pms;
  cout<<"Enter per kilometer charges: ";cin>>pkms;
  cout<<"Enter discount percentage if Promo code is applied: ";cin>>disc_perc;
  cout<<"Surcharge determination for peaked hours:"<<endl<<"y for YES, and, n fo NO:";cin>>surcharge;
  cout<<"Enter Surcharge Rate during peak hours: ";cin>>surcharge_rate;
  
 // cout<<"Enter the time from (1 to 24) , You entered the cab:";cin>>time_enter;
  
  // if(time_enter>=7 && time_enter<=9 || time_enter>=12 && time_enter<=14 || time_enter>=17 && time_enter<=19)
   trip_fare=(base_fare+(journey_time*pms)+(distance*pkms));
   surchrg_amount=0;
   disc_amount=0;
   
  if(surcharge=='y'|| surcharge=='Y' ){
  	surchrg_amount=(trip_fare*surcharge_rate)/100;
  	cout<<"SURCHARGE Amount is: "<<surchrg_amount<<endl;
  }
  if(promo=='y'|| promo=='Y' ){
  	disc_amount=(trip_fare*disc_perc)/100;
	cout<<"Discount Amount: "<<disc_amount<<endl;	
  }
  trip_fare=(base_fare+(journey_time*pms)+(distance*pkms))+surchrg_amount-disc_amount;//or tripfare=tripfare+surcharge-discamount
  if(wait_time>3) { 
  	trip_fare=trip_fare+50;
  	cout<<"Waiting Penalty: 50"<<endl;
  }
  else{
  	trip_fare=trip_fare+0;
  } 
  if (v_type==1) {
  	trip_fare=3*trip_fare;
    cout<<"Trip fare is: "<<trip_fare<<endl;
  } 
  else if(v_type!=1) {
  	cout<<"Trip fare is: "<<trip_fare<<endl;
  }
  cout<<"Distance Charges: "<<distance*pkms<<endl;
  cout<<"Time Charges: "<<journey_time*pms<<endl;
 // cout<<"Surcharge Amount: "<<surchrg_amount<<endl;
 // cout<<"Discount Amount: "<<disc_amount<<endl;
  cout<<"Driver Share: "<<trip_fare*0.70<<endl;
  cout<<"Company's Share: "<<trip_fare*0.20<<endl;
  cout<<"Government Tax: "<<trip_fare*0.10<<endl;
 
    
 

return 0;
}