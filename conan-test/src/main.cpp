#include <drogon/drogon.h>
#include <filesystem>
using namespace drogon;

int main()
{
  std::filesystem::path dirPath = "../logs";
  std::filesystem::create_directory(dirPath);

  app().registerHandler("/test?username={name}",
                    [](const HttpRequestPtr& req,
                       std::function<void (const HttpResponsePtr &)> &&callback,
                       const std::string &name)
                    {
                        Json::Value json;
                        json["result"]="ok";
                        json["message"]=std::string("hello,")+name;
                        auto resp=HttpResponse::newHttpJsonResponse(json);
                        callback(resp);
                    },
                    {Get,"LoginFilter"});  
      
  
  app().setLogPath("../logs")
         .setLogLevel(trantor::Logger::kInfo)
         .addListener("0.0.0.0", 8080)
         .setThreadNum(16)
         .run();
}
