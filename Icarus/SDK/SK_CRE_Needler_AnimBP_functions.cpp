#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_CRE_Needler_AnimBP.SK_CRE_Needler_AnimBP_C
// (None)

class UClass* USK_CRE_Needler_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_CRE_Needler_AnimBP_C");

	return Clss;
}


// SK_CRE_Needler_AnimBP_C SK_CRE_Needler_AnimBP.Default__SK_CRE_Needler_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_CRE_Needler_AnimBP_C* USK_CRE_Needler_AnimBP_C::GetDefaultObj()
{
	static class USK_CRE_Needler_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_CRE_Needler_AnimBP_C*>(USK_CRE_Needler_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_CRE_Needler_AnimBP.SK_CRE_Needler_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_CRE_Needler_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_Needler_AnimBP_C", "AnimGraph");

	Params::USK_CRE_Needler_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_CRE_Needler_AnimBP.SK_CRE_Needler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_ControlRig_BEEC1EC349E86EB9F7AC58A80D98A22A
// (BlueprintEvent)
// Parameters:

void USK_CRE_Needler_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_ControlRig_BEEC1EC349E86EB9F7AC58A80D98A22A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_Needler_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_ControlRig_BEEC1EC349E86EB9F7AC58A80D98A22A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_CRE_Needler_AnimBP.SK_CRE_Needler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_BlendSpacePlayer_3847537C4F400D2497D39C81CDFD767D
// (BlueprintEvent)
// Parameters:

void USK_CRE_Needler_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_BlendSpacePlayer_3847537C4F400D2497D39C81CDFD767D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_Needler_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_BlendSpacePlayer_3847537C4F400D2497D39C81CDFD767D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_CRE_Needler_AnimBP.SK_CRE_Needler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_BlendSpacePlayer_B895153B44CFB891CE16919FE3884B06
// (BlueprintEvent)
// Parameters:

void USK_CRE_Needler_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_BlendSpacePlayer_B895153B44CFB891CE16919FE3884B06()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_Needler_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_BlendSpacePlayer_B895153B44CFB891CE16919FE3884B06");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_CRE_Needler_AnimBP.SK_CRE_Needler_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_BlendListByBool_FE64EEA948DB4AB4DF8FE6B2EF291CBB
// (BlueprintEvent)
// Parameters:

void USK_CRE_Needler_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_BlendListByBool_FE64EEA948DB4AB4DF8FE6B2EF291CBB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_Needler_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_BlendListByBool_FE64EEA948DB4AB4DF8FE6B2EF291CBB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_CRE_Needler_AnimBP.SK_CRE_Needler_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_CRE_Needler_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_Needler_AnimBP_C", "BlueprintUpdateAnimation");

	Params::USK_CRE_Needler_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_CRE_Needler_AnimBP.SK_CRE_Needler_AnimBP_C.ExecuteUbergraph_SK_CRE_Needler_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetLeanAmount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLeanAmount_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void USK_CRE_Needler_AnimBP_C::ExecuteUbergraph_SK_CRE_Needler_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_GetLeanAmount_ReturnValue, float CallFunc_GetLeanAmount_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_Needler_AnimBP_C", "ExecuteUbergraph_SK_CRE_Needler_AnimBP");

	Params::USK_CRE_Needler_AnimBP_C_ExecuteUbergraph_SK_CRE_Needler_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetLeanAmount_ReturnValue = CallFunc_GetLeanAmount_ReturnValue;
	Parms.CallFunc_GetLeanAmount_ReturnValue_1 = CallFunc_GetLeanAmount_ReturnValue_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_1 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


