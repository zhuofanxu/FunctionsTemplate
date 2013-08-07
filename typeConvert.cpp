#include<sstream>

template<class out_type,class in_value>
out_type convert(const in_value& t)
{
    std::stringstream stream; //流对象
	stream<<t;               //向流中传值
	out_type result;         //存储转换结果
	stream>>result;          //将结果写入result
	return result;
}

int main(void)
{
  int a=2345;
  std::string str;
  str=convert<string>(a);
  cout<<str;                //str="2345"
  
  string strc="87966";
  int b;
  b=convert<int>(strc);    //b=87966
}
