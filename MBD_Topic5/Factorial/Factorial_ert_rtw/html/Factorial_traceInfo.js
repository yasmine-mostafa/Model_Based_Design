function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Factorial"};
	this.sidHashMap["Factorial"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Factorial:88"};
	this.sidHashMap["Factorial:88"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Input1"] = {sid: "Factorial:91"};
	this.sidHashMap["Factorial:91"] = {rtwname: "<Root>/Input1"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "Factorial:88"};
	this.sidHashMap["Factorial:88"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "Factorial:92"};
	this.sidHashMap["Factorial:92"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<S1>:42"] = {sid: "Factorial:88:42"};
	this.sidHashMap["Factorial:88:42"] = {rtwname: "<S1>:42"};
	this.rtwnameHashMap["<S1>:43"] = {sid: "Factorial:88:43"};
	this.sidHashMap["Factorial:88:43"] = {rtwname: "<S1>:43"};
	this.rtwnameHashMap["<S1>:44"] = {sid: "Factorial:88:44"};
	this.sidHashMap["Factorial:88:44"] = {rtwname: "<S1>:44"};
	this.rtwnameHashMap["<S1>:45"] = {sid: "Factorial:88:45"};
	this.sidHashMap["Factorial:88:45"] = {rtwname: "<S1>:45"};
	this.rtwnameHashMap["<S1>:46"] = {sid: "Factorial:88:46"};
	this.sidHashMap["Factorial:88:46"] = {rtwname: "<S1>:46"};
	this.rtwnameHashMap["<S1>:47"] = {sid: "Factorial:88:47"};
	this.sidHashMap["Factorial:88:47"] = {rtwname: "<S1>:47"};
	this.rtwnameHashMap["<S1>:48"] = {sid: "Factorial:88:48"};
	this.sidHashMap["Factorial:88:48"] = {rtwname: "<S1>:48"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
