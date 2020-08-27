void D0_BUP2020OOArAr_v2_5yr()
{
//=========Macro generated from canvas: D0_BUP2020OOArAr_v2_5yr/D0_BUP2020OOArArO_v2_5yr
//=========  (Wed Aug 26 23:39:08 2020) by ROOT version 6.16/00
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
   
   TH1F *hframe__19 = new TH1F("hframe__19","",1000,0,11);
   hframe__19->SetMinimum(-0.1);
   hframe__19->SetMaximum(0.25);
   hframe__19->SetDirectory(0);
   hframe__19->SetStats(0);
   hframe__19->SetLineWidth(2);
   hframe__19->SetMarkerStyle(20);
   hframe__19->SetMarkerSize(1.2);
   hframe__19->GetXaxis()->SetTitle("#it{p}_{T} [GeV]");
   hframe__19->GetXaxis()->SetLabelFont(42);
   hframe__19->GetXaxis()->SetLabelSize(0.05);
   hframe__19->GetXaxis()->SetTitleSize(0.05);
   hframe__19->GetXaxis()->SetTitleOffset(1.4);
   hframe__19->GetXaxis()->SetTitleFont(42);
   hframe__19->GetYaxis()->SetTitle("v_{2}");
   hframe__19->GetYaxis()->SetLabelFont(42);
   hframe__19->GetYaxis()->SetLabelSize(0.05);
   hframe__19->GetYaxis()->SetTitleSize(0.05);
   hframe__19->GetYaxis()->SetTitleOffset(1.4);
   hframe__19->GetYaxis()->SetTitleFont(42);
   hframe__19->GetZaxis()->SetLabelFont(42);
   hframe__19->GetZaxis()->SetLabelSize(0.05);
   hframe__19->GetZaxis()->SetTitleSize(0.05);
   hframe__19->GetZaxis()->SetTitleOffset(1);
   hframe__19->GetZaxis()->SetTitleFont(42);
   hframe__19->Draw(" ");
   
   Double_t Graph0_fx1013[10] = {
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
   Double_t Graph0_fy1013[10] = {
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
   Double_t Graph0_fex1013[10] = {
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
   Double_t Graph0_fey1013[10] = {
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
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
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
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","Graph",100,0,10.6);
   Graph_Graph01013->SetMinimum(-0.01723394);
   Graph_Graph01013->SetMaximum(0.1672339);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);
   Graph_Graph01013->SetLineWidth(2);
   Graph_Graph01013->SetMarkerStyle(20);
   Graph_Graph01013->SetMarkerSize(1.2);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph01013->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
   gre->Draw("p");
   
   Double_t Graph1_fx1014[2] = {
   2.3,
   7.3};
   Double_t Graph1_fy1014[2] = {
   0,
   0};
   Double_t Graph1_fex1014[2] = {
   0,
   0};
   Double_t Graph1_fey1014[2] = {
   0.04589704,
   0.07069571};
   gre = new TGraphErrors(2,Graph1_fx1014,Graph1_fy1014,Graph1_fex1014,Graph1_fey1014);
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
   
   TH1F *Graph_Graph11014 = new TH1F("Graph_Graph11014","Graph",100,1.8,7.8);
   Graph_Graph11014->SetMinimum(-0.08483485);
   Graph_Graph11014->SetMaximum(0.08483485);
   Graph_Graph11014->SetDirectory(0);
   Graph_Graph11014->SetStats(0);
   Graph_Graph11014->SetLineWidth(2);
   Graph_Graph11014->SetMarkerStyle(20);
   Graph_Graph11014->SetMarkerSize(1.2);
   Graph_Graph11014->GetXaxis()->SetLabelFont(42);
   Graph_Graph11014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11014->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph11014->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph11014->GetXaxis()->SetTitleFont(42);
   Graph_Graph11014->GetYaxis()->SetLabelFont(42);
   Graph_Graph11014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11014->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph11014->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph11014->GetYaxis()->SetTitleFont(42);
   Graph_Graph11014->GetZaxis()->SetLabelFont(42);
   Graph_Graph11014->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11014->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph11014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11014);
   
   gre->Draw("p");
   
   Double_t Graph2_fx1015[10] = {
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
   Double_t Graph2_fy1015[10] = {
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
   Double_t Graph2_fex1015[10] = {
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
   Double_t Graph2_fey1015[10] = {
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
   gre = new TGraphErrors(10,Graph2_fx1015,Graph2_fy1015,Graph2_fex1015,Graph2_fey1015);
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
   
   TH1F *Graph_Graph21015 = new TH1F("Graph_Graph21015","Graph",100,0,10.4);
   Graph_Graph21015->SetMinimum(0.009939641);
   Graph_Graph21015->SetMaximum(0.1400604);
   Graph_Graph21015->SetDirectory(0);
   Graph_Graph21015->SetStats(0);
   Graph_Graph21015->SetLineWidth(2);
   Graph_Graph21015->SetMarkerStyle(20);
   Graph_Graph21015->SetMarkerSize(1.2);
   Graph_Graph21015->GetXaxis()->SetLabelFont(42);
   Graph_Graph21015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph21015->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph21015->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph21015->GetXaxis()->SetTitleFont(42);
   Graph_Graph21015->GetYaxis()->SetLabelFont(42);
   Graph_Graph21015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21015->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph21015->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph21015->GetYaxis()->SetTitleFont(42);
   Graph_Graph21015->GetZaxis()->SetLabelFont(42);
   Graph_Graph21015->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph21015->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph21015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21015);
   
   gre->Draw("p");
   
   Double_t Graph3_fx1016[2] = {
   2.1,
   7.1};
   Double_t Graph3_fy1016[2] = {
   0,
   0};
   Double_t Graph3_fex1016[2] = {
   0,
   0};
   Double_t Graph3_fey1016[2] = {
   0.03237505,
   0.04986763};
   gre = new TGraphErrors(2,Graph3_fx1016,Graph3_fy1016,Graph3_fex1016,Graph3_fey1016);
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
   
   TH1F *Graph_Graph31016 = new TH1F("Graph_Graph31016","Graph",100,1.6,7.6);
   Graph_Graph31016->SetMinimum(-0.05984116);
   Graph_Graph31016->SetMaximum(0.05984116);
   Graph_Graph31016->SetDirectory(0);
   Graph_Graph31016->SetStats(0);
   Graph_Graph31016->SetLineWidth(2);
   Graph_Graph31016->SetMarkerStyle(20);
   Graph_Graph31016->SetMarkerSize(1.2);
   Graph_Graph31016->GetXaxis()->SetLabelFont(42);
   Graph_Graph31016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph31016->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph31016->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph31016->GetXaxis()->SetTitleFont(42);
   Graph_Graph31016->GetYaxis()->SetLabelFont(42);
   Graph_Graph31016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph31016->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph31016->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph31016->GetYaxis()->SetTitleFont(42);
   Graph_Graph31016->GetZaxis()->SetLabelFont(42);
   Graph_Graph31016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph31016->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph31016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31016);
   
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
