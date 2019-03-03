void pre_rad_st_1ns_snr_30_cfd_tot_threshold_35_percent()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar  2 12:16:08 2019) by ROOT version 6.13/02
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,184,700,502);
   Canvas_1->Range(20.875,-37.53751,22.125,337.8375);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);

   TH1F *DeltaTCFD_WithTWCorr_35__2 = new TH1F("DeltaTCFD_WithTWCorr_35__2","",3000,-50,50);
   DeltaTCFD_WithTWCorr_35__2->SetBinContent(2115,1);
   DeltaTCFD_WithTWCorr_35__2->SetBinContent(2116,11);
   DeltaTCFD_WithTWCorr_35__2->SetBinContent(2117,63);
   DeltaTCFD_WithTWCorr_35__2->SetBinContent(2118,204);
   DeltaTCFD_WithTWCorr_35__2->SetBinContent(2119,286);
   DeltaTCFD_WithTWCorr_35__2->SetBinContent(2120,125);
   DeltaTCFD_WithTWCorr_35__2->SetBinContent(2121,44);
   DeltaTCFD_WithTWCorr_35__2->SetBinContent(2122,5);
   DeltaTCFD_WithTWCorr_35__2->SetEntries(739);

   TF1 *tmpGaus_cfd3 = new TF1("tmpGaus_cfd","gaus",20.4,20.8, TF1::EAddToList::kNo);
   tmpGaus_cfd3->SetFillColor(19);
   tmpGaus_cfd3->SetFillStyle(0);
   tmpGaus_cfd3->SetLineColor(2);
   tmpGaus_cfd3->SetLineWidth(2);
   tmpGaus_cfd3->SetChisquare(1.087872);
   tmpGaus_cfd3->SetNDF(1);
   tmpGaus_cfd3->GetXaxis()->SetLabelFont(42);
   tmpGaus_cfd3->GetXaxis()->SetLabelSize(0.035);
   tmpGaus_cfd3->GetXaxis()->SetTitleSize(0.035);
   tmpGaus_cfd3->GetXaxis()->SetTitleFont(42);
   tmpGaus_cfd3->GetYaxis()->SetLabelFont(42);
   tmpGaus_cfd3->GetYaxis()->SetLabelSize(0.035);
   tmpGaus_cfd3->GetYaxis()->SetTitleSize(0.035);
   tmpGaus_cfd3->GetYaxis()->SetTitleOffset(0);
   tmpGaus_cfd3->GetYaxis()->SetTitleFont(42);
   tmpGaus_cfd3->SetParameter(0,285.0427);
   tmpGaus_cfd3->SetParError(0,14.53139);
   tmpGaus_cfd3->SetParLimits(0,0,0);
   tmpGaus_cfd3->SetParameter(1,20.60833);
   tmpGaus_cfd3->SetParError(1,0.001476331);
   tmpGaus_cfd3->SetParLimits(1,0,0);
   tmpGaus_cfd3->SetParameter(2,0.03298442);
   tmpGaus_cfd3->SetParError(2,0.001430075);
   tmpGaus_cfd3->SetParLimits(2,0,0.2916449);
   tmpGaus_cfd3->SetParent(DeltaTCFD_WithTWCorr_35__2);
   DeltaTCFD_WithTWCorr_35__2->GetListOfFunctions()->Add(tmpGaus_cfd3);

   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("DeltaTCFD_WithTWCorr_35");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 739    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  20.61");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.03482");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   //ptstats->Draw();
   //DeltaTCFD_WithTWCorr_35__2->GetListOfFunctions()->Add(ptstats);
   //ptstats->SetParent(DeltaTCFD_WithTWCorr_35__2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   DeltaTCFD_WithTWCorr_35__2->SetLineColor(ci);
   DeltaTCFD_WithTWCorr_35__2->GetXaxis()->SetTitle("t_{0} [ns]");
   DeltaTCFD_WithTWCorr_35__2->GetXaxis()->SetLabelFont(42);
   DeltaTCFD_WithTWCorr_35__2->GetXaxis()->SetLabelSize(0.035);
   DeltaTCFD_WithTWCorr_35__2->GetXaxis()->SetTitleSize(0.06);
   DeltaTCFD_WithTWCorr_35__2->GetXaxis()->SetTitleFont(42);
   DeltaTCFD_WithTWCorr_35__2->GetYaxis()->SetTitle("Events / 20 [ps]");
   DeltaTCFD_WithTWCorr_35__2->GetYaxis()->SetLabelFont(42);
   DeltaTCFD_WithTWCorr_35__2->GetYaxis()->SetLabelSize(0.035);
   DeltaTCFD_WithTWCorr_35__2->GetYaxis()->SetTitleSize(0.06);
   DeltaTCFD_WithTWCorr_35__2->GetYaxis()->SetTitleOffset(0);
   DeltaTCFD_WithTWCorr_35__2->GetYaxis()->SetTitleFont(42);
   DeltaTCFD_WithTWCorr_35__2->GetZaxis()->SetLabelFont(42);
   DeltaTCFD_WithTWCorr_35__2->GetZaxis()->SetLabelSize(0.035);
   DeltaTCFD_WithTWCorr_35__2->GetZaxis()->SetTitleSize(0.035);
   DeltaTCFD_WithTWCorr_35__2->GetZaxis()->SetTitleFont(42);
   DeltaTCFD_WithTWCorr_35__2->SetStats(0);
   DeltaTCFD_WithTWCorr_35__2->GetXaxis()->SetRangeUser(20.0, 21.0);
   DeltaTCFD_WithTWCorr_35__2->SetMarkerStyle(20);
   DeltaTCFD_WithTWCorr_35__2->SetMarkerColor(kBlue);
   DeltaTCFD_WithTWCorr_35__2->SetMarkerSize(1);
   DeltaTCFD_WithTWCorr_35__2->Draw("E1");
   //DeltaTCFD_WithTWCorr_35__2->Draw("");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
