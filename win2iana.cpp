#include <iostream> 
#include <iterator> 
#include <map> 
  
using namespace std; 

std::map <std::string, std::string> windowsToIana = {
    {"(GMT-12:00) International Date Line West", "Etc/GMT+12"},
    {"(GMT-11:00) Coordinated Universal Time-11", "Etc/GMT+11"},
    {"(GMT-10:00) Hawaii", "Pacific/Honolulu"},
    {"(GMT-09:30) Marquesas Islands", "Pacific/Marquesas"},
    {"(GMT-09:00) Alaska", "America/Anchorage"},
    {"(GMT-09:00) Co-ordinated Universal Time-09", "Etc/GMT+9"},
    {"(GMT-08:00) Baja California", "America/Tijuana"},
    {"(GMT-08:00) Co-ordinated Universal Time-08", "Etc/GMT+8"},
    {"(GMT-08:00) Pacific Time (US & Canada)", "America/Los_Angeles"},
    {"(GMT-07:00) Arizona", "America/Phoenix"},
    {"(GMT-07:00) Chihuahua, La Paz, Mazatlan", "America/Chihuahua"},
    {"(GMT-07:00) Mountain Time (US & Canada)", "America/Denver"},
    {"(GMT-06:00) Central America", "America/Guatemala"},
    {"(GMT-06:00) Central Time (US & Canada)", "America/Chicago"},
    {"(GMT-06:00) Easter Island", "Pacific/Easter"},
    {"(GMT-06:00) Guadalajara, Mexico City, Monterrey", "America/Mexico_City"},
    {"(GMT-06:00) Saskatchewan", "America/Regina"},
    {"(GMT-05:00) Bogota, Lima, Quito, Rio Branco", "America/Bogota"},
    {"(GMT-05:00) Chetumal", "America/Cancun"},
    {"(GMT-05:00) Eastern Time (US & Canada)", "America/New_York"},
    {"(GMT-05:00) Haiti", "America/Port-au-Prince"},
    {"(GMT-05:00) Havana", "America/Havana"},
    {"(GMT-05:00) Indiana (East)", "America/Indianapolis"},
    {"(GMT-04:00) Asuncion", "America/Asuncion"},
    {"(GMT-04:00) Atlantic Time (Canada)", "America/Halifax"},
    {"(GMT-04:00) Caracas", "America/Caracas"},
    {"(GMT-04:00) Cuiaba", "America/Cuiaba"},
    {"(GMT-04:00) Georgetown, La Paz, Manaus, San Juan", "America/La_Paz"},
    {"(GMT-04:00) Santiago", "America/Santiago"},
    {"(GMT-04:00) Turks and Caicos", "America/Grand_Turk"},
    {"(GMT-03:30) Newfoundland", "America/St_Johns"},
    {"(GMT-03:00) Araguaina", "America/Araguaina"},
    {"(GMT-03:00) Brasilia", "America/Sao_Paulo"},
    {"(GMT-03:00) Cayenne, Fortaleza", "America/Cayenne"},
    {"(GMT-03:00) City of Buenos Aires", "America/Buenos_Aires"},
    {"(GMT-03:00) Greenland", "America/Godthab"},
    {"(GMT-03:00) Montevideo", "America/Montevideo"},
    {"(GMT-03:00) Saint Pierre and Miquelon", "America/Miquelon"},
    {"(GMT-03:00) Salvador", "America/Bahia"},
    {"(GMT-02:00) Co-ordinated Universal Time-02", "Etc/GMT+2"},
    {"(GMT-01:00) Azores", "Atlantic/Azores"},
    {"(GMT-01:00) Cabo Verde Is.", "Atlantic/Cape_Verde"},
    {"(GMT) Co-ordinated Universal Time", "Etc/GMT"},
    {"(GMT+00:00) Casablanca", "Africa/Casablanca"},
    {"(GMT+00:00) Dublin, Edinburgh, Lisbon, London", "Europe/London"},
    {"(GMT+00:00) Monrovia, Reykjavik", "Atlantic/Reykjavik"},
    {"(GMT+01:00) Amsterdam, Berlin, Bern, Rome, Stockholm, Vienna", "Europe/Berlin"},
    {"(GMT+01:00) Belgrade, Bratislava, Budapest, Ljubljana, Prague", "Europe/Budapest"},
    {"(GMT+01:00) Brussels, Copenhagen, Madrid, Paris", "Europe/Paris"},
    {"(GMT+01:00) Sarajevo, Skopje, Warsaw, Zagreb", "Europe/Warsaw"},
    {"(GMT+01:00) West Central Africa", "Africa/Lagos"},
    {"(GMT+01:00) Windhoek", "Africa/Windhoek"},
    {"(GMT+02:00) Amman", "Asia/Amman"},
    {"(GMT+02:00) Athens, Bucharest", "Europe/Bucharest"},
    {"(GMT+02:00) Beirut", "Asia/Beirut"},
    {"(GMT+02:00) Cairo", "Africa/Cairo"},
    {"(GMT+02:00) Chisinau", "Europe/Chisinau"},
    {"(GMT+02:00) Damascus", "Asia/Damascus"},
    {"(GMT+02:00) Gaza, Hebron", "Asia/Gaza"},
    {"(GMT+02:00) Harare, Pretoria", "Africa/Johannesburg"},
    {"(GMT+02:00) Helsinki, Kyiv, Riga, Sofia, Tallinn, Vilnius", "Europe/Kiev"},
    {"(GMT+02:00) Istanbul", "Europe/Istanbul"},
    {"(GMT+02:00) Jerusalem", "Asia/Jerusalem"},
    {"(GMT+02:00) Kaliningrad", "Europe/Kaliningrad"},
    {"(GMT+02:00) Tripoli", "Africa/Tripoli"},
    {"(GMT+03:00) Baghdad", "Asia/Baghdad"},
    {"(GMT+03:00) Kuwait, Riyadh", "Asia/Riyadh"},
    {"(GMT+03:00) Minsk", "Europe/Minsk"},
    {"(GMT+03:00) Moscow, St. Petersburg, Volgograd", "Europe/Moscow"},
    {"(GMT+03:00) Nairobi", "Africa/Nairobi"},
    {"(GMT+03:30) Tehran", "Asia/Tehran"},
    {"(GMT+04:00) Abu Dhabi, Muscat", "Asia/Dubai"},
    {"(GMT+04:00) Astrakhan, Ulyanovsk", "Europe/Samara"},
    {"(GMT+04:00) Baku", "Asia/Baku"},
    {"(GMT+04:00) Izhevsk, Samara", "Europe/Samara"},
    {"(GMT+04:00) Port Louis", "Indian/Mauritius"},
    {"(GMT+04:00) Tbilisi", "Asia/Tbilisi"},
    {"(GMT+04:00) Yerevan", "Asia/Yerevan"},
    {"(GMT+04:30) Kabul", "Asia/Kabul"},
    {"(GMT+05:00) Ashgabat, Tashkent", "Asia/Tashkent"},
    {"(GMT+05:00) Ekaterinburg", "Asia/Yekaterinburg"},
    {"(GMT+05:00) Islamabad, Karachi", "Asia/Karachi"},
    {"(GMT+05:30) Chennai, Kolkata, Mumbai, New Delhi", "Asia/Calcutta"},
    {"(GMT+05:30) Sri Jayawardenepura", "Asia/Colombo"},
    {"(GMT+05:45) Kathmandu", "Asia/Kathmandu"},
    {"(GMT+06:00) Astana", "Asia/Almaty"},
    {"(GMT+06:00) Dhaka", "Asia/Dhaka"},
    {"(GMT+06:00) Novosibirsk", "Asia/Novosibirsk"},
    {"(GMT+06:30) Yangon (Rangoon)", "Asia/Rangoon"},
    {"(GMT+07:00) Bangkok, Hanoi, Jakarta", "Asia/Bangkok"},
    {"(GMT+07:00) Barnaul, Gorno-Altaysk", "Asia/Krasnoyarsk"},
    {"(GMT+07:00) Hovd", "Asia/Hovd"},
    {"(GMT+07:00) Krasnoyarsk", "Asia/Krasnoyarsk"},
    {"(GMT+07:00) Tomsk", "Asia/Tomsk"},
    {"(GMT+08:00) Beijing, Chongqing, Hong Kong SAR, Urumqi", "Asia/Shanghai"},
    {"(GMT+08:00) Irkutsk", "Asia/Irkutsk"},
    {"(GMT+08:00) Kuala Lumpur, Singapore", "Asia/Singapore"},
    {"(GMT+08:00) Perth", "Australia/Perth"},
    {"(GMT+08:00) Taipei", "Asia/Taipei"},
    {"(GMT+08:00) Ulaanbaatar", "Asia/Ulaanbaatar"},
    {"(GMT+08:30) Pyongyang", "Asia/Pyongyang"},
    {"(GMT+08:45) Eucla", "Australia/Eucla"},
    {"(GMT+09:00) Chita", "Asia/Chita"},
    {"(GMT+09:00) Osaka, Sapporo, Tokyo", "Asia/Tokyo"},
    {"(GMT+09:00) Seoul", "Asia/Seoul"},
    {"(GMT+09:00) Yakutsk", "Asia/Yakutsk"},
    {"(GMT+09:30) Adelaide", "Australia/Adelaide"},
    {"(GMT+09:30) Darwin", "Australia/Darwin"},
    {"(GMT+10:00) Brisbane", "Australia/Brisbane"},
    {"(GMT+10:00) Canberra, Melbourne, Sydney", "Australia/Sydney"},
    {"(GMT+10:00) Guam, Port Moresby", "Pacific/Port_Moresby"},
    {"(GMT+10:00) Hobart", "Australia/Hobart"},
    {"(GMT+10:00) Vladivostok", "Asia/Vladivostok"},
    {"(GMT+10:30) Lord Howe Island", "Australia/Lord_Howe"},
    {"(GMT+11:00) Bougainville Island", "Pacific/Bougainville"},
    {"(GMT+11:00) Chokurdakh", "Asia/Srednekolymsk"},
    {"(GMT+11:00) Magadan", "Asia/Magadan"},
    {"(GMT+11:00) Norfolk Island", "Pacific/Norfolk"},
    {"(GMT+11:00) Sakhalin", "Asia/Sakhalin"},
    {"(GMT+11:00) Solomon Is., New Caledonia", "Pacific/Guadalcanal"},
    {"(GMT+12:00) Anadyr, Petropavlovsk-Kamchatsky", "Asia/Kamchatka"},
    {"(GMT+12:00) Auckland, Wellington", "Pacific/Auckland"},
    {"(GMT+12:00) Co-ordinated Universal Time+12", "Etc/GMT-12"},
    {"(GMT+12:00) Fiji", "Pacific/Fiji"},
    {"(GMT+12:45) Chatham Islands", "Pacific/Chatham"},
    {"(GMT+13:00) Nuku'alofa", "Pacific/Tongatapu"},
    {"(GMT+13:00) Samoa", "Pacific/Apia"},
    {"(GMT+14:00) Kiritimati Island", "Pacific/Kiritimati"}
};
int main()
{
    std::map<std::string, std::string>::iterator itr;
	for (itr = windowsToIana.begin(); itr != windowsToIana.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    }
	return 0;
}
