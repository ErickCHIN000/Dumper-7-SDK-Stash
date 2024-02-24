#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass abp_syringe_00.abp_syringe_00_C
// (None)

class UClass* UAbp_syringe_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("abp_syringe_00_C");

	return Clss;
}


// abp_syringe_00_C abp_syringe_00.Default__abp_syringe_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbp_syringe_00_C* UAbp_syringe_00_C::GetDefaultObj()
{
	static class UAbp_syringe_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbp_syringe_00_C*>(UAbp_syringe_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function abp_syringe_00.abp_syringe_00_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAbp_syringe_00_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_syringe_00_C", "AnimGraph");

	Params::UAbp_syringe_00_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function abp_syringe_00.abp_syringe_00_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbp_syringe_00_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_syringe_00_C", "BlueprintUpdateAnimation");

	Params::UAbp_syringe_00_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function abp_syringe_00.abp_syringe_00_C.ExecuteUbergraph_abp_syringe_00
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponent_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbp_syringe_00_C::ExecuteUbergraph_abp_syringe_00(int32 EntryPoint, float CallFunc_GetCurveValue_ReturnValue, float K2Node_Event_DeltaTimeX, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_syringe_00_C", "ExecuteUbergraph_abp_syringe_00");

	Params::UAbp_syringe_00_C_ExecuteUbergraph_abp_syringe_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningComponent_ReturnValue = CallFunc_GetOwningComponent_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


