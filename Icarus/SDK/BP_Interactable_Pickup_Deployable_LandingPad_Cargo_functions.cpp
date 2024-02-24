#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Pickup_Deployable_LandingPad_Cargo.BP_Interactable_Pickup_Deployable_LandingPad_Cargo_C
// (None)

class UClass* UBP_Interactable_Pickup_Deployable_LandingPad_Cargo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Pickup_Deployable_LandingPad_Cargo_C");

	return Clss;
}


// BP_Interactable_Pickup_Deployable_LandingPad_Cargo_C BP_Interactable_Pickup_Deployable_LandingPad_Cargo.Default__BP_Interactable_Pickup_Deployable_LandingPad_Cargo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_Pickup_Deployable_LandingPad_Cargo_C* UBP_Interactable_Pickup_Deployable_LandingPad_Cargo_C::GetDefaultObj()
{
	static class UBP_Interactable_Pickup_Deployable_LandingPad_Cargo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_Pickup_Deployable_LandingPad_Cargo_C*>(UBP_Interactable_Pickup_Deployable_LandingPad_Cargo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_Pickup_Deployable_LandingPad_Cargo.BP_Interactable_Pickup_Deployable_LandingPad_Cargo_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanInteract_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCargoLandingPadComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAssignedSlot_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Interactable_Pickup_Deployable_LandingPad_Cargo_C::CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_CanInteract_ReturnValue, class UCargoLandingPadComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAssignedSlot_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Pickup_Deployable_LandingPad_Cargo_C", "CanInteract");

	Params::UBP_Interactable_Pickup_Deployable_LandingPad_Cargo_C_CanInteract_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;
	Parms.CallFunc_CanInteract_ReturnValue = CallFunc_CanInteract_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAssignedSlot_ReturnValue = CallFunc_HasAssignedSlot_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_Pickup_Deployable_LandingPad_Cargo.BP_Interactable_Pickup_Deployable_LandingPad_Cargo_C.Pickup Item
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PickedUp                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     DeployPos                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FoundAssigned                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Deployable_Pickup_PickedUp                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCargoLandingPadComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAssignedSlot_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Interactable_Pickup_Deployable_LandingPad_Cargo_C::Pickup_Item(bool* PickedUp, const struct FVector& DeployPos, bool FoundAssigned, bool CallFunc_Deployable_Pickup_PickedUp, class UCargoLandingPadComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAssignedSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Pickup_Deployable_LandingPad_Cargo_C", "Pickup Item");

	Params::UBP_Interactable_Pickup_Deployable_LandingPad_Cargo_C_Pickup_Item_Params Parms{};

	Parms.DeployPos = DeployPos;
	Parms.FoundAssigned = FoundAssigned;
	Parms.CallFunc_Deployable_Pickup_PickedUp = CallFunc_Deployable_Pickup_PickedUp;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAssignedSlot_ReturnValue = CallFunc_HasAssignedSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PickedUp != nullptr)
		*PickedUp = Parms.PickedUp;

}

}


