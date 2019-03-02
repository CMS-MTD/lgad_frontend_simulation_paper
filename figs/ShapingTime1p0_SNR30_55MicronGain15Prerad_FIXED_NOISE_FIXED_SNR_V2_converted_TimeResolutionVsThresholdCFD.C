void ShapingTime1p0_SNR30_55MicronGain15Prerad_FIXED_NOISE_FIXED_SNR_V2_converted.root_TimeResolutionVsThresholdCFD()
{
//=========Macro generated from canvas: cv/cv
//=========  (Tue Nov 27 14:40:26 2018) by ROOT version 6.12/06
   TCanvas *cv = new TCanvas("cv", "cv",0,0,800,800);
   cv->SetHighLightColor(2);
   cv->Range(-7.387501,-25,96.0375,225);
   cv->SetFillColor(0);
   cv->SetBorderMode(0);
   cv->SetBorderSize(2);
   cv->SetFrameBorderMode(0);
   cv->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1003[14] = {
   5,
   10,
   15,
   20,
   25,
   30,
   35,
   40,
   45,
   50,
   60,
   70,
   80,
   90};
   Double_t Graph0_fy1003[14] = {
   73.44545,
   52.95073,
   44.22544,
   38.63715,
   37.99802,
   31.66949,
   33.4536,
   29.91258,
   38.21934,
   30.9702,
   30.17662,
   31.08592,
   28.68655,
   17.70318};
   Double_t Graph0_fex1003[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1003[14] = {
   2.454333,
   2.002574,
   1.590048,
   1.51431,
   1.415648,
   1.282756,
   1.484785,
   1.099738,
   2.088004,
   1.236844,
   1.142529,
   1.199148,
   1.031861,
   49004.71};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("Time Resolution Vs CFD Threshold");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(2);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Time Resolution Vs CFD Threshold",100,0,98.5);
   Graph_Graph1003->SetMinimum(0);
   Graph_Graph1003->SetMaximum(200);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetTitle(" CFD Threshold [%] ");
   Graph_Graph1003->GetXaxis()->SetRange(4,87);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle(" Time Resolution [ ps ] ");
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1004[14] = {
   5,
   10,
   15,
   20,
   25,
   30,
   35,
   40,
   45,
   50,
   60,
   70,
   80,
   90};
   Double_t Graph1_fy1004[14] = {
   69.45216,
   52.85264,
   40.74806,
   40.42958,
   37.18009,
   34.35215,
   32.98442,
   36.65791,
   34.18026,
   34.58938,
   33.327,
   33.82729,
   33.276,
   17.70318};
   Double_t Graph1_fex1004[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1004[14] = {
   2.214058,
   1.96243,
   1.696398,
   2.438923,
   1.937709,
   1.576756,
   1.430075,
   1.87123,
   1.517676,
   1.633468,
   1.50179,
   1.533985,
   1.433691,
   49004.71};
   gre = new TGraphErrors(14,Graph1_fx1004,Graph1_fy1004,Graph1_fex1004,Graph1_fey1004);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,0,98.5);
   Graph_Graph1004->SetMinimum(-58787.95);
   Graph_Graph1004->SetMaximum(58823.35);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetTitle(" CFD Threshold [ % ] ");
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetTitle(" Time Resolution [ ps ] ");
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("p");
   TLine *line = new TLine(3,30,85,30);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   
   TLegend *leg = new TLegend(0.2,0.6,0.5,0.8,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph0","No Timewalk Correction","L");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","With Timewalk Correction","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.94,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Time Resolution Vs CFD Threshold");
   pt->Draw();
   cv->Modified();
   cv->cd();
   cv->SetSelected(cv);
}
