# import cv2
# cap=cv2.VideoCapture(0)
# cap.set(3,800)
# cap.set(4,580)
# cap.set(10,100)
# while True:
#     true,img=cap.read()
#     cv2.imshow("video",img)
#     if cv2.waitKey(1)&0xFF==ord('q'):
#         break



# import cv2
# from cvzone.HandTrackingModule import HandDetector
# cap=cv2.VideoCapture(0)
# detector=HandDetector(maxHands=4)
# cap.set(3,900)
# cap.set(4,680)
# cap.set(10,200)
# while True:
#     success,img=cap.read()
#     hands,img=detector.findHands(img)
#     cv2.imshow("image",img)
#     if cv2.waitKey(1) & 0xFF == ord('q'):
#         break



# import cv2
# img = cv2.imread("space.jpg")
# cv2.imshow("img1",img)
# img2 = cv2.imread("image.jpg") 
# mix=cv2.addWeighted(img,1,img2,1,0)
# cv2.imshow("img2",img2)
# cv2.imshow("WOW!!",mix)
# if cv2.waitKey(0) & 0xFF == ord('q'):
#     exit()



