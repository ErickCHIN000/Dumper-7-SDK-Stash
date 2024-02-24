#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Interact_Activate_Prototype_Laser.BP_Interactable_Interact_Activate_Prototype_Laser_C
// (None)

class UClass* UBP_Interactable_Interact_Activate_Prototype_Laser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Interact_Activate_Prototype_Laser_C");

	return Clss;
}


// BP_Interactable_Interact_Activate_Prototype_Laser_C BP_Interactable_Interact_Activate_Prototype_Laser.Default__BP_Interactable_Interact_Activate_Prototype_Laser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_Interact_Activate_Prototype_Laser_C* UBP_Interactable_Interact_Activate_Prototype_Laser_C::GetDefaultObj()
{
	static class UBP_Interactable_Interact_Activate_Prototype_Laser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_Interact_Activate_Prototype_Laser_C*>(UBP_Interactable_Interact_Activate_Prototype_Laser_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_Interact_Activate_Prototype_Laser.BP_Interactable_Interact_Activate_Prototype_Laser_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Faction_Mission_Prototype_Laser_C*K2Node_DynamicCast_AsBP_Faction_Mission_Prototype_Laser          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Interactable_Interact_Activate_Prototype_Laser_C::CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Faction_Mission_Prototype_Laser_C* K2Node_DynamicCast_AsBP_Faction_Mission_Prototype_Laser, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Interact_Activate_Prototype_Laser_C", "CanInteract");

	Params::UBP_Interactable_Interact_Activate_Prototype_Laser_C_CanInteract_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Faction_Mission_Prototype_Laser = K2Node_DynamicCast_AsBP_Faction_Mission_Prototype_Laser;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_Interact_Activate_Prototype_Laser.BP_Interactable_Interact_Activate_Prototype_Laser_C.Interact
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Interactable_Interact_Activate_Prototype_Laser_C::Interact(class AActor* Instigator, struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Interact_Activate_Prototype_Laser_C", "Interact");

	Params::UBP_Interactable_Interact_Activate_Prototype_Laser_C_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_Interact_Activate_Prototype_Laser.BP_Interactable_Interact_Activate_Prototype_Laser_C.ExecuteUbergraph_BP_Interactable_Interact_Activate_Prototype_Laser
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Faction_Mission_Laser_C* K2Node_DynamicCast_AsBP_Faction_Mission_Laser                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Interactable_Interact_Activate_Prototype_Laser_C::ExecuteUbergraph_BP_Interactable_Interact_Activate_Prototype_Laser(int32 EntryPoint, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Faction_Mission_Laser_C* K2Node_DynamicCast_AsBP_Faction_Mission_Laser, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Interact_Activate_Prototype_Laser_C", "ExecuteUbergraph_BP_Interactable_Interact_Activate_Prototype_Laser");

	Params::UBP_Interactable_Interact_Activate_Prototype_Laser_C_ExecuteUbergraph_BP_Interactable_Interact_Activate_Prototype_Laser_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Faction_Mission_Laser = K2Node_DynamicCast_AsBP_Faction_Mission_Laser;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


