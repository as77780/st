#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() : modelListener(0)
{
}

void Model::tick()
{

	             RTC_TimeTypeDef sTime = {0};
		 		 RTC_DateTypeDef sDate = {0};

		 	       	HAL_RTC_GetTime(&hrtc, &sTime, RTC_FORMAT_BIN);
		 	    	HAL_RTC_GetDate(&hrtc, &sDate, RTC_FORMAT_BIN);
		 	    	hour =sTime.Hours;
		 	    	minute =sTime.Minutes ;
		 	    	second=sTime.Seconds;
		 	    	//saveHour(hour);
		 	    	//saveMinute(minute);

}
