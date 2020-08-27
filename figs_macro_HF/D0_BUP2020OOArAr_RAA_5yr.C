void D0_BUP2020OOArAr_RAA_5yr()
{
//=========Macro generated from canvas: D0_BUP2020OOArAr_RAA_5yr/D0_BUP2020OOArArO_RAA_5yr
//=========  (Wed Aug 26 18:27:43 2020) by ROOT version 6.16/00
   TCanvas *D0_BUP2020OOArAr_RAA_5yr = new TCanvas("D0_BUP2020OOArAr_RAA_5yr", "D0_BUP2020OOArArO_RAA_5yr",0,0,1100,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   D0_BUP2020OOArAr_RAA_5yr->SetHighLightColor(2);
   D0_BUP2020OOArAr_RAA_5yr->Range(0,0,1,1);
   D0_BUP2020OOArAr_RAA_5yr->SetFillColor(0);
   D0_BUP2020OOArAr_RAA_5yr->SetBorderMode(0);
   D0_BUP2020OOArAr_RAA_5yr->SetBorderSize(2);
   D0_BUP2020OOArAr_RAA_5yr->SetTickx(1);
   D0_BUP2020OOArAr_RAA_5yr->SetTicky(1);
   D0_BUP2020OOArAr_RAA_5yr->SetLeftMargin(0.16);
   D0_BUP2020OOArAr_RAA_5yr->SetRightMargin(0.05);
   D0_BUP2020OOArAr_RAA_5yr->SetTopMargin(0.05);
   D0_BUP2020OOArAr_RAA_5yr->SetBottomMargin(0.16);
   D0_BUP2020OOArAr_RAA_5yr->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: D0_BUP2020OOArAr_RAA_5yr_1
   TPad *D0_BUP2020OOArAr_RAA_5yr_1 = new TPad("D0_BUP2020OOArAr_RAA_5yr_1", "D0_BUP2020OOArAr_RAA_5yr_1",0.01,0.01,0.99,0.99);
   D0_BUP2020OOArAr_RAA_5yr_1->Draw();
   D0_BUP2020OOArAr_RAA_5yr_1->cd();
   D0_BUP2020OOArAr_RAA_5yr_1->Range(-2.227848,-0.243038,11.6962,1.275949);
   D0_BUP2020OOArAr_RAA_5yr_1->SetFillColor(0);
   D0_BUP2020OOArAr_RAA_5yr_1->SetBorderMode(0);
   D0_BUP2020OOArAr_RAA_5yr_1->SetBorderSize(2);
   D0_BUP2020OOArAr_RAA_5yr_1->SetTickx(1);
   D0_BUP2020OOArAr_RAA_5yr_1->SetTicky(1);
   D0_BUP2020OOArAr_RAA_5yr_1->SetLeftMargin(0.16);
   D0_BUP2020OOArAr_RAA_5yr_1->SetRightMargin(0.05);
   D0_BUP2020OOArAr_RAA_5yr_1->SetTopMargin(0.05);
   D0_BUP2020OOArAr_RAA_5yr_1->SetBottomMargin(0.16);
   D0_BUP2020OOArAr_RAA_5yr_1->SetFrameBorderMode(0);
   D0_BUP2020OOArAr_RAA_5yr_1->SetFrameBorderMode(0);
   
   TH1F *hframe__11 = new TH1F("hframe__11","",1000,0,11);
   hframe__11->SetMinimum(0);
   hframe__11->SetMaximum(1.2);
   hframe__11->SetDirectory(0);
   hframe__11->SetStats(0);
   hframe__11->SetLineWidth(2);
   hframe__11->SetMarkerStyle(20);
   hframe__11->SetMarkerSize(1.2);
   hframe__11->GetXaxis()->SetTitle("#it{p}_{T} [GeV]");
   hframe__11->GetXaxis()->SetLabelFont(42);
   hframe__11->GetXaxis()->SetLabelSize(0.05);
   hframe__11->GetXaxis()->SetTitleSize(0.05);
   hframe__11->GetXaxis()->SetTitleOffset(1.4);
   hframe__11->GetXaxis()->SetTitleFont(42);
   hframe__11->GetYaxis()->SetTitle("#it{R}_{AA}");
   hframe__11->GetYaxis()->SetLabelFont(42);
   hframe__11->GetYaxis()->SetLabelSize(0.05);
   hframe__11->GetYaxis()->SetTitleSize(0.05);
   hframe__11->GetYaxis()->SetTitleOffset(1.4);
   hframe__11->GetYaxis()->SetTitleFont(42);
   hframe__11->GetZaxis()->SetLabelFont(42);
   hframe__11->GetZaxis()->SetLabelSize(0.05);
   hframe__11->GetZaxis()->SetTitleSize(0.05);
   hframe__11->GetZaxis()->SetTitleOffset(1);
   hframe__11->GetZaxis()->SetTitleFont(42);
   hframe__11->Draw(" ");
   
   Double_t Graph0_fx1001[20] = {
   0.45,
   0.95,
   1.45,
   1.95,
   2.45,
   2.95,
   3.45,
   3.95,
   4.45,
   4.95,
   5.45,
   5.95,
   6.45,
   6.95,
   7.45,
   7.95,
   8.45,
   8.95,
   9.45,
   9.95};
   Double_t Graph0_fy1001[20] = {
   0.5375912,
   0.7987257,
   1.078158,
   1.162469,
   1.098154,
   0.8777246,
   0.6481578,
   0.5014529,
   0.3921144,
   0.3353954,
   0.3012415,
   0.2763732,
   0.2515049,
   0.2395902,
   0.2276756,
   0.2280616,
   0.2284476,
   0.2299139,
   0.2313802,
   0.234337};
   Double_t Graph0_fex1001[20] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[20] = {
   0.003610642,
   0.00347591,
   0.003210104,
   0.003208978,
   0.003239673,
   0.003024935,
   0.00246308,
   0.002420839,
   0.002461978,
   0.002796421,
   0.003189975,
   0.003776876,
   0.004440655,
   0.005443543,
   0.005740197,
   0.007416826,
   0.009510301,
   0.012145,
   0.01535796,
   0.01940538};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
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
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","Graph",100,0,10.9);
   Graph_Graph01001->SetMinimum(0.119857);
   Graph_Graph01001->SetMaximum(1.260753);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);
   Graph_Graph01001->SetLineWidth(2);
   Graph_Graph01001->SetMarkerStyle(20);
   Graph_Graph01001->SetMarkerSize(1.2);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("p");
   
   Double_t Graph1_fx1002[8] = {
   2.7,
   3.7,
   4.7,
   5.7,
   6.7,
   7.7,
   8.7,
   9.7};
   Double_t Graph1_fy1002[8] = {
   0.9445014,
   0.8627149,
   0.7439378,
   0.6392494,
   0.5599322,
   0.5022965,
   0.4605267,
   0.428259};
   Double_t Graph1_fex1002[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1002[8] = {
   0.05693092,
   0.04520499,
   0.04050037,
   0.04353376,
   0.05065858,
   0.0671563,
   0.08071415,
   0.09972976};
   gre = new TGraphErrors(8,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
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
   
   TH1F *Graph_Graph11002 = new TH1F("Graph_Graph11002","Graph",100,2,10.4);
   Graph_Graph11002->SetMinimum(0.2612389);
   Graph_Graph11002->SetMaximum(1.068723);
   Graph_Graph11002->SetDirectory(0);
   Graph_Graph11002->SetStats(0);
   Graph_Graph11002->SetLineWidth(2);
   Graph_Graph11002->SetMarkerStyle(20);
   Graph_Graph11002->SetMarkerSize(1.2);
   Graph_Graph11002->GetXaxis()->SetLabelFont(42);
   Graph_Graph11002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph11002->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph11002->GetXaxis()->SetTitleFont(42);
   Graph_Graph11002->GetYaxis()->SetLabelFont(42);
   Graph_Graph11002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph11002->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph11002->GetYaxis()->SetTitleFont(42);
   Graph_Graph11002->GetZaxis()->SetLabelFont(42);
   Graph_Graph11002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph11002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11002);
   
   gre->Draw("p");
   
   Double_t Graph2_fx1003[20] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.25,
   2.75,
   3.25,
   3.75,
   4.25,
   4.75,
   5.25,
   5.75,
   6.25,
   6.75,
   7.25,
   7.75,
   8.25,
   8.75,
   9.25,
   9.75};
   Double_t Graph2_fy1003[20] = {
   0.5375912,
   0.7987257,
   1.078158,
   1.162469,
   1.098154,
   0.8777246,
   0.6481578,
   0.5014529,
   0.3921144,
   0.3353954,
   0.3012415,
   0.2763732,
   0.2515049,
   0.2395902,
   0.2276756,
   0.2280616,
   0.2284476,
   0.2299139,
   0.2313802,
   0.234337};
   Double_t Graph2_fex1003[20] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1003[20] = {
   0.002671376,
   0.002571694,
   0.002375034,
   0.002374201,
   0.002396911,
   0.002238034,
   0.00182234,
   0.001791086,
   0.001821524,
   0.002068966,
   0.002360141,
   0.002794367,
   0.003285472,
   0.004027471,
   0.004246954,
   0.005487427,
   0.007036311,
   0.008985625,
   0.01136277,
   0.01435731};
   gre = new TGraphErrors(20,Graph2_fx1003,Graph2_fy1003,Graph2_fex1003,Graph2_fey1003);
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
   
   TH1F *Graph_Graph21003 = new TH1F("Graph_Graph21003","Graph",100,0,10.7);
   Graph_Graph21003->SetMinimum(0.1254934);
   Graph_Graph21003->SetMaximum(1.259329);
   Graph_Graph21003->SetDirectory(0);
   Graph_Graph21003->SetStats(0);
   Graph_Graph21003->SetLineWidth(2);
   Graph_Graph21003->SetMarkerStyle(20);
   Graph_Graph21003->SetMarkerSize(1.2);
   Graph_Graph21003->GetXaxis()->SetLabelFont(42);
   Graph_Graph21003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph21003->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph21003->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph21003->GetXaxis()->SetTitleFont(42);
   Graph_Graph21003->GetYaxis()->SetLabelFont(42);
   Graph_Graph21003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21003->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph21003->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph21003->GetYaxis()->SetTitleFont(42);
   Graph_Graph21003->GetZaxis()->SetLabelFont(42);
   Graph_Graph21003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph21003->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph21003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21003);
   
   gre->Draw("p");
   
   Double_t Graph3_fx1004[8] = {
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5};
   Double_t Graph3_fy1004[8] = {
   0.9445014,
   0.8627149,
   0.7439378,
   0.6392494,
   0.5599322,
   0.5022965,
   0.4605267,
   0.428259};
   Double_t Graph3_fex1004[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1004[8] = {
   0.04212102,
   0.03344545,
   0.02996469,
   0.03220897,
   0.03748036,
   0.04968639,
   0.05971733,
   0.07378626};
   gre = new TGraphErrors(8,Graph3_fx1004,Graph3_fy1004,Graph3_fex1004,Graph3_fey1004);
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
   
   TH1F *Graph_Graph31004 = new TH1F("Graph_Graph31004","Graph",100,1.8,10.2);
   Graph_Graph31004->SetMinimum(0.2912578);
   Graph_Graph31004->SetMaximum(1.049837);
   Graph_Graph31004->SetDirectory(0);
   Graph_Graph31004->SetStats(0);
   Graph_Graph31004->SetLineWidth(2);
   Graph_Graph31004->SetMarkerStyle(20);
   Graph_Graph31004->SetMarkerSize(1.2);
   Graph_Graph31004->GetXaxis()->SetLabelFont(42);
   Graph_Graph31004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph31004->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph31004->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph31004->GetXaxis()->SetTitleFont(42);
   Graph_Graph31004->GetYaxis()->SetLabelFont(42);
   Graph_Graph31004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph31004->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph31004->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph31004->GetYaxis()->SetTitleFont(42);
   Graph_Graph31004->GetZaxis()->SetLabelFont(42);
   Graph_Graph31004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph31004->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph31004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31004);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.37,0.7,0.85,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","#it{#bf{sPHENIX}} Projection, Year 1-5","");
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
   entry=leg->AddEntry("NULL","86 pb^{-1} str. p+p","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.18,0.17,0.55,0.37,NULL,"brNDC");
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
   
   leg = new TLegend(0.28,0.17,0.55,0.37,NULL,"brNDC");
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
   D0_BUP2020OOArAr_RAA_5yr_1->Modified();
   D0_BUP2020OOArAr_RAA_5yr->cd();
   D0_BUP2020OOArAr_RAA_5yr->Modified();
   D0_BUP2020OOArAr_RAA_5yr->cd();
   D0_BUP2020OOArAr_RAA_5yr->SetSelected(D0_BUP2020OOArAr_RAA_5yr);
}
