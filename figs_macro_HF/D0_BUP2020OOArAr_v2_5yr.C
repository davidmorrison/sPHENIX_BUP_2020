void D0_BUP2020OOArAr_v2_5yr()
{
//=========Macro generated from canvas: D0_BUP2020OOArAr_v2_5yr/D0_BUP2020OOArArO_v2_5yr
//=========  (Wed Aug 26 18:27:44 2020) by ROOT version 6.16/00
   TCanvas *D0_BUP2020OOArAr_v2_5yr = new TCanvas("D0_BUP2020OOArAr_v2_5yr", "D0_BUP2020OOArArO_v2_5yr",0,0,1100,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   D0_BUP2020OOArAr_v2_5yr->SetHighLightColor(2);
   D0_BUP2020OOArAr_v2_5yr->Range(0,0,1,1);
   D0_BUP2020OOArAr_v2_5yr->SetFillColor(0);
   D0_BUP2020OOArAr_v2_5yr->SetBorderMode(0);
   D0_BUP2020OOArAr_v2_5yr->SetBorderSize(2);
   D0_BUP2020OOArAr_v2_5yr->SetTickx(1);
   D0_BUP2020OOArAr_v2_5yr->SetTicky(1);
   D0_BUP2020OOArAr_v2_5yr->SetLeftMargin(0.16);
   D0_BUP2020OOArAr_v2_5yr->SetRightMargin(0.05);
   D0_BUP2020OOArAr_v2_5yr->SetTopMargin(0.05);
   D0_BUP2020OOArAr_v2_5yr->SetBottomMargin(0.16);
   D0_BUP2020OOArAr_v2_5yr->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: D0_BUP2020OOArAr_v2_5yr_1
   TPad *D0_BUP2020OOArAr_v2_5yr_1 = new TPad("D0_BUP2020OOArAr_v2_5yr_1", "D0_BUP2020OOArAr_v2_5yr_1",0.01,0.01,0.99,0.99);
   D0_BUP2020OOArAr_v2_5yr_1->Draw();
   D0_BUP2020OOArAr_v2_5yr_1->cd();
   D0_BUP2020OOArAr_v2_5yr_1->Range(-2.227848,-0.1708861,11.6962,0.2721519);
   D0_BUP2020OOArAr_v2_5yr_1->SetFillColor(0);
   D0_BUP2020OOArAr_v2_5yr_1->SetBorderMode(0);
   D0_BUP2020OOArAr_v2_5yr_1->SetBorderSize(2);
   D0_BUP2020OOArAr_v2_5yr_1->SetTickx(1);
   D0_BUP2020OOArAr_v2_5yr_1->SetTicky(1);
   D0_BUP2020OOArAr_v2_5yr_1->SetLeftMargin(0.16);
   D0_BUP2020OOArAr_v2_5yr_1->SetRightMargin(0.05);
   D0_BUP2020OOArAr_v2_5yr_1->SetTopMargin(0.05);
   D0_BUP2020OOArAr_v2_5yr_1->SetBottomMargin(0.16);
   D0_BUP2020OOArAr_v2_5yr_1->SetFrameBorderMode(0);
   D0_BUP2020OOArAr_v2_5yr_1->SetFrameBorderMode(0);
   
   TH1F *hframe__13 = new TH1F("hframe__13","",1000,0,11);
   hframe__13->SetMinimum(-0.1);
   hframe__13->SetMaximum(0.25);
   hframe__13->SetDirectory(0);
   hframe__13->SetStats(0);
   hframe__13->SetLineWidth(2);
   hframe__13->SetMarkerStyle(20);
   hframe__13->SetMarkerSize(1.2);
   hframe__13->GetXaxis()->SetTitle("#it{p}_{T} [GeV]");
   hframe__13->GetXaxis()->SetLabelFont(42);
   hframe__13->GetXaxis()->SetLabelSize(0.05);
   hframe__13->GetXaxis()->SetTitleSize(0.05);
   hframe__13->GetXaxis()->SetTitleOffset(1.4);
   hframe__13->GetXaxis()->SetTitleFont(42);
   hframe__13->GetYaxis()->SetTitle("v_{2}");
   hframe__13->GetYaxis()->SetLabelFont(42);
   hframe__13->GetYaxis()->SetLabelSize(0.05);
   hframe__13->GetYaxis()->SetTitleSize(0.05);
   hframe__13->GetYaxis()->SetTitleOffset(1.4);
   hframe__13->GetYaxis()->SetTitleFont(42);
   hframe__13->GetZaxis()->SetLabelFont(42);
   hframe__13->GetZaxis()->SetLabelSize(0.05);
   hframe__13->GetZaxis()->SetTitleSize(0.05);
   hframe__13->GetZaxis()->SetTitleOffset(1);
   hframe__13->GetZaxis()->SetTitleFont(42);
   hframe__13->Draw(" ");
   
   Double_t Graph0_fx1009[10] = {
   0.7,
   1.7,
   2.7,
   3.7,
   4.7,
   5.7,
   6.7,
   7.7,
   8.7,
   9.7};
   Double_t Graph0_fy1009[10] = {
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075};
   Double_t Graph0_fex1009[10] = {
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
   Double_t Graph0_fey1009[10] = {
   0.005420045,
   0.003004182,
   0.003325981,
   0.004431414,
   0.007443466,
   0.01242233,
   0.02069001,
   0.02957078,
   0.04852389,
   0.07686162};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(4);

   ci = TColor::GetColor("#000000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(2);
   
   TH1F *Graph_Graph01009 = new TH1F("Graph_Graph01009","Graph",100,0,10.6);
   Graph_Graph01009->SetMinimum(-0.01723394);
   Graph_Graph01009->SetMaximum(0.1672339);
   Graph_Graph01009->SetDirectory(0);
   Graph_Graph01009->SetStats(0);
   Graph_Graph01009->SetLineWidth(2);
   Graph_Graph01009->SetMarkerStyle(20);
   Graph_Graph01009->SetMarkerSize(1.2);
   Graph_Graph01009->GetXaxis()->SetLabelFont(42);
   Graph_Graph01009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01009->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01009->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph01009->GetXaxis()->SetTitleFont(42);
   Graph_Graph01009->GetYaxis()->SetLabelFont(42);
   Graph_Graph01009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01009->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01009->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph01009->GetYaxis()->SetTitleFont(42);
   Graph_Graph01009->GetZaxis()->SetLabelFont(42);
   Graph_Graph01009->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph01009->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph01009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01009);
   
   gre->Draw("p");
   
   Double_t Graph1_fx1010[2] = {
   2.3,
   7.3};
   Double_t Graph1_fy1010[2] = {
   0,
   0};
   Double_t Graph1_fex1010[2] = {
   0,
   0};
   Double_t Graph1_fey1010[2] = {
   0.04589704,
   0.07069571};
   gre = new TGraphErrors(2,Graph1_fx1010,Graph1_fy1010,Graph1_fex1010,Graph1_fey1010);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(4);

   ci = TColor::GetColor("#000099");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(2);
   
   TH1F *Graph_Graph11010 = new TH1F("Graph_Graph11010","Graph",100,1.8,7.8);
   Graph_Graph11010->SetMinimum(-0.08483485);
   Graph_Graph11010->SetMaximum(0.08483485);
   Graph_Graph11010->SetDirectory(0);
   Graph_Graph11010->SetStats(0);
   Graph_Graph11010->SetLineWidth(2);
   Graph_Graph11010->SetMarkerStyle(20);
   Graph_Graph11010->SetMarkerSize(1.2);
   Graph_Graph11010->GetXaxis()->SetLabelFont(42);
   Graph_Graph11010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11010->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph11010->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph11010->GetXaxis()->SetTitleFont(42);
   Graph_Graph11010->GetYaxis()->SetLabelFont(42);
   Graph_Graph11010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11010->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph11010->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph11010->GetYaxis()->SetTitleFont(42);
   Graph_Graph11010->GetZaxis()->SetLabelFont(42);
   Graph_Graph11010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11010->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph11010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11010);
   
   gre->Draw("p");
   
   Double_t Graph2_fx1011[10] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5};
   Double_t Graph2_fy1011[10] = {
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075,
   0.075};
   Double_t Graph2_fex1011[10] = {
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
   Double_t Graph2_fey1011[10] = {
   0.003823214,
   0.002119102,
   0.002346094,
   0.003125849,
   0.005250503,
   0.008762518,
   0.01459441,
   0.02085876,
   0.03422798,
   0.05421697};
   gre = new TGraphErrors(10,Graph2_fx1011,Graph2_fy1011,Graph2_fex1011,Graph2_fey1011);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#000000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(4);

   ci = TColor::GetColor("#000000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(2);
   
   TH1F *Graph_Graph21011 = new TH1F("Graph_Graph21011","Graph",100,0,10.4);
   Graph_Graph21011->SetMinimum(0.009939641);
   Graph_Graph21011->SetMaximum(0.1400604);
   Graph_Graph21011->SetDirectory(0);
   Graph_Graph21011->SetStats(0);
   Graph_Graph21011->SetLineWidth(2);
   Graph_Graph21011->SetMarkerStyle(20);
   Graph_Graph21011->SetMarkerSize(1.2);
   Graph_Graph21011->GetXaxis()->SetLabelFont(42);
   Graph_Graph21011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph21011->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph21011->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph21011->GetXaxis()->SetTitleFont(42);
   Graph_Graph21011->GetYaxis()->SetLabelFont(42);
   Graph_Graph21011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21011->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph21011->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph21011->GetYaxis()->SetTitleFont(42);
   Graph_Graph21011->GetZaxis()->SetLabelFont(42);
   Graph_Graph21011->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph21011->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph21011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21011);
   
   gre->Draw("p");
   
   Double_t Graph3_fx1012[2] = {
   2.1,
   7.1};
   Double_t Graph3_fy1012[2] = {
   0,
   0};
   Double_t Graph3_fex1012[2] = {
   0,
   0};
   Double_t Graph3_fey1012[2] = {
   0.03237505,
   0.04986763};
   gre = new TGraphErrors(2,Graph3_fx1012,Graph3_fy1012,Graph3_fex1012,Graph3_fey1012);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(4);

   ci = TColor::GetColor("#000099");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(2);
   
   TH1F *Graph_Graph31012 = new TH1F("Graph_Graph31012","Graph",100,1.6,7.6);
   Graph_Graph31012->SetMinimum(-0.05984116);
   Graph_Graph31012->SetMaximum(0.05984116);
   Graph_Graph31012->SetDirectory(0);
   Graph_Graph31012->SetStats(0);
   Graph_Graph31012->SetLineWidth(2);
   Graph_Graph31012->SetMarkerStyle(20);
   Graph_Graph31012->SetMarkerSize(1.2);
   Graph_Graph31012->GetXaxis()->SetLabelFont(42);
   Graph_Graph31012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph31012->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph31012->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph31012->GetXaxis()->SetTitleFont(42);
   Graph_Graph31012->GetYaxis()->SetLabelFont(42);
   Graph_Graph31012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph31012->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph31012->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph31012->GetYaxis()->SetTitleFont(42);
   Graph_Graph31012->GetZaxis()->SetLabelFont(42);
   Graph_Graph31012->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph31012->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph31012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31012);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.1,0.7,0.55,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","#it{#bf{sPHENIX}} Projection","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","Year 1-5, Res(#Psi_{2})=0.5","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","37 nb^{-1} str. O+O","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","12 nb^{-1} str. Ar+Ar","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.58,0.7,0.95,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("NULL","O+O","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph"," ","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#000000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph"," ","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#000099");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.68,0.7,0.95,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("NULL","Ar+Ar","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Prompt #it{D}^{0}","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#000000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","#it{B}#rightarrow#it{D}^{0}","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#000099");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   leg->Draw();
   D0_BUP2020OOArAr_v2_5yr_1->Modified();
   D0_BUP2020OOArAr_v2_5yr->cd();
   D0_BUP2020OOArAr_v2_5yr->Modified();
   D0_BUP2020OOArAr_v2_5yr->cd();
   D0_BUP2020OOArAr_v2_5yr->SetSelected(D0_BUP2020OOArAr_v2_5yr);
}
