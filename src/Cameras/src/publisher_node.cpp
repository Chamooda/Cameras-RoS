#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>


int main(int argc, char **argv)
{
    ros::init(argc, argv, "Publisher");
    ros::NodeHandle nh;

    ros::Publisher topic_pub = nh.advertise<std_msgs::String>("Cam1",1000);
    ros::Rate loop_rate(1);

    while (ros::ok())
    {
        std_msgs::String msg;
        msg.data = "Hello World!";

        topic_pub.publish(msg);
        ros::spinOnce();
        loop_rate.sleep();

    }
    return 0;
}