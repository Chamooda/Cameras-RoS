import cv2

def find_camera_index():
    # Try to open cameras from index 0 to 10
    for camera_index in range(3,100):
        cap = cv2.VideoCapture(camera_index)

        # Check if the camera opened successfully
        if cap.isOpened():
            print(f"Camera found at index: {camera_index}")
            cap.release()  # Release the camera before exiting
            return

    print("No camera found.")

if __name__ == "__main__":
    find_camera_index()
