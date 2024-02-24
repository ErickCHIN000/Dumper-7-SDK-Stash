#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass PrideAnimation.PrideAnimation_C
// (None)

class UClass* UPrideAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideAnimation_C");

	return Clss;
}


// PrideAnimation_C PrideAnimation.Default__PrideAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideAnimation_C* UPrideAnimation_C::GetDefaultObj()
{
	static class UPrideAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideAnimation_C*>(UPrideAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrideAnimation.PrideAnimation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPrideAnimation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "AnimGraph");

	Params::UPrideAnimation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_BlendListByBool_FF3E3B5E49B18E7BD4175F905A13365B
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_BlendListByBool_FF3E3B5E49B18E7BD4175F905A13365B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_BlendListByBool_FF3E3B5E49B18E7BD4175F905A13365B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_BlendListByBool_EC99B13D4F4338C1548BAF87AC64376E
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_BlendListByBool_EC99B13D4F4338C1548BAF87AC64376E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_BlendListByBool_EC99B13D4F4338C1548BAF87AC64376E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_SequencePlayer_778955614F4AAD24BCE92FACA73EE4F1
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_SequencePlayer_778955614F4AAD24BCE92FACA73EE4F1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_SequencePlayer_778955614F4AAD24BCE92FACA73EE4F1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_C0B606E04F20275B630EF995F664F0FC
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_C0B606E04F20275B630EF995F664F0FC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_C0B606E04F20275B630EF995F664F0FC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_C2EBA64D4C6D7AD28706C18DCFC7C234
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_C2EBA64D4C6D7AD28706C18DCFC7C234()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_C2EBA64D4C6D7AD28706C18DCFC7C234");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_93C05B1C43C02FA024A68B8730847171
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_93C05B1C43C02FA024A68B8730847171()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_93C05B1C43C02FA024A68B8730847171");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_9201C38E42F6EE9FDD64728DF5A5FC47
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_9201C38E42F6EE9FDD64728DF5A5FC47()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_9201C38E42F6EE9FDD64728DF5A5FC47");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_C0FCBA32432EC49FEF8D92A89C968769
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_C0FCBA32432EC49FEF8D92A89C968769()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_C0FCBA32432EC49FEF8D92A89C968769");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_73A3059246BE710F69D17A91D244E316
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_73A3059246BE710F69D17A91D244E316()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_ModifyBone_73A3059246BE710F69D17A91D244E316");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_LookAt_D4A989974C6711856BAB8FBFE3153AA3
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_LookAt_D4A989974C6711856BAB8FBFE3153AA3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_LookAt_D4A989974C6711856BAB8FBFE3153AA3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_BlendListByBool_8F90031A4BE8A7217129C39788F20D2C
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_BlendListByBool_8F90031A4BE8A7217129C39788F20D2C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_BlendListByBool_8F90031A4BE8A7217129C39788F20D2C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_SequencePlayer_918BAF1447E4F40E2AC158AB2B10DD2A
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_SequencePlayer_918BAF1447E4F40E2AC158AB2B10DD2A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_SequencePlayer_918BAF1447E4F40E2AC158AB2B10DD2A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_SequencePlayer_E536F2D34625A6F5D27595BB7238621D
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_SequencePlayer_E536F2D34625A6F5D27595BB7238621D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_SequencePlayer_E536F2D34625A6F5D27595BB7238621D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_TransitionResult_31D8DF0A44C791E696C254B048E5B900
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_TransitionResult_31D8DF0A44C791E696C254B048E5B900()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_TransitionResult_31D8DF0A44C791E696C254B048E5B900");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_TransitionResult_7A7D73534E03E4341B1C8A912DDD32B8
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_TransitionResult_7A7D73534E03E4341B1C8A912DDD32B8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_TransitionResult_7A7D73534E03E4341B1C8A912DDD32B8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_TransitionResult_78243E4049CA3F64846E0FA935DEFCEB
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_TransitionResult_78243E4049CA3F64846E0FA935DEFCEB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_TransitionResult_78243E4049CA3F64846E0FA935DEFCEB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_TransitionResult_14091D4C4F6F9D05E680EBBFC701A198
// (BlueprintEvent)
// Parameters:

void UPrideAnimation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_TransitionResult_14091D4C4F6F9D05E680EBBFC701A198()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_PrideAnimation_AnimGraphNode_TransitionResult_14091D4C4F6F9D05E680EBBFC701A198");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrideAnimation.PrideAnimation_C.ExecuteUbergraph_PrideAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPrideAnimation_C::ExecuteUbergraph_PrideAnimation(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrideAnimation_C", "ExecuteUbergraph_PrideAnimation");

	Params::UPrideAnimation_C_ExecuteUbergraph_PrideAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


