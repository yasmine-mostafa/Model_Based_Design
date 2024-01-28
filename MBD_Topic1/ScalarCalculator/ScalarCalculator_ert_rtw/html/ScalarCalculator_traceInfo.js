function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "ScalarCalculator"};
	this.sidHashMap["ScalarCalculator"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "ScalarCalculator:45"};
	this.sidHashMap["ScalarCalculator:45"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "ScalarCalculator:35"};
	this.sidHashMap["ScalarCalculator:35"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "ScalarCalculator:34"};
	this.sidHashMap["ScalarCalculator:34"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<Root>/Num1"] = {sid: "ScalarCalculator:1"};
	this.sidHashMap["ScalarCalculator:1"] = {rtwname: "<Root>/Num1"};
	this.rtwnameHashMap["<Root>/Num2"] = {sid: "ScalarCalculator:3"};
	this.sidHashMap["ScalarCalculator:3"] = {rtwname: "<Root>/Num2"};
	this.rtwnameHashMap["<Root>/Num3"] = {sid: "ScalarCalculator:4"};
	this.sidHashMap["ScalarCalculator:4"] = {rtwname: "<Root>/Num3"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "ScalarCalculator:45"};
	this.sidHashMap["ScalarCalculator:45"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Addition"] = {sid: "ScalarCalculator:12"};
	this.sidHashMap["ScalarCalculator:12"] = {rtwname: "<Root>/Addition"};
	this.rtwnameHashMap["<Root>/Subtraction"] = {sid: "ScalarCalculator:13"};
	this.sidHashMap["ScalarCalculator:13"] = {rtwname: "<Root>/Subtraction"};
	this.rtwnameHashMap["<Root>/Multiplication"] = {sid: "ScalarCalculator:24"};
	this.sidHashMap["ScalarCalculator:24"] = {rtwname: "<Root>/Multiplication"};
	this.rtwnameHashMap["<Root>/Division"] = {sid: "ScalarCalculator:28"};
	this.sidHashMap["ScalarCalculator:28"] = {rtwname: "<Root>/Division"};
	this.rtwnameHashMap["<Root>/Error"] = {sid: "ScalarCalculator:29"};
	this.sidHashMap["ScalarCalculator:29"] = {rtwname: "<Root>/Error"};
	this.rtwnameHashMap["<Root>/Unary_Minus"] = {sid: "ScalarCalculator:30"};
	this.sidHashMap["ScalarCalculator:30"] = {rtwname: "<Root>/Unary_Minus"};
	this.rtwnameHashMap["<Root>/Increment"] = {sid: "ScalarCalculator:38"};
	this.sidHashMap["ScalarCalculator:38"] = {rtwname: "<Root>/Increment"};
	this.rtwnameHashMap["<Root>/Decrement"] = {sid: "ScalarCalculator:39"};
	this.sidHashMap["ScalarCalculator:39"] = {rtwname: "<Root>/Decrement"};
	this.rtwnameHashMap["<S1>/Num1"] = {sid: "ScalarCalculator:46"};
	this.sidHashMap["ScalarCalculator:46"] = {rtwname: "<S1>/Num1"};
	this.rtwnameHashMap["<S1>/Num2"] = {sid: "ScalarCalculator:47"};
	this.sidHashMap["ScalarCalculator:47"] = {rtwname: "<S1>/Num2"};
	this.rtwnameHashMap["<S1>/Num3"] = {sid: "ScalarCalculator:48"};
	this.sidHashMap["ScalarCalculator:48"] = {rtwname: "<S1>/Num3"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "ScalarCalculator:6"};
	this.sidHashMap["ScalarCalculator:6"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "ScalarCalculator:42"};
	this.sidHashMap["ScalarCalculator:42"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/Decrement Stored Integer"] = {sid: "ScalarCalculator:35"};
	this.sidHashMap["ScalarCalculator:35"] = {rtwname: "<S1>/Decrement Stored Integer"};
	this.rtwnameHashMap["<S1>/Divide"] = {sid: "ScalarCalculator:25"};
	this.sidHashMap["ScalarCalculator:25"] = {rtwname: "<S1>/Divide"};
	this.rtwnameHashMap["<S1>/From"] = {sid: "ScalarCalculator:10"};
	this.sidHashMap["ScalarCalculator:10"] = {rtwname: "<S1>/From"};
	this.rtwnameHashMap["<S1>/From1"] = {sid: "ScalarCalculator:11"};
	this.sidHashMap["ScalarCalculator:11"] = {rtwname: "<S1>/From1"};
	this.rtwnameHashMap["<S1>/From10"] = {sid: "ScalarCalculator:37"};
	this.sidHashMap["ScalarCalculator:37"] = {rtwname: "<S1>/From10"};
	this.rtwnameHashMap["<S1>/From2"] = {sid: "ScalarCalculator:15"};
	this.sidHashMap["ScalarCalculator:15"] = {rtwname: "<S1>/From2"};
	this.rtwnameHashMap["<S1>/From3"] = {sid: "ScalarCalculator:16"};
	this.sidHashMap["ScalarCalculator:16"] = {rtwname: "<S1>/From3"};
	this.rtwnameHashMap["<S1>/From4"] = {sid: "ScalarCalculator:22"};
	this.sidHashMap["ScalarCalculator:22"] = {rtwname: "<S1>/From4"};
	this.rtwnameHashMap["<S1>/From5"] = {sid: "ScalarCalculator:23"};
	this.sidHashMap["ScalarCalculator:23"] = {rtwname: "<S1>/From5"};
	this.rtwnameHashMap["<S1>/From6"] = {sid: "ScalarCalculator:26"};
	this.sidHashMap["ScalarCalculator:26"] = {rtwname: "<S1>/From6"};
	this.rtwnameHashMap["<S1>/From7"] = {sid: "ScalarCalculator:27"};
	this.sidHashMap["ScalarCalculator:27"] = {rtwname: "<S1>/From7"};
	this.rtwnameHashMap["<S1>/From8"] = {sid: "ScalarCalculator:32"};
	this.sidHashMap["ScalarCalculator:32"] = {rtwname: "<S1>/From8"};
	this.rtwnameHashMap["<S1>/From9"] = {sid: "ScalarCalculator:36"};
	this.sidHashMap["ScalarCalculator:36"] = {rtwname: "<S1>/From9"};
	this.rtwnameHashMap["<S1>/Goto"] = {sid: "ScalarCalculator:7"};
	this.sidHashMap["ScalarCalculator:7"] = {rtwname: "<S1>/Goto"};
	this.rtwnameHashMap["<S1>/Goto1"] = {sid: "ScalarCalculator:8"};
	this.sidHashMap["ScalarCalculator:8"] = {rtwname: "<S1>/Goto1"};
	this.rtwnameHashMap["<S1>/Goto2"] = {sid: "ScalarCalculator:9"};
	this.sidHashMap["ScalarCalculator:9"] = {rtwname: "<S1>/Goto2"};
	this.rtwnameHashMap["<S1>/Increment Stored Integer"] = {sid: "ScalarCalculator:34"};
	this.sidHashMap["ScalarCalculator:34"] = {rtwname: "<S1>/Increment Stored Integer"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "ScalarCalculator:21"};
	this.sidHashMap["ScalarCalculator:21"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Relational Operator"] = {sid: "ScalarCalculator:41"};
	this.sidHashMap["ScalarCalculator:41"] = {rtwname: "<S1>/Relational Operator"};
	this.rtwnameHashMap["<S1>/String Constant"] = {sid: "ScalarCalculator:43"};
	this.sidHashMap["ScalarCalculator:43"] = {rtwname: "<S1>/String Constant"};
	this.rtwnameHashMap["<S1>/String Constant1"] = {sid: "ScalarCalculator:44"};
	this.sidHashMap["ScalarCalculator:44"] = {rtwname: "<S1>/String Constant1"};
	this.rtwnameHashMap["<S1>/Subtract"] = {sid: "ScalarCalculator:14"};
	this.sidHashMap["ScalarCalculator:14"] = {rtwname: "<S1>/Subtract"};
	this.rtwnameHashMap["<S1>/Switch"] = {sid: "ScalarCalculator:40"};
	this.sidHashMap["ScalarCalculator:40"] = {rtwname: "<S1>/Switch"};
	this.rtwnameHashMap["<S1>/Unary Minus"] = {sid: "ScalarCalculator:31"};
	this.sidHashMap["ScalarCalculator:31"] = {rtwname: "<S1>/Unary Minus"};
	this.rtwnameHashMap["<S1>/Addition"] = {sid: "ScalarCalculator:49"};
	this.sidHashMap["ScalarCalculator:49"] = {rtwname: "<S1>/Addition"};
	this.rtwnameHashMap["<S1>/Subtraction"] = {sid: "ScalarCalculator:50"};
	this.sidHashMap["ScalarCalculator:50"] = {rtwname: "<S1>/Subtraction"};
	this.rtwnameHashMap["<S1>/Multiplication"] = {sid: "ScalarCalculator:51"};
	this.sidHashMap["ScalarCalculator:51"] = {rtwname: "<S1>/Multiplication"};
	this.rtwnameHashMap["<S1>/Division"] = {sid: "ScalarCalculator:52"};
	this.sidHashMap["ScalarCalculator:52"] = {rtwname: "<S1>/Division"};
	this.rtwnameHashMap["<S1>/Error"] = {sid: "ScalarCalculator:53"};
	this.sidHashMap["ScalarCalculator:53"] = {rtwname: "<S1>/Error"};
	this.rtwnameHashMap["<S1>/Unary_Minus"] = {sid: "ScalarCalculator:54"};
	this.sidHashMap["ScalarCalculator:54"] = {rtwname: "<S1>/Unary_Minus"};
	this.rtwnameHashMap["<S1>/Increment"] = {sid: "ScalarCalculator:55"};
	this.sidHashMap["ScalarCalculator:55"] = {rtwname: "<S1>/Increment"};
	this.rtwnameHashMap["<S1>/Decrement"] = {sid: "ScalarCalculator:56"};
	this.sidHashMap["ScalarCalculator:56"] = {rtwname: "<S1>/Decrement"};
	this.rtwnameHashMap["<S2>/u"] = {sid: "ScalarCalculator:35:1"};
	this.sidHashMap["ScalarCalculator:35:1"] = {rtwname: "<S2>/u"};
	this.rtwnameHashMap["<S2>/FixPt Constant"] = {sid: "ScalarCalculator:35:2"};
	this.sidHashMap["ScalarCalculator:35:2"] = {rtwname: "<S2>/FixPt Constant"};
	this.rtwnameHashMap["<S2>/FixPt Data Type Duplicate"] = {sid: "ScalarCalculator:35:3"};
	this.sidHashMap["ScalarCalculator:35:3"] = {rtwname: "<S2>/FixPt Data Type Duplicate"};
	this.rtwnameHashMap["<S2>/FixPt Data Type Propagation"] = {sid: "ScalarCalculator:35:4"};
	this.sidHashMap["ScalarCalculator:35:4"] = {rtwname: "<S2>/FixPt Data Type Propagation"};
	this.rtwnameHashMap["<S2>/FixPt Gateway In"] = {sid: "ScalarCalculator:35:5"};
	this.sidHashMap["ScalarCalculator:35:5"] = {rtwname: "<S2>/FixPt Gateway In"};
	this.rtwnameHashMap["<S2>/FixPt Sum1"] = {sid: "ScalarCalculator:35:6"};
	this.sidHashMap["ScalarCalculator:35:6"] = {rtwname: "<S2>/FixPt Sum1"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "ScalarCalculator:35:7"};
	this.sidHashMap["ScalarCalculator:35:7"] = {rtwname: "<S2>/y"};
	this.rtwnameHashMap["<S3>/u"] = {sid: "ScalarCalculator:34:1"};
	this.sidHashMap["ScalarCalculator:34:1"] = {rtwname: "<S3>/u"};
	this.rtwnameHashMap["<S3>/FixPt Constant"] = {sid: "ScalarCalculator:34:2"};
	this.sidHashMap["ScalarCalculator:34:2"] = {rtwname: "<S3>/FixPt Constant"};
	this.rtwnameHashMap["<S3>/FixPt Data Type Duplicate"] = {sid: "ScalarCalculator:34:3"};
	this.sidHashMap["ScalarCalculator:34:3"] = {rtwname: "<S3>/FixPt Data Type Duplicate"};
	this.rtwnameHashMap["<S3>/FixPt Data Type Propagation"] = {sid: "ScalarCalculator:34:4"};
	this.sidHashMap["ScalarCalculator:34:4"] = {rtwname: "<S3>/FixPt Data Type Propagation"};
	this.rtwnameHashMap["<S3>/FixPt Gateway In"] = {sid: "ScalarCalculator:34:5"};
	this.sidHashMap["ScalarCalculator:34:5"] = {rtwname: "<S3>/FixPt Gateway In"};
	this.rtwnameHashMap["<S3>/FixPt Sum1"] = {sid: "ScalarCalculator:34:6"};
	this.sidHashMap["ScalarCalculator:34:6"] = {rtwname: "<S3>/FixPt Sum1"};
	this.rtwnameHashMap["<S3>/y"] = {sid: "ScalarCalculator:34:7"};
	this.sidHashMap["ScalarCalculator:34:7"] = {rtwname: "<S3>/y"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
