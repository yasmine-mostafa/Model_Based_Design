function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["INC_Counter.c:41c45"]=1;
    this.traceFlag["INC_Counter.c:51c39"]=1;
    this.traceFlag["INC_Counter.c:51c45"]=1;
    this.traceFlag["INC_Counter.c:83c37"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["INC_Counter.c:41"]=1;
    this.lineTraceFlag["INC_Counter.c:51"]=1;
    this.lineTraceFlag["INC_Counter.c:52"]=1;
    this.lineTraceFlag["INC_Counter.c:58"]=1;
    this.lineTraceFlag["INC_Counter.c:61"]=1;
    this.lineTraceFlag["INC_Counter.c:77"]=1;
    this.lineTraceFlag["INC_Counter.c:83"]=1;
    this.lineTraceFlag["INC_Counter.h:38"]=1;
    this.lineTraceFlag["INC_Counter.h:43"]=1;
    this.lineTraceFlag["INC_Counter.h:48"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
