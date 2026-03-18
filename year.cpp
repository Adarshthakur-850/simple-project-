#include<iosteam>
using namespace std;
class year{
public:
    enum month{
        jan,feb,mar,apl,may,jun,jul,aug,sep,oct,nov,dec
    };

    void setMonth(Month mounth){
        currentMonth=month;
    }
    month grtmonth(){
        return currentMonth;
    }
    string getMonthString(Month month){
        switch(month){
            case jan:return"january";
            case feb:return"febuary";
            case mar:return"march";
            case apl:return"aplil";
            case may:return"january";
            case jun:return"january";
            case jul:return"january";
            case aug:return"january";
            case jan:return"january";
            case jan:return"january";
            case jan:return"january";
        }
    }

}
