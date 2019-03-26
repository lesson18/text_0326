#include <opencv2/opencv.hpp>
#include <iostream>
int main(int argc, char** argv)
{
	using namespace cv;
	
    
	//����ͼ��
	Mat src = imread("C:/Users/lansen/Pictures/ceshi.jpg");//ע��ָ���������
	if (src.empty()) {
		printf("could not load image...\n");
		return -1;
	}
	
	namedWindow("test opencv setup", CV_WINDOW_AUTOSIZE);
	imshow("test opencv setup", src);
	//�޸�ͼ��ת��ɫ�ʿռ䡣
	namedWindow("output windows", CV_WINDOW_AUTOSIZE);
	Mat output_image;
	cvtColor(src, output_image, CV_BGR2HSV);//Դ��Ŀ���ɫ�ռ䶨�塣
	imshow("output windows", output_image);
	//д��ͼ��
	imwrite("C:/Users/lansen/Pictures/ceshishuchu.png", output_image);
	waitKey(0);//���̰���������رա�
	return 0;
}