#pragma once


#include <iostream>
#include <fstream>
#include <string>

namespace IO {

    class FileHandler {
    public:
        // Method to write a string to a file
        void writeToFile(const std::string& filename, const std::string& content) {
            std::ofstream outFile(filename);
            if (!outFile) {
                std::cerr << "Error opening file for writing: " << filename << std::endl;
                return;
            }
            outFile << content;
            outFile.close();
            std::cout << "Content written to " << filename << std::endl;
        }

        // Method to read from a file and return content
        std::string readFromFile(const std::string& filename) {
            std::ifstream inFile(filename);
            std::string content;
            if (!inFile) {
                std::cerr << "Error opening file for reading: " << filename << std::endl;
                return "";
            }
            std::string line;
            while (std::getline(inFile, line)) {
                content += line + "\n";
            }
            inFile.close();
            return content;
        }

        // Method to read from a file and print line by line
        void printFileContent(const std::string& filename) {
            std::ifstream inFile(filename);
            if (!inFile) {
                std::cerr << "Error opening file for reading: " << filename << std::endl;
                return;
            }
            std::string line;
            while (std::getline(inFile, line)) {
                std::cout << line << std::endl;
            }
            inFile.close();
        }

        // Method to append content to a file
        void appendToFile(const std::string& filename, const std::string& content) {
            std::ofstream outFile(filename, std::ios::app);
            if (!outFile) {
                std::cerr << "Error opening file for appending: " << filename << std::endl;
                return;
            }
            outFile << content;
            outFile.close();
            std::cout << "Content appended to " << filename << std::endl;
        }
    };
}

