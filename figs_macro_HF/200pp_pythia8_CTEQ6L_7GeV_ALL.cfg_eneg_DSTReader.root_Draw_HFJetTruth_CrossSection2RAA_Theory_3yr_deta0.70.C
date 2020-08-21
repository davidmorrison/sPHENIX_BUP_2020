void 200pp_pythia8_CTEQ6L_7GeV_ALL.cfg_eneg_DSTReader.root_Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70()
{
//=========Macro generated from canvas: Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70/Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70
//=========  (Thu Aug 20 23:48:20 2020) by ROOT version 6.16/00
   TCanvas *Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70 = new TCanvas("Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70", "Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70",700,23,1100,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70->Range(0,0,1,1);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70->SetFillColor(0);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70->SetBorderMode(0);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70->SetBorderSize(2);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70->SetTickx(1);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70->SetTicky(1);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70->SetLeftMargin(0.16);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70->SetRightMargin(0.05);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70->SetTopMargin(0.05);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70->SetBottomMargin(0.16);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1
   TPad *Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1 = new TPad("Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1", "Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1",0.01,0.01,0.99,0.99);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1->Draw();
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1->cd();
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1->Range(3.101266,-0.243038,52.46835,1.275949);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1->SetFillColor(0);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1->SetBorderMode(0);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1->SetBorderSize(2);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1->SetTickx(1);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1->SetTicky(1);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1->SetLeftMargin(0.16);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1->SetRightMargin(0.05);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1->SetTopMargin(0.05);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1->SetBottomMargin(0.16);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1->SetFrameBorderMode(0);
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1->SetFrameBorderMode(0);
   
   TH1F *hframe__4 = new TH1F("hframe__4","",1000,11,50);
   hframe__4->SetMinimum(0);
   hframe__4->SetMaximum(1.2);
   hframe__4->SetDirectory(0);
   hframe__4->SetStats(0);
   hframe__4->SetLineWidth(2);
   hframe__4->SetMarkerStyle(20);
   hframe__4->SetMarkerSize(1.2);
   hframe__4->GetXaxis()->SetTitle("p_{T} [GeV]");
   hframe__4->GetXaxis()->SetLabelFont(42);
   hframe__4->GetXaxis()->SetLabelSize(0.05);
   hframe__4->GetXaxis()->SetTitleSize(0.05);
   hframe__4->GetXaxis()->SetTitleOffset(1.4);
   hframe__4->GetXaxis()->SetTitleFont(42);
   hframe__4->GetYaxis()->SetTitle("#it{R}_{AA}");
   hframe__4->GetYaxis()->SetLabelFont(42);
   hframe__4->GetYaxis()->SetLabelSize(0.05);
   hframe__4->GetYaxis()->SetTitleSize(0.05);
   hframe__4->GetYaxis()->SetTitleOffset(1.4);
   hframe__4->GetYaxis()->SetTitleFont(42);
   hframe__4->GetZaxis()->SetLabelFont(42);
   hframe__4->GetZaxis()->SetLabelSize(0.05);
   hframe__4->GetZaxis()->SetTitleSize(0.05);
   hframe__4->GetZaxis()->SetTitleOffset(1);
   hframe__4->GetZaxis()->SetTitleFont(42);
   hframe__4->Draw(" ");
   
   Double_t Graph0_fx1002[8] = {
   9,
   12,
   16,
   21.5,
   30,
   40,
   52.5,
   70};
   Double_t Graph0_fy1002[8] = {
   0.645,
   0.592,
   0.5065,
   0.4435,
   0.379,
   0.3185,
   0.2515,
   0.2145};
   Double_t Graph0_fex1002[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1002[8] = {
   0.059,
   0.04,
   0.0375,
   0.0755,
   0.038,
   0.0365,
   0.0655,
   0.0715};
   TGraphErrors *gre = new TGraphErrors(8,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#99ccff");
   gre->SetFillColor(ci);
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph01002 = new TH1F("Graph_Graph01002","Graph",100,2.9,76.1);
   Graph_Graph01002->SetMinimum(0.0869);
   Graph_Graph01002->SetMaximum(0.7601);
   Graph_Graph01002->SetDirectory(0);
   Graph_Graph01002->SetStats(0);
   Graph_Graph01002->SetLineWidth(2);
   Graph_Graph01002->SetMarkerStyle(20);
   Graph_Graph01002->SetMarkerSize(1.2);
   Graph_Graph01002->GetXaxis()->SetLabelFont(42);
   Graph_Graph01002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01002->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01002->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph01002->GetXaxis()->SetTitleFont(42);
   Graph_Graph01002->GetYaxis()->SetLabelFont(42);
   Graph_Graph01002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01002->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01002->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph01002->GetYaxis()->SetTitleFont(42);
   Graph_Graph01002->GetZaxis()->SetLabelFont(42);
   Graph_Graph01002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph01002->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph01002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01002);
   
   gre->Draw("3");
   
   Double_t Graph1_fx1[13] = {
   10.13074,
   13.8755,
   17.91571,
   19.95082,
   21.83829,
   24.75812,
   28.15,
   30.30317,
   35.70147,
   40.21508,
   49.18251,
   54.49219,
   59.89035};
   Double_t Graph1_fy1[13] = {
   0.8087402,
   0.7102165,
   0.6411362,
   0.6227,
   0.5950638,
   0.5618901,
   0.5333105,
   0.5194738,
   0.5239922,
   0.5450886,
   0.5375891,
   0.5338267,
   0.5291427};
   TGraph *graph = new TGraph(13,Graph1_fx1,Graph1_fy1);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,5.154778,64.86631);
   Graph_Graph11->SetMinimum(0.4905472);
   Graph_Graph11->SetMaximum(0.8376668);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);
   Graph_Graph11->SetLineWidth(2);
   Graph_Graph11->SetMarkerStyle(20);
   Graph_Graph11->SetMarkerSize(1.2);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph11->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph11->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph11->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   graph->Draw("l");
   
   Double_t Graph2_fx2[13] = {
   10.04092,
   11.75085,
   15.82004,
   18.94616,
   19.86046,
   21.01059,
   24.34328,
   29.88828,
   35.87652,
   40.15413,
   47.94165,
   55.64066,
   59.91793};
   Double_t Graph2_fy2[13] = {
   0.7249992,
   0.6623964,
   0.5601867,
   0.5141265,
   0.50491,
   0.484647,
   0.4441051,
   0.3980078,
   0.4006767,
   0.4208565,
   0.4152155,
   0.4086558,
   0.4076699};
   graph = new TGraph(13,Graph2_fx2,Graph2_fy2);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#660000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph22 = new TH1F("Graph_Graph22","Graph",100,5.053223,64.90563);
   Graph_Graph22->SetMinimum(0.3653086);
   Graph_Graph22->SetMaximum(0.7576984);
   Graph_Graph22->SetDirectory(0);
   Graph_Graph22->SetStats(0);
   Graph_Graph22->SetLineWidth(2);
   Graph_Graph22->SetMarkerStyle(20);
   Graph_Graph22->SetMarkerSize(1.2);
   Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph22->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph22->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph22->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph22->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph22->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph22->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph22->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph22->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph22->GetZaxis()->SetTitleOffset(1);
   Graph_Graph22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph22);
   
   graph->Draw("l");
   
   Double_t RAA_h_b_copy347955387_fx1003[7] = {
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5};
   Double_t RAA_h_b_copy347955387_fy1003[7] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t RAA_h_b_copy347955387_fex1003[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RAA_h_b_copy347955387_fey1003[7] = {
   0.005023945,
   0.01208001,
   0.02760028,
   0.06074891,
   0.1483522,
   0.3317257,
   0.5501048};
   gre = new TGraphErrors(7,RAA_h_b_copy347955387_fx1003,RAA_h_b_copy347955387_fy1003,RAA_h_b_copy347955387_fex1003,RAA_h_b_copy347955387_fey1003);
   gre->SetName("RAA_h_b_copy347955387");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(4);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(3);
   
   TH1F *Graph_Graph_RAA_h_b_copy34795538710011003 = new TH1F("Graph_Graph_RAA_h_b_copy34795538710011003","Graph",100,14.5,50.5);
   Graph_Graph_RAA_h_b_copy34795538710011003->SetMinimum(0.0449057);
   Graph_Graph_RAA_h_b_copy34795538710011003->SetMaximum(1.260126);
   Graph_Graph_RAA_h_b_copy34795538710011003->SetDirectory(0);
   Graph_Graph_RAA_h_b_copy34795538710011003->SetStats(0);
   Graph_Graph_RAA_h_b_copy34795538710011003->SetLineWidth(2);
   Graph_Graph_RAA_h_b_copy34795538710011003->SetMarkerStyle(20);
   Graph_Graph_RAA_h_b_copy34795538710011003->SetMarkerSize(1.2);
   Graph_Graph_RAA_h_b_copy34795538710011003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_RAA_h_b_copy34795538710011003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_RAA_h_b_copy34795538710011003->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_RAA_h_b_copy34795538710011003->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_RAA_h_b_copy34795538710011003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_RAA_h_b_copy34795538710011003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_RAA_h_b_copy34795538710011003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_RAA_h_b_copy34795538710011003->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_RAA_h_b_copy34795538710011003->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_RAA_h_b_copy34795538710011003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_RAA_h_b_copy34795538710011003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_RAA_h_b_copy34795538710011003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_RAA_h_b_copy34795538710011003->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_RAA_h_b_copy34795538710011003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_RAA_h_b_copy34795538710011003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_RAA_h_b_copy34795538710011003);
   
   gre->Draw("pe");
   
   TLegend *leg = new TLegend(0,0.7,0.85,0.93,NULL,"brNDC");
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
   entry=leg->AddEntry("NULL","#it{b}-jet Anti-k_{T} R=0.4, 0-10% Au+Au, Year 1-3","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","#it{p}+#it{p}: 101pb^{-1} trig., 60% Eff., 40% Pur.","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","Au+Au: 142B rec., 40% Eff., 40% Pur.","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.195,0.17,0.7,0.3,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","pQCD, Phys.Lett. B726 (2013) 251-256","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","g^{med} = 2.0","l");

   ci = TColor::GetColor("#006600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","g^{med} = 2.2","l");

   ci = TColor::GetColor("#660000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.2,0.32,0.55,0.37,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("Graph0","LIDO, arXiv:2008.07622 [nucl-th]","f");

   ci = TColor::GetColor("#99ccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70_1->Modified();
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70->cd();
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70->Modified();
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70->cd();
   Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70->SetSelected(Draw_HFJetTruth_CrossSection2RAA_Theory_3yr_deta0.70);
}
