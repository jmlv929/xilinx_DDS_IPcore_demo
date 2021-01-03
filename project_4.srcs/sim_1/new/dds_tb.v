`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/01/03 09:52:32
// Design Name: 
// Module Name: dds_tb
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module dds_tb(

    );


reg clk;

initial clk=1'b1;
always #5 clk=~clk;


wire m_axis_data_tvalid;
wire [15:0] m_axis_data_tdata;
wire [15:0] m_axis_phase_tdata;
wire m_axis_phase_tvalid;

dds_compiler_0 your_instance_name (
  .aclk(clk),                                // input wire aclk
  .m_axis_data_tvalid(m_axis_data_tvalid),    // output wire m_axis_data_tvalid
  .m_axis_data_tdata(m_axis_data_tdata),      // output wire [7 : 0] m_axis_data_tdata
  .m_axis_phase_tvalid(m_axis_phase_tvalid),  // output wire m_axis_phase_tvalid
  .m_axis_phase_tdata(m_axis_phase_tdata)    // output wire [15 : 0] m_axis_phase_tdata
);

endmodule
