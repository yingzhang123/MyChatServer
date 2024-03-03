#include "json.hpp"
using json = nlohmann::json;

#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

void func1()
{
    json js;
    js["msg_type"] = 2;
    js["from"] = "zhang san";
    js["to"] = "ls si";
    js["msg"] ="hello,what are you doing??";

    cout<<js<<endl;
}

// json序列化示例2
void func2()
{
    // 普通是序列化
    json js;
    // 添加数组
    js["id"] = {1,2,3,4,5};
    // 添加key-value
    js["name"] = "zhang san";
    // 添加对象
    js["msg"]["zhang san"] = "hello world";
    js["msg"]["liu shuo"] = "hello china";
    // 上面等同于下面这句一次性添加数组对象
    js["msg"] = {{"zhang san", "hello world"}, {"liu shuo", "hello china"}};

    string senBuf = js.dump();
    cout<<senBuf.c_str()<<endl;
    // cout << js << endl;
    // {"id":[1,2,3,4,5],"msg":{"liu shuo":"hello china","zhang san":"hello world"},"name":"zhang san"}
}

void func3()
{
    json js;
    // 直接序列化一个vector容器
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(5);
    js["list"] = vec;

    // 直接序列化一个map容器
    map<int, string> m;
    m.insert({1, "黄山"});
    m.insert({2, "华山"});
    m.insert({3, "泰山"});
    js["path"] = m;
    string sendBuf = js.dump();     // json对象 == 》序列化 json字符串
    cout<<sendBuf<<endl;
}

int main()
{
    func1();
    func2();
    func3();
}
