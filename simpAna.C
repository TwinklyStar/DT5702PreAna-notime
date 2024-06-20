{
	gROOT->Reset();

	ff = new TFile("mppcjpnt_xxx.root");
	tt = (TTree*) ff->Get("mppcjp");

	uint16_t ADC_value[32];
	UInt_t run_ID;

	tt->SetBranchAddress("ADC_ch00", &ADC_value[0]);
	tt->SetBranchAddress("ADC_ch01", &ADC_value[1]);
	tt->SetBranchAddress("ADC_ch02", &ADC_value[2]);
	tt->SetBranchAddress("ADC_ch03", &ADC_value[3]);
	tt->SetBranchAddress("ADC_ch04", &ADC_value[4]);
	tt->SetBranchAddress("ADC_ch05", &ADC_value[5]);
	tt->SetBranchAddress("ADC_ch06", &ADC_value[6]);
	tt->SetBranchAddress("ADC_ch07", &ADC_value[7]);
	tt->SetBranchAddress("ADC_ch08", &ADC_value[8]);
	tt->SetBranchAddress("ADC_ch09", &ADC_value[9]);
	tt->SetBranchAddress("ADC_ch10", &ADC_value[10]);
	tt->SetBranchAddress("ADC_ch11", &ADC_value[11]);
	tt->SetBranchAddress("ADC_ch12", &ADC_value[12]);
	tt->SetBranchAddress("ADC_ch13", &ADC_value[13]);
	tt->SetBranchAddress("ADC_ch14", &ADC_value[14]);
	tt->SetBranchAddress("ADC_ch15", &ADC_value[15]);
	tt->SetBranchAddress("ADC_ch16", &ADC_value[16]);
	tt->SetBranchAddress("ADC_ch17", &ADC_value[17]);
	tt->SetBranchAddress("ADC_ch18", &ADC_value[18]);
	tt->SetBranchAddress("ADC_ch19", &ADC_value[19]);
	tt->SetBranchAddress("ADC_ch20", &ADC_value[20]);
	tt->SetBranchAddress("ADC_ch21", &ADC_value[21]);
	tt->SetBranchAddress("ADC_ch22", &ADC_value[22]);
	tt->SetBranchAddress("ADC_ch23", &ADC_value[23]);
	tt->SetBranchAddress("ADC_ch24", &ADC_value[24]);
	tt->SetBranchAddress("ADC_ch25", &ADC_value[25]);
	tt->SetBranchAddress("ADC_ch26", &ADC_value[26]);
	tt->SetBranchAddress("ADC_ch27", &ADC_value[27]);
	tt->SetBranchAddress("ADC_ch28", &ADC_value[28]);
	tt->SetBranchAddress("ADC_ch29", &ADC_value[29]);
	tt->SetBranchAddress("ADC_ch30", &ADC_value[30]);
	tt->SetBranchAddress("ADC_ch31", &ADC_value[31]);
	tt->SetBranchAddress("run_ID", &run_ID);

	Long64_t nentries = tt->GetEntriesFast();
	uint32_t sec_cnt_last, ts_ref_last, err_sec_cnt=0;
	Double_t ADC_th = 350;
	std::vector<uint16_t> ADC_vec;
	TFile* fo = new TFile("simpAna.root", "recreate");
	TH1F* hh = new TH1F("htemp", "htemp", 500, 0, 4088);

	for (int ientry=0; ientry < nentries; ientry++){
		tt->GetEntry(ientry);
        // **** Begin your code ****



	}

	fo->Write();
	fo->Close();
	


}
