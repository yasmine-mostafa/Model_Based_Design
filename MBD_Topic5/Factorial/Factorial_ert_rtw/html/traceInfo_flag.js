function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Factorial.c:45c19"]=1;
    this.traceFlag["Factorial.c:45c43"]=1;
    this.traceFlag["Factorial.c:48c38"]=1;
    this.traceFlag["Factorial.c:49c13"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Factorial.c:45"]=1;
    this.lineTraceFlag["Factorial.c:48"]=1;
    this.lineTraceFlag["Factorial.c:49"]=1;
    this.lineTraceFlag["Factorial.c:50"]=1;
    this.lineTraceFlag["Factorial.c:52"]=1;
    this.lineTraceFlag["Factorial.c:72"]=1;
    this.lineTraceFlag["Factorial.c:80"]=1;
    this.lineTraceFlag["Factorial.h:37"]=1;
    this.lineTraceFlag["Factorial.h:42"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
