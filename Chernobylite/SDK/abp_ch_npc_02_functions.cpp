#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass abp_ch_npc_02.abp_ch_npc_02_C
// (None)

class UClass* UAbp_ch_npc_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("abp_ch_npc_02_C");

	return Clss;
}


// abp_ch_npc_02_C abp_ch_npc_02.Default__abp_ch_npc_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbp_ch_npc_02_C* UAbp_ch_npc_02_C::GetDefaultObj()
{
	static class UAbp_ch_npc_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbp_ch_npc_02_C*>(UAbp_ch_npc_02_C::StaticClass()->DefaultObject);

	return Default;
}


// Function abp_ch_npc_02.abp_ch_npc_02_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAbp_ch_npc_02_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ch_npc_02_C", "AnimGraph");

	Params::UAbp_ch_npc_02_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function abp_ch_npc_02.abp_ch_npc_02_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbp_ch_npc_02_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ch_npc_02_C", "BlueprintUpdateAnimation");

	Params::UAbp_ch_npc_02_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function abp_ch_npc_02.abp_ch_npc_02_C.ExecuteUbergraph_abp_ch_npc_02
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGNPC*                      K2Node_DynamicCast_AsCGNPC                                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbp_ch_npc_02_C::ExecuteUbergraph_abp_ch_npc_02(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ACGNPC* K2Node_DynamicCast_AsCGNPC, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_ch_npc_02_C", "ExecuteUbergraph_abp_ch_npc_02");

	Params::UAbp_ch_npc_02_C_ExecuteUbergraph_abp_ch_npc_02_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGNPC = K2Node_DynamicCast_AsCGNPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


