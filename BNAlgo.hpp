// //
// // Created by Conner on 2026-03-24.
// //
//
// #ifndef ASSIGNMENT1_BNALGO_HPP
// #define ASSIGNMENT1_BNALGO_HPP
// #include <vector>
// #include <opencv2/opencv.hpp>
//
// struct LinePair {
//     cv::Point2f P_source, Q_source;
//     cv::Point2f P_dest, Q_dest;
// };
//
// class BNAlgo {
// private:
//     cv::Mat source;
//     cv::Mat destination;
//     std::vector<LinePair> lines;
//
//     float a = 1.0f;
//     float b = 2.0f;
//     float c = 0.5f;
//
//     cv::Point2f calculatePerpendicular(const cv::Point2f& vector);
//     float calculateDistance(const cv::Point2f& p1, const cv::Point2f& p2);
//
// public:
//     BNAlgo(const cv::Mat& src, const cv::Mat& dst);
//
//     void addLinePair(cv::Point2f P_src, cv::Point2f Q_src, cv::Point2f P_dst, cv::Point2f Q_dst);
//
//     cv::Mat warpImage();
// };
//
//
// #endif //ASSIGNMENT1_BNALGO_HPP