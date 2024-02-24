#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ClamAnimation.ClamAnimation_C
// (None)

class UClass* UClamAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClamAnimation_C");

	return Clss;
}


// ClamAnimation_C ClamAnimation.Default__ClamAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UClamAnimation_C* UClamAnimation_C::GetDefaultObj()
{
	static class UClamAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UClamAnimation_C*>(UClamAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ClamAnimation.ClamAnimation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UClamAnimation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "AnimGraph");

	Params::UClamAnimation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_BlendListByBool_9DCD0D3E446769FC0BEDF2AE82084D48
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_BlendListByBool_9DCD0D3E446769FC0BEDF2AE82084D48()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_BlendListByBool_9DCD0D3E446769FC0BEDF2AE82084D48");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_BlendListByBool_5EE290ED489B29F256E7578FF3E44C66
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_BlendListByBool_5EE290ED489B29F256E7578FF3E44C66()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_BlendListByBool_5EE290ED489B29F256E7578FF3E44C66");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_SequencePlayer_F6AF9F9B467DBBF47E46A9B953716FD2
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_SequencePlayer_F6AF9F9B467DBBF47E46A9B953716FD2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_SequencePlayer_F6AF9F9B467DBBF47E46A9B953716FD2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_3EAB12DC4ACFB12FB56D25BCEFDD8EA9
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_3EAB12DC4ACFB12FB56D25BCEFDD8EA9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_3EAB12DC4ACFB12FB56D25BCEFDD8EA9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_A3497C7C4ADEC8BB58B2B58A4EB89EFE
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_A3497C7C4ADEC8BB58B2B58A4EB89EFE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_A3497C7C4ADEC8BB58B2B58A4EB89EFE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_516A358C4CB03168B219B59E7049029E
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_516A358C4CB03168B219B59E7049029E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_516A358C4CB03168B219B59E7049029E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_7C555ADE462FC7C0181FEC8553567BBD
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_7C555ADE462FC7C0181FEC8553567BBD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_7C555ADE462FC7C0181FEC8553567BBD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_0D10DBB64B3CDD4FAC81039C88CFB332
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_0D10DBB64B3CDD4FAC81039C88CFB332()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_0D10DBB64B3CDD4FAC81039C88CFB332");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_0A287935489AEA0EC91CC8B74CF1DD7B
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_0A287935489AEA0EC91CC8B74CF1DD7B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_ModifyBone_0A287935489AEA0EC91CC8B74CF1DD7B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_LookAt_442BA6314526D7A126485F8DE29FAE67
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_LookAt_442BA6314526D7A126485F8DE29FAE67()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_LookAt_442BA6314526D7A126485F8DE29FAE67");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_BlendListByBool_2759848E49FA51D4F1D1628AA64AE3E6
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_BlendListByBool_2759848E49FA51D4F1D1628AA64AE3E6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_BlendListByBool_2759848E49FA51D4F1D1628AA64AE3E6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_SequencePlayer_6C6B716F4BB790A8D3F35DB92C6FF7BB
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_SequencePlayer_6C6B716F4BB790A8D3F35DB92C6FF7BB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_SequencePlayer_6C6B716F4BB790A8D3F35DB92C6FF7BB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_SequencePlayer_A4580A1040EE18C6A0C48E99A91FAD58
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_SequencePlayer_A4580A1040EE18C6A0C48E99A91FAD58()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_SequencePlayer_A4580A1040EE18C6A0C48E99A91FAD58");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_SequencePlayer_BA2D942F4D997A1CE5660E947FC2576D
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_SequencePlayer_BA2D942F4D997A1CE5660E947FC2576D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_SequencePlayer_BA2D942F4D997A1CE5660E947FC2576D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_TransitionResult_DABD94D04127A3EF24ACF69EE335CB79
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_TransitionResult_DABD94D04127A3EF24ACF69EE335CB79()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_TransitionResult_DABD94D04127A3EF24ACF69EE335CB79");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_TransitionResult_67BF7EAC42B57508C4371BBD3AE0D0CC
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_TransitionResult_67BF7EAC42B57508C4371BBD3AE0D0CC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_TransitionResult_67BF7EAC42B57508C4371BBD3AE0D0CC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_TransitionResult_6AF7B15A484F4F70BF361FB9DB1C67D0
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_TransitionResult_6AF7B15A484F4F70BF361FB9DB1C67D0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_TransitionResult_6AF7B15A484F4F70BF361FB9DB1C67D0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_TransitionResult_152DFD4E4ABFD93455C358B51BF289CD
// (BlueprintEvent)
// Parameters:

void UClamAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_TransitionResult_152DFD4E4ABFD93455C358B51BF289CD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ClamAnimation_AnimGraphNode_TransitionResult_152DFD4E4ABFD93455C358B51BF289CD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClamAnimation.ClamAnimation_C.ExecuteUbergraph_ClamAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UClamAnimation_C::ExecuteUbergraph_ClamAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClamAnimation_C", "ExecuteUbergraph_ClamAnimation");

	Params::UClamAnimation_C_ExecuteUbergraph_ClamAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


