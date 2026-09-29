#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
  cv::Mat img = cv::imread("../assets/1.png");
 if (img.empty()) {
    std::cout << "仍无法读取，文件或编解码器有问题" << std::endl;
    return -1;
}
  std::cout << "读取成功，尺寸: " << img.size() << std::endl;
  cv::Mat gray;
  cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

  cv::imshow("gray", gray); 
  bool ok = cv::imwrite("../assets/output.png", gray);
	if (!ok) {
    std::cout << "保存失败" << std::endl;
    return -1;
  }
  std::cout << "保存成功" << std::endl;
  cv::waitKey(0);
  return 0;
}

