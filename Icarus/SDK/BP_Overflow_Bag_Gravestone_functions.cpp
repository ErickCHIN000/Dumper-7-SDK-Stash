#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Overflow_Bag_Gravestone.BP_Overflow_Bag_Gravestone_C
// (Actor)

class UClass* ABP_Overflow_Bag_Gravestone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Overflow_Bag_Gravestone_C");

	return Clss;
}


// BP_Overflow_Bag_Gravestone_C BP_Overflow_Bag_Gravestone.Default__BP_Overflow_Bag_Gravestone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Overflow_Bag_Gravestone_C* ABP_Overflow_Bag_Gravestone_C::GetDefaultObj()
{
	static class ABP_Overflow_Bag_Gravestone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Overflow_Bag_Gravestone_C*>(ABP_Overflow_Bag_Gravestone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Overflow_Bag_Gravestone.BP_Overflow_Bag_Gravestone_C.NetMulticast_Unstuck
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     NewLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Overflow_Bag_Gravestone_C::NetMulticast_Unstuck(const struct FVector& NewLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Overflow_Bag_Gravestone_C", "NetMulticast_Unstuck");

	Params::ABP_Overflow_Bag_Gravestone_C_NetMulticast_Unstuck_Params Parms{};

	Parms.NewLocation = NewLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Overflow_Bag_Gravestone.BP_Overflow_Bag_Gravestone_C.ExecuteUbergraph_BP_Overflow_Bag_Gravestone
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_NewLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Overflow_Bag_Gravestone_C::ExecuteUbergraph_BP_Overflow_Bag_Gravestone(int32 EntryPoint, const struct FVector& K2Node_CustomEvent_NewLocation, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Overflow_Bag_Gravestone_C", "ExecuteUbergraph_BP_Overflow_Bag_Gravestone");

	Params::ABP_Overflow_Bag_Gravestone_C_ExecuteUbergraph_BP_Overflow_Bag_Gravestone_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewLocation = K2Node_CustomEvent_NewLocation;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


