#include "jwt.h"
#include <iostream>
#include <QtGlobal>
#include <QTextStream>
#include <QDebug>

int main() {
    std::string token = "your token";
    auto decoded = jwt::decode(token);

    for(auto& e : decoded.get_payload_claims())
        if (e.first == "role")
        {
            auto tableau = e.second.as_array(); 
            std::cout << tableau[0] << std::endl;
            std::cout << tableau[1] << std::endl; 
            QString val = QString::fromStdString(tableau[0].to_str());
            qDebug() << val << endl;     
        }    
}
