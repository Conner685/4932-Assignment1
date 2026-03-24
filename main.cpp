//
// Created by Conner on 2026-03-24.
//

#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    for (int i = 1; i <= 8; i++) {
        std::string w0_filename = "W0.t" + std::to_string(i) + ".jpg";
        std::string w1_filename = "W1.t" + std::to_string(i) + ".jpg";

        cv::Mat W0 = cv::imread(w0_filename);
        cv::Mat W1 = cv::imread(w1_filename);

        if (W0.empty() || W1.empty()) {
            std::cerr << "file not found" << std::endl;
            return -1;
        }

        double alpha = static_cast<double>(i) / 9.0;
        double beta = 1.0 - alpha;

        cv::Mat blendedImg;
        cv::addWeighted(W0, beta, W1, alpha, 0.0, blendedImg);

        std::string output_filename = "Blended_t" + std::to_string(i) + ".jpg";
        cv::imwrite(output_filename, blendedImg);
        std::cout << "img " << i << " created" << std::endl;
    }

    return 0;
}
