function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["AverageCalculator.c:35"]=1;
    this.lineTraceFlag["AverageCalculator.c:40"]=1;
    this.lineTraceFlag["AverageCalculator.c:45"]=1;
    this.lineTraceFlag["AverageCalculator.c:57"]=1;
    this.lineTraceFlag["AverageCalculator.h:38"]=1;
    this.lineTraceFlag["AverageCalculator.h:43"]=1;
    this.lineTraceFlag["AverageCalculator.h:44"]=1;
    this.lineTraceFlag["AverageCalculator.h:45"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
