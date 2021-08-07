#include<iostream>
#include<string>
#include<vector>
#include <sstream>
std::string q1(std::string str){
    int start[2];
    int end[2];
    int i = 0;
    bool t = false;
    while(i<str.size()){
        if(str[i] != ' ' && !t){
            start[0] = i;
            t = true;
        }
        if(str[i] == ' ' && t){
            end[0] = i;
            break;
        }
        ++i;
    }
    i = str.size()-1;
    t = false;
    while(i>=0){
        if(str[i] != ' ' && !t){
            end[1] = i+1;
            t = true;
        }
        if(str[i] == ' ' && t){
            start[1] = i+1;
            break;
        }
        --i;
    }
    std::string tmp2 = str.substr(start[1],end[1]);
    str.erase(str.begin()+start[1],str.begin()+end[1]);
    std::string tmp1 = str.substr(start[0],end[0]);
    str.insert(start[1],tmp1);
    str.erase(str.begin()+start[0],str.begin()+end[0]);
    str.insert(start[0],tmp2);
    return str;
}
std::string q2(std::string str1, std::string str2){
    std::string tmp = "";
    for (int i = 0; i < str1.size(); ++i)
    {
        if(str1[i]==' '){
            continue;
        }
        for (int j = 0; j < str2.size(); ++j)
        {
            if(str1[i] == str2[j]){
                tmp+=str1[i];
                str1.erase(i,1);
                str2.erase(j,1);
                i-1<0?i = 0:--i;
                j-1<0?j = 0:--j;
            }
        }
        
    }
    std::cout<<tmp;
    return tmp;
    
}
std::string q3(std::string str1, std::string str2){
    std::string tmp = "";
    for (int i = 0; i < str1.size(); ++i)
    {
        if(str1[i]==' '){
            continue;
        }
        bool t = false;
        for (int j = 0; j < str2.size(); ++j)
        {
            if(str1[i] == str2[j]){
                t = true;
                str2.erase(j,1);
                break;
            }
            
        }
        if(!t){
                tmp+=str1[i];
        }
        
    }
    std::cout<<tmp;
    return tmp;
    
}
std::string q4(std::string str){
    long long count = 1;
    int j = 0;
    for (int i = 0; i < str.size(); ++i)
    {
        if(i%10 == 0)
            count*=10;
        if(str[i] == '*'){
            str.erase(i,1);
            long long tmp = count;
            int tmp2 = i-j;
            tmp/=10;
            while(tmp!=0){
                str.insert(str.begin()+i,(char)(48+(int)(tmp2/tmp)));
                ++i;
                tmp2%=tmp;
                tmp/=10;
                ++j;
            }
            --i;
            --j;
        }
    }
    std::cout<<str;
    return str;
}
std::string q5(std::string str){
    long long count = 1;
    int j = 0;
    for (int i = 0; i < str.size(); ++i)
    {
        if(i%10 == 0)
            count*=10;
        if(str[i] == '!'){
            str.erase(i,1);
            long long tmp = count;
            int tmp2 = i-j;
            tmp/=10;
            while(tmp!=0){
                str.insert(str.begin()+i,(char)(48+(int)(tmp2/tmp)));
                ++i;
                tmp2%=tmp;
                tmp/=10;
                ++j;
            }
            --i;
            --j;
        }
    }
    std::cout<<str;
    return str;
}
std::string q6(std::string str){
    for(int i = 0; i<str.size(); ++i){
        if(str[i]=='y'){
            str[i] = ' ';
        }
        else{
            str[i] = (char)(str[i]+1);
        }
    }
    std::cout<<str;
    return str;
}
int q7(std::string str){
    for(int i = 0; i<str.size(); ++i){
        bool t = false;
        char tmp = str[i];
        for (int j = i+1; j < str.size(); ++j)
        {
            if(str[j] == tmp){
                t = true;
                str.erase(j,1);
                str.erase(i,1);
                --i;;
                break;
            }
        }
    }
    return str.size();
}
std::string q8(std::string str){
    std::string tmp = " ";
    std::string tmp2 = "";
    std::stringstream s;
    s<<str;
    while(s>>tmp){
        tmp2.insert(0," ");
        tmp2.insert(1,tmp);
    }
    tmp2.erase(0,1);
    return tmp2;
}
std::vector<std::string> q10(std::string tmp){
    std::stringstream s(tmp);
    std::vector<std::string> words;
    std::string str;
    while(s>>str){
        words.push_back(str);
    }
    return words;
}
int main(){
    
}
