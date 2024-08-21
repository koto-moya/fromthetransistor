module tb_dlatch;

// We make the inputs registers? I am not too sure why.  
// the website says that I can drive them in an initial blcok but why can't I do this with wire?
reg d;
reg en; // en stands for enable.  programmers are absolutely terrible at naming
reg rstn;

reg prev_q; // This is for cheking that q did not change??

wire q;

d_latch     u0 (
            .d  (d),
            .en (en),
            .rstn (rstn),
            .q  (q)
            );


task checker (input d, en, rst, q);
    begin
        #1;
        if (!rstn) begin
            if (q!=0)
                $error("Q is not 0 during reset");      
        end else begin
            if (en) begin 
                if (q != d)
                    $error("Q is not following D when system is enabled (en = 1)");
            end else begin
                if (q != prev_q)
                    $error("Q is changing in between each cycle");
            end
        end
   end
endtask

// do some random testing to see what the output q gives us
task test_1();
    integer i;
    begin
        for (i=0; i < 5; i = i+1) begin 
            #5 en <= ~en; 
            #1 d <= i;
            // then check the out values

            checker(d, en, rstn, q);
            prev_q <= q;    
        end
    end
endtask


task reset_release();
        #10 rstn <= 1; // after 10 time untis set the rstn signal to 1
endtask

initial begin // executes at clk=0.  Could also make this a fuinction instead. using 'function void init()'
    $dumpfile("dump.vcd");
    $dumpvars(0, tb_dlatch);
    d <= 0;
    en <= 0;
    rstn <= 0;

    reset_release();
    test_1();
    #5 $finish;
end


endmodule