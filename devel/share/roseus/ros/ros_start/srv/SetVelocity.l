;; Auto-generated. Do not edit!


(when (boundp 'ros_start::SetVelocity)
  (if (not (find-package "ROS_START"))
    (make-package "ROS_START"))
  (shadow 'SetVelocity (find-package "ROS_START")))
(unless (find-package "ROS_START::SETVELOCITY")
  (make-package "ROS_START::SETVELOCITY"))
(unless (find-package "ROS_START::SETVELOCITYREQUEST")
  (make-package "ROS_START::SETVELOCITYREQUEST"))
(unless (find-package "ROS_START::SETVELOCITYRESPONSE")
  (make-package "ROS_START::SETVELOCITYRESPONSE"))

(in-package "ROS")





(defclass ros_start::SetVelocityRequest
  :super ros::object
  :slots (_linear_velocity _angular_velocity ))

(defmethod ros_start::SetVelocityRequest
  (:init
   (&key
    ((:linear_velocity __linear_velocity) 0.0)
    ((:angular_velocity __angular_velocity) 0.0)
    )
   (send-super :init)
   (setq _linear_velocity (float __linear_velocity))
   (setq _angular_velocity (float __angular_velocity))
   self)
  (:linear_velocity
   (&optional __linear_velocity)
   (if __linear_velocity (setq _linear_velocity __linear_velocity)) _linear_velocity)
  (:angular_velocity
   (&optional __angular_velocity)
   (if __angular_velocity (setq _angular_velocity __angular_velocity)) _angular_velocity)
  (:serialization-length
   ()
   (+
    ;; float64 _linear_velocity
    8
    ;; float64 _angular_velocity
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _linear_velocity
       (sys::poke _linear_velocity (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _angular_velocity
       (sys::poke _angular_velocity (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _linear_velocity
     (setq _linear_velocity (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _angular_velocity
     (setq _angular_velocity (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass ros_start::SetVelocityResponse
  :super ros::object
  :slots (_success ))

(defmethod ros_start::SetVelocityResponse
  (:init
   (&key
    ((:success __success) nil)
    )
   (send-super :init)
   (setq _success __success)
   self)
  (:success
   (&optional __success)
   (if __success (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass ros_start::SetVelocity
  :super ros::object
  :slots ())

(setf (get ros_start::SetVelocity :md5sum-) "f6aaad2e58fe90e46753c2e927c41798")
(setf (get ros_start::SetVelocity :datatype-) "ros_start/SetVelocity")
(setf (get ros_start::SetVelocity :request) ros_start::SetVelocityRequest)
(setf (get ros_start::SetVelocity :response) ros_start::SetVelocityResponse)

(defmethod ros_start::SetVelocityRequest
  (:response () (instance ros_start::SetVelocityResponse :init)))

(setf (get ros_start::SetVelocityRequest :md5sum-) "f6aaad2e58fe90e46753c2e927c41798")
(setf (get ros_start::SetVelocityRequest :datatype-) "ros_start/SetVelocityRequest")
(setf (get ros_start::SetVelocityRequest :definition-)
      "float64 linear_velocity
float64 angular_velocity
---
bool success


")

(setf (get ros_start::SetVelocityResponse :md5sum-) "f6aaad2e58fe90e46753c2e927c41798")
(setf (get ros_start::SetVelocityResponse :datatype-) "ros_start/SetVelocityResponse")
(setf (get ros_start::SetVelocityResponse :definition-)
      "float64 linear_velocity
float64 angular_velocity
---
bool success


")



(provide :ros_start/SetVelocity "f6aaad2e58fe90e46753c2e927c41798")


