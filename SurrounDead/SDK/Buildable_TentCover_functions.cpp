#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_TentCover.Buildable_TentCover_C
// (Actor)

class UClass* ABuildable_TentCover_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_TentCover_C");

	return Clss;
}


// Buildable_TentCover_C Buildable_TentCover.Default__Buildable_TentCover_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_TentCover_C* ABuildable_TentCover_C::GetDefaultObj()
{
	static class ABuildable_TentCover_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_TentCover_C*>(ABuildable_TentCover_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buildable_TentCover.Buildable_TentCover_C.BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsBeyondLastLayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LayerIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSeen                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildable_TentCover_C::BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TentCover_C", "BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature");

	Params::ABuildable_TentCover_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature_Params Parms{};

	Parms.bIsBeyondLastLayer = bIsBeyondLastLayer;
	Parms.LayerIndex = LayerIndex;
	Parms.bIsSeen = bIsSeen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buildable_TentCover.Buildable_TentCover_C.ExecuteUbergraph_Buildable_TentCover
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsBeyondLastLayer                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_LayerIndex                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSeen                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildable_TentCover_C::ExecuteUbergraph_Buildable_TentCover(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsBeyondLastLayer, int32 K2Node_ComponentBoundEvent_LayerIndex, bool K2Node_ComponentBoundEvent_bIsSeen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TentCover_C", "ExecuteUbergraph_Buildable_TentCover");

	Params::ABuildable_TentCover_C_ExecuteUbergraph_Buildable_TentCover_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_bIsBeyondLastLayer = K2Node_ComponentBoundEvent_bIsBeyondLastLayer;
	Parms.K2Node_ComponentBoundEvent_LayerIndex = K2Node_ComponentBoundEvent_LayerIndex;
	Parms.K2Node_ComponentBoundEvent_bIsSeen = K2Node_ComponentBoundEvent_bIsSeen;

	UObject::ProcessEvent(Func, &Parms);

}

}


