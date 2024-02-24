#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Enter_Seat_Mount.BP_Interactable_Enter_Seat_Mount_C
// (None)

class UClass* UBP_Interactable_Enter_Seat_Mount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Enter_Seat_Mount_C");

	return Clss;
}


// BP_Interactable_Enter_Seat_Mount_C BP_Interactable_Enter_Seat_Mount.Default__BP_Interactable_Enter_Seat_Mount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_Enter_Seat_Mount_C* UBP_Interactable_Enter_Seat_Mount_C::GetDefaultObj()
{
	static class UBP_Interactable_Enter_Seat_Mount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_Enter_Seat_Mount_C*>(UBP_Interactable_Enter_Seat_Mount_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_Enter_Seat_Mount.BP_Interactable_Enter_Seat_Mount_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanInteract_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusMountCharacter*       K2Node_DynamicCast_AsIcarus_Mount_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBeingRidden_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_PlayerCharacterID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASeatBase*                   CallFunc_GetSeatActor_Seat                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSeatActor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASeatBase*                   K2Node_DynamicCast_AsSeat_Base                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetParentActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlayerEnterSeat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Interactable_Enter_Seat_Mount_C::CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_CanInteract_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* Temp_wildcard_Variable, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsBeingRidden_ReturnValue, bool CallFunc_IsValid_PlayerCharacterID_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ASeatBase* CallFunc_GetSeatActor_Seat, bool CallFunc_GetSeatActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ASeatBase* K2Node_DynamicCast_AsSeat_Base, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetParentActor_ReturnValue, bool CallFunc_CanPlayerEnterSeat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Enter_Seat_Mount_C", "CanInteract");

	Params::UBP_Interactable_Enter_Seat_Mount_C_CanInteract_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;
	Parms.CallFunc_CanInteract_ReturnValue = CallFunc_CanInteract_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.K2Node_DynamicCast_AsIcarus_Mount_Character = K2Node_DynamicCast_AsIcarus_Mount_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsBeingRidden_ReturnValue = CallFunc_IsBeingRidden_ReturnValue;
	Parms.CallFunc_IsValid_PlayerCharacterID_ReturnValue = CallFunc_IsValid_PlayerCharacterID_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetSeatActor_Seat = CallFunc_GetSeatActor_Seat;
	Parms.CallFunc_GetSeatActor_ReturnValue = CallFunc_GetSeatActor_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsSeat_Base = K2Node_DynamicCast_AsSeat_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetParentActor_ReturnValue = CallFunc_GetParentActor_ReturnValue;
	Parms.CallFunc_CanPlayerEnterSeat_ReturnValue = CallFunc_CanPlayerEnterSeat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_Enter_Seat_Mount.BP_Interactable_Enter_Seat_Mount_C.Interact
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Interactable_Enter_Seat_Mount_C::Interact(class AActor* Instigator, struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Enter_Seat_Mount_C", "Interact");

	Params::UBP_Interactable_Enter_Seat_Mount_C_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_Enter_Seat_Mount.BP_Interactable_Enter_Seat_Mount_C.ExecuteUbergraph_BP_Interactable_Enter_Seat_Mount
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusMountCharacter*       K2Node_DynamicCast_AsIcarus_Mount_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     K2Node_DynamicCast_AsIcarus_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASeatBase*                   CallFunc_GetSeatActor_Seat                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSeatActor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EnterSeat_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusMountCharacter*       K2Node_DynamicCast_AsIcarus_Mount_Character_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Interactable_Enter_Seat_Mount_C::ExecuteUbergraph_BP_Interactable_Enter_Seat_Mount(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess_2, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_3, class ASeatBase* CallFunc_GetSeatActor_Seat, bool CallFunc_GetSeatActor_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EnterSeat_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character_1, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Enter_Seat_Mount_C", "ExecuteUbergraph_BP_Interactable_Enter_Seat_Mount");

	Params::UBP_Interactable_Enter_Seat_Mount_C_ExecuteUbergraph_BP_Interactable_Enter_Seat_Mount_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Mount_Character = K2Node_DynamicCast_AsIcarus_Mount_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller = K2Node_DynamicCast_AsIcarus_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetSeatActor_Seat = CallFunc_GetSeatActor_Seat;
	Parms.CallFunc_GetSeatActor_ReturnValue = CallFunc_GetSeatActor_ReturnValue;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EnterSeat_ReturnValue = CallFunc_EnterSeat_ReturnValue;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsIcarus_Mount_Character_1 = K2Node_DynamicCast_AsIcarus_Mount_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


