#include<iostream>
#include<Eigen/Dense>
#include<fstream>

//using Eigen::MatrixXd;
using namespace std;

int main()
{
//    MatrixXd m(2,2);
    Eigen::Vector3d p;
    p<<1.0,2.0,3.0;
    Eigen::Quaterniond q(1.0,0.0, 0.0, 0.0);
    double paraPose[7]={0.0};
    std::cout<<"init paraPose: ";
    for (int i=0;i<7;i++)
    {
        if (i<6)
        {
            std::cout<<paraPose[i]<<", ";
        }
        else if (i == 6)
        {
            std::cout<<paraPose[i]<<endl;
        }
    }

    Eigen::Map<Eigen::Vector3d> pos(paraPose);
    pos = p;
    std::cout<<"position: "<<pos.transpose()<<std::endl;

    Eigen::Map<Eigen::Quaterniond> quat(&paraPose[3]);
    quat = q;
    std::cout<<"pose: "<<quat.w()<<", "<<quat.vec().transpose()<<std::endl;

    std::cout<<"mapped paraPose: ";
    for (int i=0;i<7;i++)
    {
        if (i<6)
        {
            std::cout<<paraPose[i]<<", ";
        }
        else if (i == 6)
        {
            std::cout<<paraPose[i]<<endl;
        }
    }
    return 0;

}