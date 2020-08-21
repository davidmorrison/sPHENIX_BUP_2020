void 200pp_pythia8_CTEQ6L_7GeV_ALL.cfg_eneg_DSTReader.root_Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70()
{
//=========Macro generated from canvas: Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70/Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70
//=========  (Thu Aug 20 23:48:21 2020) by ROOT version 6.16/00
   TCanvas *Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70 = new TCanvas("Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70", "Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70",0,585,1100,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70->Range(0,0,1,1);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70->SetFillColor(0);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70->SetBorderMode(0);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70->SetBorderSize(2);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70->SetTickx(1);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70->SetTicky(1);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70->SetLeftMargin(0.16);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70->SetRightMargin(0.05);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70->SetTopMargin(0.05);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70->SetBottomMargin(0.16);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1
   TPad *Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1 = new TPad("Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1", "Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1",0.01,0.01,0.99,0.99);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1->Draw();
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1->cd();
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1->Range(9.936709,-0.1810127,41.58228,0.3253165);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1->SetFillColor(0);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1->SetBorderMode(0);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1->SetBorderSize(2);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1->SetTickx(1);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1->SetTicky(1);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1->SetLeftMargin(0.16);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1->SetRightMargin(0.05);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1->SetTopMargin(0.05);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1->SetBottomMargin(0.16);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1->SetFrameBorderMode(0);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1->SetFrameBorderMode(0);
   
   TH1F *hframe__5 = new TH1F("hframe__5","",1000,15,40);
   hframe__5->SetMinimum(-0.1);
   hframe__5->SetMaximum(0.3);
   hframe__5->SetDirectory(0);
   hframe__5->SetStats(0);
   hframe__5->SetLineWidth(2);
   hframe__5->SetMarkerStyle(20);
   hframe__5->SetMarkerSize(1.2);
   hframe__5->GetXaxis()->SetTitle("p_{T} [GeV]");
   hframe__5->GetXaxis()->SetLabelFont(42);
   hframe__5->GetXaxis()->SetLabelSize(0.05);
   hframe__5->GetXaxis()->SetTitleSize(0.05);
   hframe__5->GetXaxis()->SetTitleOffset(1.4);
   hframe__5->GetXaxis()->SetTitleFont(42);
   hframe__5->GetYaxis()->SetTitle("v_{2}");
   hframe__5->GetYaxis()->SetLabelFont(42);
   hframe__5->GetYaxis()->SetLabelSize(0.05);
   hframe__5->GetYaxis()->SetTitleSize(0.05);
   hframe__5->GetYaxis()->SetTitleOffset(1.4);
   hframe__5->GetYaxis()->SetTitleFont(42);
   hframe__5->GetZaxis()->SetLabelFont(42);
   hframe__5->GetZaxis()->SetLabelSize(0.05);
   hframe__5->GetZaxis()->SetTitleSize(0.05);
   hframe__5->GetZaxis()->SetTitleOffset(1);
   hframe__5->GetZaxis()->SetTitleFont(42);
   hframe__5->Draw(" ");
   
   Double_t ge_h_b_copyv21978035166_fx1004[4] = {
   16.8,
   21.8,
   26.8,
   31.8};
   Double_t ge_h_b_copyv21978035166_fy1004[4] = {
   0,
   0,
   0,
   0};
   Double_t ge_h_b_copyv21978035166_fex1004[4] = {
   0,
   0,
   0,
   0};
   Double_t ge_h_b_copyv21978035166_fey1004[4] = {
   0.005594626,
   0.0134522,
   0.03073545,
   0.06764951};
   TGraphErrors *gre = new TGraphErrors(4,ge_h_b_copyv21978035166_fx1004,ge_h_b_copyv21978035166_fy1004,ge_h_b_copyv21978035166_fex1004,ge_h_b_copyv21978035166_fey1004);
   gre->SetName("ge_h_b_copyv21978035166");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000066");
   gre->SetLineColor(ci);
   gre->SetLineWidth(4);

   ci = TColor::GetColor("#000066");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(3);
   
   TH1F *Graph_ge_h_b_copyv219780351661004 = new TH1F("Graph_ge_h_b_copyv219780351661004","Graph",100,15.3,33.3);
   Graph_ge_h_b_copyv219780351661004->SetMinimum(-0.08117941);
   Graph_ge_h_b_copyv219780351661004->SetMaximum(0.08117941);
   Graph_ge_h_b_copyv219780351661004->SetDirectory(0);
   Graph_ge_h_b_copyv219780351661004->SetStats(0);
   Graph_ge_h_b_copyv219780351661004->SetLineWidth(2);
   Graph_ge_h_b_copyv219780351661004->SetMarkerStyle(20);
   Graph_ge_h_b_copyv219780351661004->SetMarkerSize(1.2);
   Graph_ge_h_b_copyv219780351661004->GetXaxis()->SetLabelFont(42);
   Graph_ge_h_b_copyv219780351661004->GetXaxis()->SetLabelSize(0.05);
   Graph_ge_h_b_copyv219780351661004->GetXaxis()->SetTitleSize(0.05);
   Graph_ge_h_b_copyv219780351661004->GetXaxis()->SetTitleOffset(1.4);
   Graph_ge_h_b_copyv219780351661004->GetXaxis()->SetTitleFont(42);
   Graph_ge_h_b_copyv219780351661004->GetYaxis()->SetLabelFont(42);
   Graph_ge_h_b_copyv219780351661004->GetYaxis()->SetLabelSize(0.05);
   Graph_ge_h_b_copyv219780351661004->GetYaxis()->SetTitleSize(0.05);
   Graph_ge_h_b_copyv219780351661004->GetYaxis()->SetTitleOffset(1.4);
   Graph_ge_h_b_copyv219780351661004->GetYaxis()->SetTitleFont(42);
   Graph_ge_h_b_copyv219780351661004->GetZaxis()->SetLabelFont(42);
   Graph_ge_h_b_copyv219780351661004->GetZaxis()->SetLabelSize(0.05);
   Graph_ge_h_b_copyv219780351661004->GetZaxis()->SetTitleSize(0.05);
   Graph_ge_h_b_copyv219780351661004->GetZaxis()->SetTitleOffset(1);
   Graph_ge_h_b_copyv219780351661004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_ge_h_b_copyv219780351661004);
   
   gre->Draw("pe");
   
   Double_t ge_h_b_copyv21227128738_fx1005[4] = {
   18.2,
   23.2,
   28.2,
   33.2};
   Double_t ge_h_b_copyv21227128738_fy1005[4] = {
   0,
   0,
   0,
   0};
   Double_t ge_h_b_copyv21227128738_fex1005[4] = {
   0,
   0,
   0,
   0};
   Double_t ge_h_b_copyv21227128738_fey1005[4] = {
   0.005014966,
   0.01205842,
   0.02755095,
   0.06064033};
   gre = new TGraphErrors(4,ge_h_b_copyv21227128738_fx1005,ge_h_b_copyv21227128738_fy1005,ge_h_b_copyv21227128738_fex1005,ge_h_b_copyv21227128738_fey1005);
   gre->SetName("ge_h_b_copyv21227128738");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#006633");
   gre->SetLineColor(ci);
   gre->SetLineWidth(4);

   ci = TColor::GetColor("#006633");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(33);
   gre->SetMarkerSize(3);
   
   TH1F *Graph_ge_h_b_copyv212271287381005 = new TH1F("Graph_ge_h_b_copyv212271287381005","Graph",100,16.7,34.7);
   Graph_ge_h_b_copyv212271287381005->SetMinimum(-0.0727684);
   Graph_ge_h_b_copyv212271287381005->SetMaximum(0.0727684);
   Graph_ge_h_b_copyv212271287381005->SetDirectory(0);
   Graph_ge_h_b_copyv212271287381005->SetStats(0);
   Graph_ge_h_b_copyv212271287381005->SetLineWidth(2);
   Graph_ge_h_b_copyv212271287381005->SetMarkerStyle(20);
   Graph_ge_h_b_copyv212271287381005->SetMarkerSize(1.2);
   Graph_ge_h_b_copyv212271287381005->GetXaxis()->SetLabelFont(42);
   Graph_ge_h_b_copyv212271287381005->GetXaxis()->SetLabelSize(0.05);
   Graph_ge_h_b_copyv212271287381005->GetXaxis()->SetTitleSize(0.05);
   Graph_ge_h_b_copyv212271287381005->GetXaxis()->SetTitleOffset(1.4);
   Graph_ge_h_b_copyv212271287381005->GetXaxis()->SetTitleFont(42);
   Graph_ge_h_b_copyv212271287381005->GetYaxis()->SetLabelFont(42);
   Graph_ge_h_b_copyv212271287381005->GetYaxis()->SetLabelSize(0.05);
   Graph_ge_h_b_copyv212271287381005->GetYaxis()->SetTitleSize(0.05);
   Graph_ge_h_b_copyv212271287381005->GetYaxis()->SetTitleOffset(1.4);
   Graph_ge_h_b_copyv212271287381005->GetYaxis()->SetTitleFont(42);
   Graph_ge_h_b_copyv212271287381005->GetZaxis()->SetLabelFont(42);
   Graph_ge_h_b_copyv212271287381005->GetZaxis()->SetLabelSize(0.05);
   Graph_ge_h_b_copyv212271287381005->GetZaxis()->SetTitleSize(0.05);
   Graph_ge_h_b_copyv212271287381005->GetZaxis()->SetTitleOffset(1);
   Graph_ge_h_b_copyv212271287381005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_ge_h_b_copyv212271287381005);
   
   gre->Draw("pe");
   
   TLegend *leg = new TLegend(0,0.78,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","#it{#bf{sPHENIX}} Projection, Au+Au, Year 1-3","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","#it{b}-jet, Anti-k_{T} R=0.4, |#eta|<0.70, PYTHIA-8  CTEQ6L","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","142B rec. Au+Au, 40% Eff., 40% Pur.","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.19,0.55,1,0.78,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("NULL","#it{b}-jet v_{2} Projection, #it{R}_{AA, #it{b}-jet}=0.6, Res(#Psi_{2})=0.7","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ge_h_b_copyv21978035166","Au+Au 0-10%C","pl");

   ci = TColor::GetColor("#000066");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);

   ci = TColor::GetColor("#000066");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(3);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ge_h_b_copyv21227128738","Au+Au 10-40%C","pl");

   ci = TColor::GetColor("#006633");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);

   ci = TColor::GetColor("#006633");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(3);
   entry->SetTextFont(42);
   leg->Draw();
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70_1->Modified();
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70->cd();
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70->Modified();
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70->cd();
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70->SetSelected(Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.7_deta0.70);
}
