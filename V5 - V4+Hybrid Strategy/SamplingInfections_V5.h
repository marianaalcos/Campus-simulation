#include <iostream>
#include"Sample_V5.h"

using namespace std;

bool SamplingInfectionsWeekends(Student* stu,vector<Student*>& StudentsOnCampus,int DayNum)
{   
            bool IfExp=0;
            int NW;
	        bool ifSkip=0;  //to decide whether a student have been infected so need to skip the for loop
	        vector<int>* p;
	        int NumofThisStu=FindIndex_1(StudentsOnCampus,stu);  //find the index of stu 
            double RandomNumber = du(ge);
            if(RandomNumber<=PGreekLife)  {NW=NW_H;}
            if(RandomNumber>PGreekLife)  {NW=NW_L;}
	        p=Sample(NW,0,StudentsOnCampus.size(),NumofThisStu);  // generate NW different students during weekends (can not be this stu)
	        for (int i=0;i<NW;i++)     
	        {
		        switch ( StudentsOnCampus[p->at(i)] ->condition)       
		        {
			        case 0:  {break;}
			        case 1:  {break;}
			        case 5:  {break;}
			        case 6:  {break;}
			        case 7:  {break;}
			        case 2:  {
				         double RandomNumber = du(ge);
			             if(RandomNumber<=Pp)  
			             {
				            stu->SE=DayNum+1;
                            stu->condition=1;
                            IfExp=1;
				            ifSkip=1;
			             }
				         break;
				    }
			        case 3:  {
				         double RandomNumber = du(ge);
			             if(RandomNumber<=Pa)  
			             {
				            stu->SE=DayNum+1;
                            stu->condition=1;
                            IfExp=1;
				            ifSkip=1;
			             }
				         break;
				    }
			        case 4:  {
				         if(StudentsOnCampus[p->at(i)]->ifQuarantine) {break;}
				         if(!StudentsOnCampus[p->at(i)]->ifQuarantine){
					         double RandomNumber = du(ge);
				             if(RandomNumber<=Ps)  
				             {
					            stu->SE=DayNum+1;
                                stu->condition=1;
                                IfExp=1;
					            ifSkip=1;
				             }
					         break;
				         }
				    }
			    } 
			    if(ifSkip) {break;}  
	        }
	return IfExp;
}