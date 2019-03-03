void pre_rad_st_1ns_snr_30_le_tot_threshold_30mV()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar  2 11:45:33 2019) by ROOT version 6.13/02
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,184,700,502);
   Canvas_1->Range(20.875,-31.36875,22.125,282.3188);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);

   TH1F *DeltaTToT_WithTWCorr_30__1__1 = new TH1F("DeltaTToT_WithTWCorr_30__1__1","",3000,-50,50);
   DeltaTToT_WithTWCorr_30__1__1->SetBinContent(0,4);
   DeltaTToT_WithTWCorr_30__1__1->SetBinContent(2145,2);
   DeltaTToT_WithTWCorr_30__1__1->SetBinContent(2146,19);
   DeltaTToT_WithTWCorr_30__1__1->SetBinContent(2147,103);
   DeltaTToT_WithTWCorr_30__1__1->SetBinContent(2148,229);
   DeltaTToT_WithTWCorr_30__1__1->SetBinContent(2149,239);
   DeltaTToT_WithTWCorr_30__1__1->SetBinContent(2150,111);
   DeltaTToT_WithTWCorr_30__1__1->SetBinContent(2151,27);
   DeltaTToT_WithTWCorr_30__1__1->SetBinContent(2152,4);
   DeltaTToT_WithTWCorr_30__1__1->SetBinContent(2153,1);
   DeltaTToT_WithTWCorr_30__1__1->SetEntries(739);
   DeltaTToT_WithTWCorr_30__1__1->SetStats(0);
   DeltaTToT_WithTWCorr_30__1__1->SetTitle("");
   TF1 *tmpGaus_tw1 = new TF1("tmpGaus_tw","gaus",21.4,21.8, TF1::EAddToList::kNo);
   tmpGaus_tw1->SetFillColor(19);
   tmpGaus_tw1->SetFillStyle(0);
   tmpGaus_tw1->SetLineColor(2);
   tmpGaus_tw1->SetLineWidth(2);
   tmpGaus_tw1->SetChisquare(0.02983456);
   tmpGaus_tw1->SetNDF(1);
   tmpGaus_tw1->GetXaxis()->SetLabelFont(42);
   tmpGaus_tw1->GetXaxis()->SetLabelSize(0.035);
   tmpGaus_tw1->GetXaxis()->SetTitleSize(0.035);
   tmpGaus_tw1->GetXaxis()->SetTitleFont(42);
   tmpGaus_tw1->GetYaxis()->SetLabelFont(42);
   tmpGaus_tw1->GetYaxis()->SetLabelSize(0.035);
   tmpGaus_tw1->GetYaxis()->SetTitleSize(0.035);
   tmpGaus_tw1->GetYaxis()->SetTitleOffset(0);
   tmpGaus_tw1->GetYaxis()->SetTitleFont(42);
   tmpGaus_tw1->SetParameter(0,258.1769);
   tmpGaus_tw1->SetParError(0,13.60175);
   tmpGaus_tw1->SetParLimits(0,0,0);
   tmpGaus_tw1->SetParameter(1,21.60121);
   tmpGaus_tw1->SetParError(1,0.001741909);
   tmpGaus_tw1->SetParLimits(1,0,0);
   tmpGaus_tw1->SetParameter(2,0.03766309);
   tmpGaus_tw1->SetParError(2,0.001984598);
   tmpGaus_tw1->SetParLimits(2,0,0.3121511);
   tmpGaus_tw1->SetParent(DeltaTToT_WithTWCorr_30__1__1);
   DeltaTToT_WithTWCorr_30__1__1->GetListOfFunctions()->Add(tmpGaus_tw1);

   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("DeltaTToT_WithTWCorr_30__1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 739    ");
   ptstats_LaTex = ptstats->AddText("Mean  =   21.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.03842");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   //DeltaTToT_WithTWCorr_30__1__1->GetListOfFunctions()->Add(ptstats);
   //ptstats->SetParent(DeltaTToT_WithTWCorr_30__1__1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   DeltaTToT_WithTWCorr_30__1__1->SetLineColor(ci);
   DeltaTToT_WithTWCorr_30__1__1->GetXaxis()->SetTitle("t_{0} [ns]");
   DeltaTToT_WithTWCorr_30__1__1->GetXaxis()->SetRange(2131,2160);
   DeltaTToT_WithTWCorr_30__1__1->GetXaxis()->SetLabelFont(42);
   DeltaTToT_WithTWCorr_30__1__1->GetXaxis()->SetLabelSize(0.035);
   DeltaTToT_WithTWCorr_30__1__1->GetXaxis()->SetTitleSize(0.06);
   DeltaTToT_WithTWCorr_30__1__1->GetXaxis()->SetTitleOffset(0.75);
   DeltaTToT_WithTWCorr_30__1__1->GetXaxis()->SetTitleFont(42);
   DeltaTToT_WithTWCorr_30__1__1->GetYaxis()->SetTitle("Events / 20 [ps]");
   DeltaTToT_WithTWCorr_30__1__1->GetYaxis()->SetLabelFont(42);
   DeltaTToT_WithTWCorr_30__1__1->GetYaxis()->SetLabelSize(0.035);
   DeltaTToT_WithTWCorr_30__1__1->GetYaxis()->SetTitleSize(0.06);
   DeltaTToT_WithTWCorr_30__1__1->GetYaxis()->SetTitleOffset(0.7);
   DeltaTToT_WithTWCorr_30__1__1->GetYaxis()->SetTitleFont(42);
   DeltaTToT_WithTWCorr_30__1__1->GetZaxis()->SetLabelFont(42);
   DeltaTToT_WithTWCorr_30__1__1->GetZaxis()->SetLabelSize(0.035);
   DeltaTToT_WithTWCorr_30__1__1->GetZaxis()->SetTitleSize(0.035);
   DeltaTToT_WithTWCorr_30__1__1->GetZaxis()->SetTitleFont(42);
   DeltaTToT_WithTWCorr_30__1__1->SetMarkerStyle(20);
   DeltaTToT_WithTWCorr_30__1__1->SetMarkerColor(kBlue);
   DeltaTToT_WithTWCorr_30__1__1->SetMarkerSize(1);
   DeltaTToT_WithTWCorr_30__1__1->Draw("E1");

   TLatex *tex = new TLatex();
   tex->SetNDC();
   tex->SetTextSize(0.060);
   tex->SetTextFont(42);
   tex->SetTextColor(kBlack);
   tex->DrawLatex(0.18, 0.75, "#sigma_{t} = 37.6 #pm 2.0 ps");
   //tex->DrawLatex(0.4, 0.92, "Razor H#rightarrow#gamma#gamma Search");
   tex->Draw();

   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
   Canvas_1->SaveAs("pre_rad_st_1ns_snr_30_le_tot_threshold_30mV.pdf");
   Canvas_1->SaveAs("pre_rad_st_1ns_snr_30_le_tot_threshold_30mV.png");
}
