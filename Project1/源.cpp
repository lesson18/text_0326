#include <opencv2/opencv.hpp>
#include <iostream>
int main(int argc, char** argv)
{
	using namespace cv;
	
    
	//读入图像。
	Mat src = imread("C:/Users/lansen/Pictures/ceshi.jpg");//注意分隔符！！！
	if (src.empty()) {
		printf("could not load image...\n");
		return -1;
	}
	
	namedWindow("test opencv setup", CV_WINDOW_AUTOSIZE);
	imshow("test opencv setup", src);
	//修改图像：转换色彩空间。
	namedWindow("output windows", CV_WINDOW_AUTOSIZE);
	Mat output_image;
	cvtColor(src, output_image, CV_BGR2HSV);//源和目标彩色空间定义。
	imshow("output windows", output_image);
	//写出图像。
	imwrite("C:/Users/lansen/Pictures/ceshishuchu.png", output_image);
	waitKey(0);//键盘按任意键，关闭。
	return 0;
}