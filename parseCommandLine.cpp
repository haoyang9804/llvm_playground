#include <llvm/Support/CommandLine.h>

using namespace llvm;

static cl::OptionCategory MyCategory("MHY", "MHY's default option category");
static cl::opt<std::string> InputFilename(cl::Positional, cl::desc("<input file>"), cl::Required, cl::cat(MyCategory));
// static cl::opt<int> randomNum(cl::desc("a random number"), cl::cat(MyCategory));

// cl::opt<std::string> OutputFilename("o", cl::desc("Specify output filename"), cl::value_desc("filename"));

int main(int argc, char** argv) {
  // cl::ParseCommandLineOptions(argc, argv);

}