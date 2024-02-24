#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_CRE_RockDog_Skeleton_AnimBlueprint.SK_CRE_RockDog_Skeleton_AnimBlueprint_C
// (None)

class UClass* USK_CRE_RockDog_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_CRE_RockDog_Skeleton_AnimBlueprint_C");

	return Clss;
}


// SK_CRE_RockDog_Skeleton_AnimBlueprint_C SK_CRE_RockDog_Skeleton_AnimBlueprint.Default__SK_CRE_RockDog_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_CRE_RockDog_Skeleton_AnimBlueprint_C* USK_CRE_RockDog_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class USK_CRE_RockDog_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_CRE_RockDog_Skeleton_AnimBlueprint_C*>(USK_CRE_RockDog_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_CRE_RockDog_Skeleton_AnimBlueprint.SK_CRE_RockDog_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_CRE_RockDog_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_RockDog_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::USK_CRE_RockDog_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_CRE_RockDog_Skeleton_AnimBlueprint.SK_CRE_RockDog_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_8672E4424FBB4ADA0D79C3B61BF9C8FE
// (BlueprintEvent)
// Parameters:

void USK_CRE_RockDog_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_8672E4424FBB4ADA0D79C3B61BF9C8FE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_RockDog_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_8672E4424FBB4ADA0D79C3B61BF9C8FE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_CRE_RockDog_Skeleton_AnimBlueprint.SK_CRE_RockDog_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_AF069F7C46E67A0ED47F3D94F4AE26EA
// (BlueprintEvent)
// Parameters:

void USK_CRE_RockDog_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_AF069F7C46E67A0ED47F3D94F4AE26EA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_RockDog_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_AF069F7C46E67A0ED47F3D94F4AE26EA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_CRE_RockDog_Skeleton_AnimBlueprint.SK_CRE_RockDog_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_7FEA9F3F435AAF1CFEC9B4AB29389423
// (BlueprintEvent)
// Parameters:

void USK_CRE_RockDog_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_7FEA9F3F435AAF1CFEC9B4AB29389423()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_RockDog_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_7FEA9F3F435AAF1CFEC9B4AB29389423");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_CRE_RockDog_Skeleton_AnimBlueprint.SK_CRE_RockDog_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_CRE_RockDog_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint(int32 EntryPoint, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_RockDog_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint");

	Params::USK_CRE_RockDog_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


