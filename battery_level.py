import rospy
from std_msgs.msg import string
from std_msgs.msg import int32


def callback(data):
    if battery_level<33:
	rospy.loginfo(rospy.get_caller_id() + "101010101010101", data.data)
    else:
	rospy.loginfo(rospy.get_caller_id() + "111111111111111", data.data)

    
def listener():
    rospy.init_node('listener', anonymous=True)
    rospy.Subscriber("battery_level", int32, callback)
    rospy.spin()

def talker():
    pub = rospy.Publisher('battery_warning_lights', int32, queue_size=10)
    rospy.init_node('talker', anonymous=True)
    rate = rospy.Rate(10) # 10hz
    while not rospy.is_shutdown():
        battery_str = "Level :  %s" % rospy.get_time()
        rospy.loginfo(battery_str)
        pub.publish(battery_str)
        rate.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
