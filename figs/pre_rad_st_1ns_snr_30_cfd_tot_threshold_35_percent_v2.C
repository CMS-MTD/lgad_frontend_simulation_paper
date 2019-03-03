void pre_rad_st_1ns_snr_30_cfd_tot_threshold_35_percent_v2()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar  2 12:36:03 2019) by ROOT version 6.13/02
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,206,700,504);
   Canvas_1->Range(19.875,-39.75714,21.125,357.8143);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);

   TH1F *DeltaTCFD_WithTWCorr_35__2__1 = new TH1F("DeltaTCFD_WithTWCorr_35__2__1","",3000,-50,50);
   DeltaTCFD_WithTWCorr_35__2__1->SetBinContent(2115,1);
   DeltaTCFD_WithTWCorr_35__2__1->SetBinContent(2116,11);
   DeltaTCFD_WithTWCorr_35__2__1->SetBinContent(2117,63);
   DeltaTCFD_WithTWCorr_35__2__1->SetBinContent(2118,204);
   DeltaTCFD_WithTWCorr_35__2__1->SetBinContent(2119,286);
   DeltaTCFD_WithTWCorr_35__2__1->SetBinContent(2120,125);
   DeltaTCFD_WithTWCorr_35__2__1->SetBinContent(2121,44);
   DeltaTCFD_WithTWCorr_35__2__1->SetBinContent(2122,5);
   DeltaTCFD_WithTWCorr_35__2__1->SetEntries(739);
   DeltaTCFD_WithTWCorr_35__2__1->SetStats(0);

   TF1 *tmpGaus_cfd1 = new TF1("tmpGaus_cfd","gaus",20.4,20.8, TF1::EAddToList::kNo);
   tmpGaus_cfd1->SetFillColor(19);
   tmpGaus_cfd1->SetFillStyle(0);
   tmpGaus_cfd1->SetLineColor(2);
   tmpGaus_cfd1->SetLineWidth(2);
   tmpGaus_cfd1->SetChisquare(1.087872);
   tmpGaus_cfd1->SetNDF(1);
   tmpGaus_cfd1->GetXaxis()->SetLabelFont(42);
   tmpGaus_cfd1->GetXaxis()->SetLabelSize(0.035);
   tmpGaus_cfd1->GetXaxis()->SetTitleSize(0.035);
   tmpGaus_cfd1->GetXaxis()->SetTitleFont(42);
   tmpGaus_cfd1->GetYaxis()->SetLabelFont(42);
   tmpGaus_cfd1->GetYaxis()->SetLabelSize(0.035);
   tmpGaus_cfd1->GetYaxis()->SetTitleSize(0.035);
   tmpGaus_cfd1->GetYaxis()->SetTitleOffset(0);
   tmpGaus_cfd1->GetYaxis()->SetTitleFont(42);
   tmpGaus_cfd1->SetParameter(0,285.0427);
   tmpGaus_cfd1->SetParError(0,14.53139);
   tmpGaus_cfd1->SetParLimits(0,0,0);
   tmpGaus_cfd1->SetParameter(1,20.60833);
   tmpGaus_cfd1->SetParError(1,0.001476331);
   tmpGaus_cfd1->SetParLimits(1,0,0);
   tmpGaus_cfd1->SetParameter(2,0.03298442);
   tmpGaus_cfd1->SetParError(2,0.001430075);
   tmpGaus_cfd1->SetParLimits(2,0,0.2916449);
   tmpGaus_cfd1->SetParent(DeltaTCFD_WithTWCorr_35__2__1);
   DeltaTCFD_WithTWCorr_35__2__1->GetListOfFunctions()->Add(tmpGaus_cfd1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   DeltaTCFD_WithTWCorr_35__2__1->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   DeltaTCFD_WithTWCorr_35__2__1->SetMarkerColor(ci);
   DeltaTCFD_WithTWCorr_35__2__1->SetMarkerStyle(20);
   DeltaTCFD_WithTWCorr_35__2__1->GetXaxis()->SetTitle("t_{0} [ns]");
   DeltaTCFD_WithTWCorr_35__2__1->GetXaxis()->SetRange(2101,2130);
   DeltaTCFD_WithTWCorr_35__2__1->GetXaxis()->SetLabelFont(42);
   DeltaTCFD_WithTWCorr_35__2__1->GetXaxis()->SetLabelSize(0.035);
   DeltaTCFD_WithTWCorr_35__2__1->GetXaxis()->SetTitleSize(0.06);
   DeltaTCFD_WithTWCorr_35__2__1->GetXaxis()->SetTitleOffset(0.75);
   DeltaTCFD_WithTWCorr_35__2__1->GetXaxis()->SetTitleFont(42);
   DeltaTCFD_WithTWCorr_35__2__1->GetYaxis()->SetTitle("Events / 20 [ps]");
   DeltaTCFD_WithTWCorr_35__2__1->GetYaxis()->SetLabelFont(42);
   DeltaTCFD_WithTWCorr_35__2__1->GetYaxis()->SetLabelSize(0.035);
   DeltaTCFD_WithTWCorr_35__2__1->GetYaxis()->SetTitleSize(0.06);
   DeltaTCFD_WithTWCorr_35__2__1->GetYaxis()->SetTitleOffset(0.7);
   DeltaTCFD_WithTWCorr_35__2__1->GetYaxis()->SetTitleFont(42);
   DeltaTCFD_WithTWCorr_35__2__1->GetZaxis()->SetLabelFont(42);
   DeltaTCFD_WithTWCorr_35__2__1->GetZaxis()->SetLabelSize(0.035);
   DeltaTCFD_WithTWCorr_35__2__1->GetZaxis()->SetTitleSize(0.035);
   DeltaTCFD_WithTWCorr_35__2__1->GetZaxis()->SetTitleFont(42);
   DeltaTCFD_WithTWCorr_35__2__1->Draw("E1");

   TLatex *tex = new TLatex();
   tex->SetNDC();
   tex->SetTextSize(0.060);
   tex->SetTextFont(42);
   tex->SetTextColor(kBlack);
   tex->DrawLatex(0.18, 0.75, "#sigma_{t} = 32.9 #pm 1.4 ps");
   tex->Draw();

   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
   Canvas_1->SaveAs("pre_rad_st_1ns_snr_30_cfd_tot_threshold_35_percent_v2.pdf");
   Canvas_1->SaveAs("pre_rad_st_1ns_snr_30_cfd_tot_threshold_35_percent_v2.png");
}
