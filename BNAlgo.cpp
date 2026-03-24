// //
// // Created by Conner on 2026-03-24.
// //
//
// #include "BNAlgo.hpp"
//
// BNAlgo::BNAlgo(const cv::Mat& src, const cv::Mat& dst) {
//     source = src.clone();
//
//     destination = cv::Mat::zeros(dst.size(),dst.type());
// }
//
// cv::Point2f BNAlgo::calculatePerpendicular(const cv::Point2f &vector) {
//     return {-vector.y, vector.x};
// }
//
// float BNAlgo::calculateDistance(const cv::Point2f &p1, const cv::Point2f &p2) {
//     return static_cast<float>(cv::norm(p1-p2));
// }
//
// void BNAlgo::addLinePair(cv::Point2f P_src, cv::Point2f Q_src, cv::Point2f P_dst, cv::Point2f Q_dst) {
//     lines.push_back({P_src, Q_src, P_dst, Q_dst});
// }
//
// cv::Mat BNAlgo::warpImage() {
//
// }
