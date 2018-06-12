#include <vector>

class Neuron {

private:

    int m_num_inputs;
    double m_bias;
    std::vector<double> m_weights;

public:

    Neuron() {
        m_num_inputs = 0;
        m_bias = 0.0;
        m_weights.clear();
    }

    Neuron(int num_inputs) {
        m_num_inputs = num_inputs;
    }

    ~Neuron() {
        m_num_inputs = 0;
        m_bias = 0.0;
        m_weights.clear();
    }
};
