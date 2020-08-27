void 200pp_pythia8_CTEQ6L_7GeV_ALL.cfg_eneg_DSTReader.root_Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70()
{
//=========Macro generated from canvas: Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70/Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70
//=========  (Thu Aug 27 00:00:06 2020) by ROOT version 6.16/00
   TCanvas *Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70 = new TCanvas("Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70", "Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70",0,585,1100,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70->Range(0,0,1,1);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70->SetFillColor(0);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70->SetBorderMode(0);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70->SetBorderSize(2);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70->SetTickx(1);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70->SetTicky(1);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70->SetLeftMargin(0.16);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70->SetRightMargin(0.05);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70->SetTopMargin(0.05);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70->SetBottomMargin(0.16);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1
   TPad *Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1 = new TPad("Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1", "Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1",0.01,0.01,0.99,0.99);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1->Draw();
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1->cd();
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1->Range(9.936709,-0.1810127,41.58228,0.3253165);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1->SetFillColor(0);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1->SetBorderMode(0);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1->SetBorderSize(2);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1->SetTickx(1);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1->SetTicky(1);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1->SetLeftMargin(0.16);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1->SetRightMargin(0.05);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1->SetTopMargin(0.05);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1->SetBottomMargin(0.16);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1->SetFrameBorderMode(0);
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1->SetFrameBorderMode(0);
   
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
   
   Double_t ge_h_b_copyv21555168257_fx1004[4] = {
   16.8,
   21.8,
   26.8,
   31.8};
   Double_t ge_h_b_copyv21555168257_fy1004[4] = {
   0,
   0,
   0,
   0};
   Double_t ge_h_b_copyv21555168257_fex1004[4] = {
   0,
   0,
   0,
   0};
   Double_t ge_h_b_copyv21555168257_fey1004[4] = {
   0.007832476,
   0.01883308,
   0.04302964,
   0.09470932};
   TGraphErrors *gre = new TGraphErrors(4,ge_h_b_copyv21555168257_fx1004,ge_h_b_copyv21555168257_fy1004,ge_h_b_copyv21555168257_fex1004,ge_h_b_copyv21555168257_fey1004);
   gre->SetName("ge_h_b_copyv21555168257");
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
   
   TH1F *Graph_ge_h_b_copyv215551682571004 = new TH1F("Graph_ge_h_b_copyv215551682571004","Graph",100,15.3,33.3);
   Graph_ge_h_b_copyv215551682571004->SetMinimum(-0.1136512);
   Graph_ge_h_b_copyv215551682571004->SetMaximum(0.1136512);
   Graph_ge_h_b_copyv215551682571004->SetDirectory(0);
   Graph_ge_h_b_copyv215551682571004->SetStats(0);
   Graph_ge_h_b_copyv215551682571004->SetLineWidth(2);
   Graph_ge_h_b_copyv215551682571004->SetMarkerStyle(20);
   Graph_ge_h_b_copyv215551682571004->SetMarkerSize(1.2);
   Graph_ge_h_b_copyv215551682571004->GetXaxis()->SetLabelFont(42);
   Graph_ge_h_b_copyv215551682571004->GetXaxis()->SetLabelSize(0.05);
   Graph_ge_h_b_copyv215551682571004->GetXaxis()->SetTitleSize(0.05);
   Graph_ge_h_b_copyv215551682571004->GetXaxis()->SetTitleOffset(1.4);
   Graph_ge_h_b_copyv215551682571004->GetXaxis()->SetTitleFont(42);
   Graph_ge_h_b_copyv215551682571004->GetYaxis()->SetLabelFont(42);
   Graph_ge_h_b_copyv215551682571004->GetYaxis()->SetLabelSize(0.05);
   Graph_ge_h_b_copyv215551682571004->GetYaxis()->SetTitleSize(0.05);
   Graph_ge_h_b_copyv215551682571004->GetYaxis()->SetTitleOffset(1.4);
   Graph_ge_h_b_copyv215551682571004->GetYaxis()->SetTitleFont(42);
   Graph_ge_h_b_copyv215551682571004->GetZaxis()->SetLabelFont(42);
   Graph_ge_h_b_copyv215551682571004->GetZaxis()->SetLabelSize(0.05);
   Graph_ge_h_b_copyv215551682571004->GetZaxis()->SetTitleSize(0.05);
   Graph_ge_h_b_copyv215551682571004->GetZaxis()->SetTitleOffset(1);
   Graph_ge_h_b_copyv215551682571004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_ge_h_b_copyv215551682571004);
   
   gre->Draw("pe");
   
   Double_t ge_h_b_copyv21754123568_fx1005[4] = {
   18.2,
   23.2,
   28.2,
   33.2};
   Double_t ge_h_b_copyv21754123568_fy1005[4] = {
   0,
   0,
   0,
   0};
   Double_t ge_h_b_copyv21754123568_fex1005[4] = {
   0,
   0,
   0,
   0};
   Double_t ge_h_b_copyv21754123568_fey1005[4] = {
   0.007020952,
   0.01688178,
   0.03857133,
   0.08489646};
   gre = new TGraphErrors(4,ge_h_b_copyv21754123568_fx1005,ge_h_b_copyv21754123568_fy1005,ge_h_b_copyv21754123568_fex1005,ge_h_b_copyv21754123568_fey1005);
   gre->SetName("ge_h_b_copyv21754123568");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#006633");
   gre->SetLineColor(ci);
   gre->SetLineWidth(4);

   ci = TColor::GetColor("#006633");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(33);
   gre->SetMarkerSize(3);
   
   TH1F *Graph_ge_h_b_copyv217541235681005 = new TH1F("Graph_ge_h_b_copyv217541235681005","Graph",100,16.7,34.7);
   Graph_ge_h_b_copyv217541235681005->SetMinimum(-0.1018758);
   Graph_ge_h_b_copyv217541235681005->SetMaximum(0.1018758);
   Graph_ge_h_b_copyv217541235681005->SetDirectory(0);
   Graph_ge_h_b_copyv217541235681005->SetStats(0);
   Graph_ge_h_b_copyv217541235681005->SetLineWidth(2);
   Graph_ge_h_b_copyv217541235681005->SetMarkerStyle(20);
   Graph_ge_h_b_copyv217541235681005->SetMarkerSize(1.2);
   Graph_ge_h_b_copyv217541235681005->GetXaxis()->SetLabelFont(42);
   Graph_ge_h_b_copyv217541235681005->GetXaxis()->SetLabelSize(0.05);
   Graph_ge_h_b_copyv217541235681005->GetXaxis()->SetTitleSize(0.05);
   Graph_ge_h_b_copyv217541235681005->GetXaxis()->SetTitleOffset(1.4);
   Graph_ge_h_b_copyv217541235681005->GetXaxis()->SetTitleFont(42);
   Graph_ge_h_b_copyv217541235681005->GetYaxis()->SetLabelFont(42);
   Graph_ge_h_b_copyv217541235681005->GetYaxis()->SetLabelSize(0.05);
   Graph_ge_h_b_copyv217541235681005->GetYaxis()->SetTitleSize(0.05);
   Graph_ge_h_b_copyv217541235681005->GetYaxis()->SetTitleOffset(1.4);
   Graph_ge_h_b_copyv217541235681005->GetYaxis()->SetTitleFont(42);
   Graph_ge_h_b_copyv217541235681005->GetZaxis()->SetLabelFont(42);
   Graph_ge_h_b_copyv217541235681005->GetZaxis()->SetLabelSize(0.05);
   Graph_ge_h_b_copyv217541235681005->GetZaxis()->SetTitleSize(0.05);
   Graph_ge_h_b_copyv217541235681005->GetZaxis()->SetTitleOffset(1);
   Graph_ge_h_b_copyv217541235681005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_ge_h_b_copyv217541235681005);
   
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
   entry=leg->AddEntry("NULL","#it{b}-jet v_{2} Projection, #it{R}_{AA, #it{b}-jet}=0.6, Res(#Psi_{2})=0.5","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ge_h_b_copyv21555168257","Au+Au 0-10%C","pl");

   ci = TColor::GetColor("#000066");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);

   ci = TColor::GetColor("#000066");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(3);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ge_h_b_copyv21754123568","Au+Au 10-40%C","pl");

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
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70_1->Modified();
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70->cd();
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70->Modified();
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70->cd();
   Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70->SetSelected(Draw_HFJetTruth_CrossSection2v2_3yr_EPR0.5_deta0.70);
}
