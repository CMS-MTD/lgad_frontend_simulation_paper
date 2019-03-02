void ShapingTime1p0_SNR30_55MicronGain15Prerad_FIXED_NOISE_FIXED_SNR_V2_converted.root_TimeResolutionVsThresholdToT()
{
//=========Macro generated from canvas: cv/cv
//=========  (Tue Nov 27 14:40:26 2018) by ROOT version 6.12/06
   TCanvas *cv = new TCanvas("cv", "cv",0,0,800,800);
   cv->SetHighLightColor(2);
   cv->Range(-4.545,-25,40.905,225);
   cv->SetFillColor(0);
   cv->SetBorderMode(0);
   cv->SetBorderSize(2);
   cv->SetFrameBorderMode(0);
   cv->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[11] = {
   3,
   6,
   9,
   12,
   15,
   18,
   21,
   24,
   27,
   30,
   33};
   Double_t Graph0_fy1001[11] = {
   82.18283,
   67.44944,
   67.58153,
   69.04253,
   75.95068,
   88.19197,
   93.0968,
   103.106,
   109.7121,
   121.8061,
   139.2497};
   Double_t Graph0_fex1001[11] = {
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
   Double_t Graph0_fey1001[11] = {
   2.74692,
   2.917685,
   2.868996,
   3.049315,
   3.222171,
   4.720486,
   4.58292,
   5.117279,
   4.19406,
   4.90006,
   5.731962};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Time Resolution Vs LE Threshold");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Time Resolution Vs LE Threshold",100,0,36);
   Graph_Graph1001->SetMinimum(0);
   Graph_Graph1001->SetMaximum(200);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle(" LE Threshold [ mV ] ");
   Graph_Graph1001->GetXaxis()->SetRange(1,101);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle(" Time Resolution [ ps ] ");
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1002[11] = {
   3,
   6,
   9,
   12,
   15,
   18,
   21,
   24,
   27,
   30,
   33};
   Double_t Graph1_fy1002[11] = {
   77.84835,
   53.86288,
   49.9494,
   43.0647,
   42.64883,
   42.46754,
   41.69014,
   41.64388,
   41.53588,
   37.66309,
   37.26854};
   Double_t Graph1_fex1002[11] = {
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
   Double_t Graph1_fey1002[11] = {
   3.029644,
   2.061513,
   2.102293,
   1.943366,
   1.887156,
   1.883915,
   1.751294,
   1.759332,
   2.599165,
   1.984598,
   1.35483};
   gre = new TGraphErrors(11,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
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
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,0,36);
   Graph_Graph1002->SetMinimum(31.15854);
   Graph_Graph1002->SetMaximum(85.39795);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetTitle(" LE Threshold [ mV ] ");
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetTitle(" Time Resolution [ ps ] ");
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("p");
   TLine *line = new TLine(0,30,35,30);

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
   TText *pt_LaTex = pt->AddText("Time Resolution Vs LE Threshold");
   pt->Draw();
   cv->Modified();
   cv->cd();
   cv->SetSelected(cv);
}
