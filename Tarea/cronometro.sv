module cronometro (

		input  logic       button_external,
		input  logic       clk,
		output logic [6:0] id7_segmentos_1,
		output logic [6:0] id7_segmentos_2,
		output logic [6:0] id7_segmentos_3,
		output logic [6:0] id7_segmentos_4,
		input  logic       reset,
		output logic [6:0] segmentos_5,
		output logic [6:0] segmentos_6,
		input  logic [1:0] switchs



);


platform plat(
		.button_external_connection_export(button_external),
		.clk_clk(clk),
		.id7_segmentos_1_external_connection_export(id7_segmentos_1),
		.id7_segmentos_2_external_connection_export(id7_segmentos_2),
		.id7_segmentos_3_external_connection_export(id7_segmentos_3),
		.id7_segmentos_4_external_connection_export(id7_segmentos_4),
		.reset_reset_n(reset),
		.segmentos_5_external_connection_export(segmentos_5),
		.segmentos_6_external_connection_export(segmentos_6),
		.switchs_external_connection_export(switchs)
	);

endmodule


















