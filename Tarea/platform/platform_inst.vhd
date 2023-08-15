	component platform is
		port (
			button_external_connection_export          : in  std_logic                    := 'X';             -- export
			clk_clk                                    : in  std_logic                    := 'X';             -- clk
			id7_segmentos_1_external_connection_export : out std_logic_vector(6 downto 0);                    -- export
			id7_segmentos_2_external_connection_export : out std_logic_vector(6 downto 0);                    -- export
			id7_segmentos_3_external_connection_export : out std_logic_vector(6 downto 0);                    -- export
			id7_segmentos_4_external_connection_export : out std_logic_vector(6 downto 0);                    -- export
			reset_reset_n                              : in  std_logic                    := 'X';             -- reset_n
			segmentos_5_external_connection_export     : out std_logic_vector(6 downto 0);                    -- export
			segmentos_6_external_connection_export     : out std_logic_vector(6 downto 0);                    -- export
			switchs_external_connection_export         : in  std_logic_vector(1 downto 0) := (others => 'X')  -- export
		);
	end component platform;

	u0 : component platform
		port map (
			button_external_connection_export          => CONNECTED_TO_button_external_connection_export,          --          button_external_connection.export
			clk_clk                                    => CONNECTED_TO_clk_clk,                                    --                                 clk.clk
			id7_segmentos_1_external_connection_export => CONNECTED_TO_id7_segmentos_1_external_connection_export, -- id7_segmentos_1_external_connection.export
			id7_segmentos_2_external_connection_export => CONNECTED_TO_id7_segmentos_2_external_connection_export, -- id7_segmentos_2_external_connection.export
			id7_segmentos_3_external_connection_export => CONNECTED_TO_id7_segmentos_3_external_connection_export, -- id7_segmentos_3_external_connection.export
			id7_segmentos_4_external_connection_export => CONNECTED_TO_id7_segmentos_4_external_connection_export, -- id7_segmentos_4_external_connection.export
			reset_reset_n                              => CONNECTED_TO_reset_reset_n,                              --                               reset.reset_n
			segmentos_5_external_connection_export     => CONNECTED_TO_segmentos_5_external_connection_export,     --     segmentos_5_external_connection.export
			segmentos_6_external_connection_export     => CONNECTED_TO_segmentos_6_external_connection_export,     --     segmentos_6_external_connection.export
			switchs_external_connection_export         => CONNECTED_TO_switchs_external_connection_export          --         switchs_external_connection.export
		);

