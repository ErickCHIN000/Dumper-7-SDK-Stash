#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Interact_SatelliteAccessInventory.BP_Interactable_Interact_SatelliteAccessInventory_C
// (None)

class UClass* UBP_Interactable_Interact_SatelliteAccessInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Interact_SatelliteAccessInventory_C");

	return Clss;
}


// BP_Interactable_Interact_SatelliteAccessInventory_C BP_Interactable_Interact_SatelliteAccessInventory.Default__BP_Interactable_Interact_SatelliteAccessInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_Interact_SatelliteAccessInventory_C* UBP_Interactable_Interact_SatelliteAccessInventory_C::GetDefaultObj()
{
	static class UBP_Interactable_Interact_SatelliteAccessInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_Interact_SatelliteAccessInventory_C*>(UBP_Interactable_Interact_SatelliteAccessInventory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_Interact_SatelliteAccessInventory.BP_Interactable_Interact_SatelliteAccessInventory_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BW4_Satellite_Object_C*  K2Node_DynamicCast_AsBP_BW4_Satellite_Object                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Interactable_Interact_SatelliteAccessInventory_C::CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_BW4_Satellite_Object_C* K2Node_DynamicCast_AsBP_BW4_Satellite_Object, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Interact_SatelliteAccessInventory_C", "CanInteract");

	Params::UBP_Interactable_Interact_SatelliteAccessInventory_C_CanInteract_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_BW4_Satellite_Object = K2Node_DynamicCast_AsBP_BW4_Satellite_Object;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_Interact_SatelliteAccessInventory.BP_Interactable_Interact_SatelliteAccessInventory_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Interactable_Interact_SatelliteAccessInventory_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Interact_SatelliteAccessInventory_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interactable_Interact_SatelliteAccessInventory.BP_Interactable_Interact_SatelliteAccessInventory_C.ExecuteUbergraph_BP_Interactable_Interact_SatelliteAccessInventory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Interactable_Interact_SatelliteAccessInventory_C::ExecuteUbergraph_BP_Interactable_Interact_SatelliteAccessInventory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Interact_SatelliteAccessInventory_C", "ExecuteUbergraph_BP_Interactable_Interact_SatelliteAccessInventory");

	Params::UBP_Interactable_Interact_SatelliteAccessInventory_C_ExecuteUbergraph_BP_Interactable_Interact_SatelliteAccessInventory_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


