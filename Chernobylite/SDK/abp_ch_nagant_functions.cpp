#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass abp_ch_nagant.abp_ch_nagant_C
// (None)

class UClass* UAbp_ch_nagant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("abp_ch_nagant_C");

	return Clss;
}


// abp_ch_nagant_C abp_ch_nagant.Default__abp_ch_nagant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbp_ch_nagant_C* UAbp_ch_nagant_C::GetDefaultObj()
{
	static class UAbp_ch_nagant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbp_ch_nagant_C*>(UAbp_ch_nagant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function abp_ch_nagant.abp_ch_nagant_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAbp_ch_nagant_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ch_nagant_C", "AnimGraph");

	Params::UAbp_ch_nagant_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function abp_ch_nagant.abp_ch_nagant_C.EvaluateGraphExposedInputs_ExecuteUbergraph_abp_ch_nagant_AnimGraphNode_ModifyBone_02AA1C224290625D151ACEACEF924F74
// (BlueprintEvent)
// Parameters:

void UAbp_ch_nagant_C::EvaluateGraphExposedInputs_ExecuteUbergraph_abp_ch_nagant_AnimGraphNode_ModifyBone_02AA1C224290625D151ACEACEF924F74()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ch_nagant_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_abp_ch_nagant_AnimGraphNode_ModifyBone_02AA1C224290625D151ACEACEF924F74");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_ch_nagant.abp_ch_nagant_C.AnimNotify_BarrelRollOnShoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbp_ch_nagant_C::AnimNotify_BarrelRollOnShoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ch_nagant_C", "AnimNotify_BarrelRollOnShoot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_ch_nagant.abp_ch_nagant_C.ExecuteUbergraph_abp_ch_nagant
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbp_ch_nagant_C::ExecuteUbergraph_abp_ch_nagant(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ch_nagant_C", "ExecuteUbergraph_abp_ch_nagant");

	Params::UAbp_ch_nagant_C_ExecuteUbergraph_abp_ch_nagant_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function abp_ch_nagant.abp_ch_nagant_C.StartOnShotBarrelRoll__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbp_ch_nagant_C::StartOnShotBarrelRoll__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ch_nagant_C", "StartOnShotBarrelRoll__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


