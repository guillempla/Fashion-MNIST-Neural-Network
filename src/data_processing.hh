#ifndef DATA_PROCESSING_HH
#define DATA_PROCESSING_HH

#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <stdexcept> // std::runtime_erro

#include "matrix.hh"

#define NUM_LABELS 10

using namespace std;

class Data_processing {
    private:
        string test_labels_path;
        string test_vectors_path;
        string train_labels_path;
        string train_vectors_path;
        string output_path;

        unsigned count_lines(const string& file_name) const;
        unsigned count_cols(const string& file_name) const;

        Matrix read_labels(const string& file_name) const;
        Matrix read_vectors(const string& file_name) const;

        Matrix convert_binary_matrix(Matrix& predictions) const;

    public:
        //___________CONSTRUCTORS__________
        Data_processing();
        Data_processing(const string& test_labels_path, const string& test_vectors_path,
                        const string& train_labels_path, const string& train_vectors_path,
                        const string& output_path);

        //___________SETTERS__________


        //___________GETTERS__________
        Matrix read_test_labels() const;
        Matrix read_train_labels() const;
        Matrix read_test_vectors() const;
        Matrix read_train_vectors() const;

        void write_predictions(Matrix& predictions) const;

};

#endif
