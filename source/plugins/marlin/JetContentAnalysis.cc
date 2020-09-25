



#include <marlin/Processor.h>

class JetContentAnalysisProcessor final : public marlin::Processor {
public:
  JetContentAnalysisProcessor() ;
  ~JetContentAnalysisProcessor() = default ;
  // no copy
  JetContentAnalysisProcessor(const JetContentAnalysisProcessor &) = delete ;
  JetContentAnalysisProcessor& operator=(const JetContentAnalysisProcessor &) = delete ;


  inline marlin::Processor *newProcessor() override { return new JetContentAnalysisProcessor() ; }


private:
  
};

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

// plugin declaration
JetContentAnalysisProcessor aJetContentAnalysisProcessor ;

JetContentAnalysisProcessor::JetContentAnalysisProcessor() :
  Processor("JetContentAnalysisProcessor") {
  
  _description = "Analysis di-jet events and exatrct the particle content of jets. Output mainly tree/histograms." ;
  
}






