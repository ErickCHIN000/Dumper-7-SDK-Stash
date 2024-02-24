#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Pickup_Deployable_LandingPad.BP_Interactable_Pickup_Deployable_LandingPad_C
// (None)

class UClass* UBP_Interactable_Pickup_Deployable_LandingPad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Pickup_Deployable_LandingPad_C");

	return Clss;
}


// BP_Interactable_Pickup_Deployable_LandingPad_C BP_Interactable_Pickup_Deployable_LandingPad.Default__BP_Interactable_Pickup_Deployable_LandingPad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_Pickup_Deployable_LandingPad_C* UBP_Interactable_Pickup_Deployable_LandingPad_C::GetDefaultObj()
{
	static class UBP_Interactable_Pickup_Deployable_LandingPad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_Pickup_Deployable_LandingPad_C*>(UBP_Interactable_Pickup_Deployable_LandingPad_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_Pickup_Deployable_LandingPad.BP_Interactable_Pickup_Deployable_LandingPad_C.CanInteract
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanInteract_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULandingPadComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerCharacterID          CallFunc_GetPlayerID_ReturnValue                                 (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_PlayerCharacterID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Interactable_Pickup_Deployable_LandingPad_C::CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_CanInteract_ReturnValue, class ULandingPadComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPlayerCharacterID& CallFunc_GetPlayerID_ReturnValue, bool CallFunc_IsValid_PlayerCharacterID_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Pickup_Deployable_LandingPad_C", "CanInteract");

	Params::UBP_Interactable_Pickup_Deployable_LandingPad_C_CanInteract_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;
	Parms.CallFunc_CanInteract_ReturnValue = CallFunc_CanInteract_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerID_ReturnValue = CallFunc_GetPlayerID_ReturnValue;
	Parms.CallFunc_IsValid_PlayerCharacterID_ReturnValue = CallFunc_IsValid_PlayerCharacterID_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_Pickup_Deployable_LandingPad.BP_Interactable_Pickup_Deployable_LandingPad_C.Pickup Item
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PickedUp                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerCharacterID          AssignedPlayer                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_PlayerCharacterID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AIcarusRocket*>       CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class AIcarusRocket*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_PlayerCharacterIDPlayerCharacterID_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Deployable_Pickup_PickedUp                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULandingPadComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerCharacterID          CallFunc_GetPlayerID_ReturnValue                                 (HasGetValueTypeHash)

void UBP_Interactable_Pickup_Deployable_LandingPad_C::Pickup_Item(bool* PickedUp, const struct FPlayerCharacterID& AssignedPlayer, bool CallFunc_IsValid_PlayerCharacterID_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class AIcarusRocket*>& CallFunc_GetAllActorsOfClass_OutActors, class AIcarusRocket* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_EqualEqual_PlayerCharacterIDPlayerCharacterID_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Deployable_Pickup_PickedUp, class ULandingPadComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPlayerCharacterID& CallFunc_GetPlayerID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Pickup_Deployable_LandingPad_C", "Pickup Item");

	Params::UBP_Interactable_Pickup_Deployable_LandingPad_C_Pickup_Item_Params Parms{};

	Parms.AssignedPlayer = AssignedPlayer;
	Parms.CallFunc_IsValid_PlayerCharacterID_ReturnValue = CallFunc_IsValid_PlayerCharacterID_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_EqualEqual_PlayerCharacterIDPlayerCharacterID_ReturnValue = CallFunc_EqualEqual_PlayerCharacterIDPlayerCharacterID_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Deployable_Pickup_PickedUp = CallFunc_Deployable_Pickup_PickedUp;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerID_ReturnValue = CallFunc_GetPlayerID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PickedUp != nullptr)
		*PickedUp = Parms.PickedUp;

}

}


