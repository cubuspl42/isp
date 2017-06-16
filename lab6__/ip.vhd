
	
	interrupt_control: process(clk_i, rst_i)
	begin
		if rst_i = '1' then
			interrupt <= '0';
		elsif clk_i'event and clk_i = '1' then
			if interrupt_ack = '1' then
				interrupt <= '0';
			elsif next_frame = '1' then
				interrupt <= '1';
			else
				interrupt <= interrupt;
			end if;
		end if;
	end process interrupt_control;
