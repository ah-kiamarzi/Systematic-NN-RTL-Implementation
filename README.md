
# Systematic Neural Network RTL Implementation

This repository contains the implementation of a systematic approach to designing, implementing, and optimizing neural networks (NNs) using Register Transfer Level (RTL) methodologies. The approach is based on the transformation of NNs into state-space models and further into finite-state machine representations. The repository includes implementations in various hardware description languages and tools, showcasing the versatility of the proposed method.

## Abstract

In the realm of neural network design, an organized and efficient approach is crucial. This repository houses a systematic methodology for implementing state-space models at the RTL level, with a focus on neural network implementations. The approach draws inspiration from the iterative nature of state-space models and the parallels between state-space formulations and finite-state machines. It accommodates both linear and nonlinear, as well as time-varying and time-invariant systems. This method suits inherently iterative systems as well as systems that can be reformulated iteratively. Notably, it finds application in the implementation of recurrent neural networks like the Long Short-Term Memory (LSTM) NNs, which inherently possess state-space forms. A case study demonstrates the systematic use of state-space systems for implementing and optimizing NNs as nonlinear and time-varying dynamic systems.

## Implementation Overview

The primary application implemented in this repository is a neural network composed of three hidden layers, one input layer, and one output layer. The workflow involves transforming this NN into its iterative form and further converting it into state-space equations. These equations are then represented in a state machine format. Three distinct RTL implementation approaches are employed:

1. CPP Model Synthesized with Vivado HLS Tool: The neural network model is implemented using C++ and then synthesized using the Vivado HLS tool. The synthesized results demonstrate the hardware implementation of the proposed methodology.

2. SystemC Model Synthesized with Vivado HLS Tool: The neural network model is developed using the SystemC library and synthesized using the Vivado HLS tool. This showcases the versatility of the approach across different hardware description languages.

3. RTL Implementation using Verilog HDL: The neural network is implemented in RTL using the Verilog hardware description language. This low-level representation demonstrates the direct application of the proposed method in a hardware description language.

## Usage

To explore and utilize the contents of this repository, follow these steps:

1. Clone the repository to your local machine:
	```bash
       git clone https://github.com/ah-kiamarzi/Systematic-NN-RTL-Implementation
     ```

2. Navigate to the specific implementation directories (cpp-model, systemc-model, verilog-rtl) for detailed usage instructions for each approach.

3. Customize the implementation parameters, such as bit widths and decimal/fraction parts, based on your application's requirements.

## Contributing

Contributions to this repository are welcome! Feel free to open 
issues for discussions or submit pull requests to propose changes or enhancements.

## Acknowledgments

This work was inspired by the need for a systematic approach to NN implementation and optimization. We extend our gratitude to the open-source hardware design community for their valuable insights and tools.
