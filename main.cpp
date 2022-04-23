#include <iostream>

using namespace std;

 struct ProfiliShendetit //Vendos strukturen e te dhenave qe te ruaj te dhena te tipeve te ndryshme nga perdoruesi
 { char emri[15];
   char mbiemri[20];
   char gjinia[10];
   float gjatesia;
   float pesha;
   unsigned int vitilindjes;
 } ;
 int main() {    //funksioni main 
 	char n;
 	float BMI,vitejete; /*deklaroj variablat qe me duhen gjate calculimit te indeksit te mases se trupit
 	dhe moshes se perdoruesit */
 	ProfiliShendetit p1;               //deklaroj emrin e struktures me nje variabel 
 	cout<<"PROFILI I SHENDETIT 2021"<<endl;
 	cout<<"Vendos emrin:"<<endl; // kerkoj nga perdoruesi inpute te ndryshme
 	cin.get(p1.emri, 15);  // perdori get si hyrje nga tastiera
 	cout<<"Vendos mbiemrin:"<<endl;
 	cin>>p1.mbiemri;
 	cout<<"Vendos gjinine:"<<endl;
 	cin>>p1.gjinia;
 	cout<<"Vendos gjatesine ne meter:"<<endl;
 	cin>>p1.gjatesia;
 	cout<<"Vendos peshen ne kg:"<<endl;
 	cin>>p1.pesha;
 	cout<<"Vendos vitin e lindjes:"<<endl;
 	cin>>p1.vitilindjes;
 	while(p1.vitilindjes<=0){  // vendosi loop while qe te marr nga perdoruesi vetem nr pozitiv
 		cout<<"Error"<<endl;
 		cout<<"Vendos vetem nr pozitiv"<<endl;
	 }
 	
 	BMI=p1.pesha/(p1.gjatesia*p1.gjatesia); //calculoj indeksin e mases se trupit
 	vitejete=(2021-p1.vitilindjes); //Nepermejt vitit te lindjes gjej sa vjec eshte perdoruesi tani
 	
 	if(BMI<18.5){ //vendos kushtin qe te marr nje pergjigje te sakte per problemin qe zgjidhet
 		cout<<"Je nenpeshe"<<endl;
	 }
 	else if(BMI>=18.5&&BMI<=24.9){ //perdori operatoret logjik kur vlera e BMI mund te jete ndermejt dy vlerave
 		cout<<"Vlera e indeksit te mases se trupit eshte Normale(BMI)"<<endl;   //do afishohet mesazhi per perdoruesin nqs plotesohet kushti
	 }
 	else if(BMI>=25&&BMI<=29.9){
 		cout<<"Je mbipeshe"<<endl;
	 }
 	else{
 		cout<<"Obez"<<endl; // perndryshe nqs vlera e BMI-se eshte me e larte se 30 do afishohet nje mesazh
	 }
 	cout<<"Personi "<<p1.emri << p1.mbiemri<<" i gjinise "<<p1.gjinia<<" ka moshen "<<vitejete<<" vjec.\n";
 	cout<<"Ai/Ajo eshte i/e gjate "<<p1.gjatesia<<" meter dhe peshon "<<p1.pesha<<"kg. "<<endl;
 	cout<<"BMI eshte: "<<BMI<<endl;
 	
 	cout<<"\tMesazhi:\t";    cout<<"Vlerat e BMI-se:\t"<<endl;//shfaqi ne forme tabele vlerat e BMI-se me mesazhin qe korrespondon
 	cout<<"\tNenpeshe\t";   cout<<"me pak se 18.5\t"<<endl;
 	cout<<"\tNormale\t";    cout<<"\tndermjet 18.5 dhe 24.9\t"<<endl;
 	cout<<"\tMbipeshe\t";   cout<<"ndermjet 25 dhe 29.9\t"<<endl;
 	cout<<"\tObez\t";       cout<<"\tmbi 30\t"<<endl;
 	 
 	 cout<<"Deshironi te lexoni te dhenat per nje person tjeter?shtyp Y/N"<<endl;
 	 cin>>n;// variabel ku do ruhet vetem characteri qe useri e jep si input
 	 if(n=='Y'){ //Vendosi kushtin nqs inputi eshte Y qe te rilexohen edhe nje here te dhenat
	      	cout<<"Personi "<<p1.emri << p1.mbiemri<<" i gjinise "<<p1.gjinia<<" ka moshen "<<vitejete<<" vjec.\n";
 	cout<<"Ai/Ajo eshte i/e gjate "<<p1.gjatesia<<" meter dhe peshon "<<p1.pesha<<"kg. "<<endl;
 	cout<<"BMI eshte: "<<BMI<<endl;
	       
        }
		
 	 		else{
   cout<<"Program exited"<<endl; //nqs perdoruesi jep cdo vlere tjtr nga tastjera atehere do te dilet nga programi
 	 	
	  }
 	
 	return 0;
 	
 }
 