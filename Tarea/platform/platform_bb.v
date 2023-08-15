
module platform (
	button_external_connection_export,
	clk_clk,
	id7_segmentos_1_external_connection_export,
	id7_segmentos_2_external_connection_export,
	id7_segmentos_3_external_connection_export,
	id7_segmentos_4_external_connection_export,
	reset_reset_n,
	segmentos_5_external_connection_export,
	segmentos_6_external_connection_export,
	switchs_external_connection_export);	

	input		button_external_connection_export;
	input		clk_clk;
	output	[6:0]	id7_segmentos_1_external_connection_export;
	output	[6:0]	id7_segmentos_2_external_connection_export;
	output	[6:0]	id7_segmentos_3_external_connection_export;
	output	[6:0]	id7_segmentos_4_external_connection_export;
	input		reset_reset_n;
	output	[6:0]	segmentos_5_external_connection_export;
	output	[6:0]	segmentos_6_external_connection_export;
	input	[1:0]	switchs_external_connection_export;
endmodule
