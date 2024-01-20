#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

void writeMsgToLog(const std_msgs::String::ConstPtr& msg)
{
    ROS_INFO("MESSage: %s", msg->data.c_str());
}


int main(int argc, char **argv)
{
    ros::init(argc, argv, "Subscriber");
    ros::NodeHandle nh;

    ros::Subscriber topic_sub = nh.subscribe("Cam1",1000, writeMsgToLog);

    ros::spin();

}
