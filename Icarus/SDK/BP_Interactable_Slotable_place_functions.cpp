#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Slotable_place.BP_Interactable_Slotable_place_C
// (None)

class UClass* UBP_Interactable_Slotable_place_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Slotable_place_C");

	return Clss;
}


// BP_Interactable_Slotable_place_C BP_Interactable_Slotable_place.Default__BP_Interactable_Slotable_place_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_Slotable_place_C* UBP_Interactable_Slotable_place_C::GetDefaultObj()
{
	static class UBP_Interactable_Slotable_place_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_Slotable_place_C*>(UBP_Interactable_Slotable_place_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_Slotable_place.BP_Interactable_Slotable_place_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_Slotable_C*              CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInteract_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanInteract_CanInteract                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanInteract_HitSlotVisualizer                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanInteract_PassedQuery                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_CanInteract_HitStaticMesh_Component                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_Interactable_Slotable_place_C::CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class UBP_Slotable_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CanInteract_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanInteract_CanInteract, bool CallFunc_CanInteract_HitSlotVisualizer, bool CallFunc_CanInteract_PassedQuery, class UStaticMeshComponent* CallFunc_CanInteract_HitStaticMesh_Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Slotable_place_C", "CanInteract");

	Params::UBP_Interactable_Slotable_place_C_CanInteract_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_CanInteract_ReturnValue = CallFunc_CanInteract_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CanInteract_CanInteract = CallFunc_CanInteract_CanInteract;
	Parms.CallFunc_CanInteract_HitSlotVisualizer = CallFunc_CanInteract_HitSlotVisualizer;
	Parms.CallFunc_CanInteract_PassedQuery = CallFunc_CanInteract_PassedQuery;
	Parms.CallFunc_CanInteract_HitStaticMesh_Component = CallFunc_CanInteract_HitStaticMesh_Component;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_Slotable_place.BP_Interactable_Slotable_place_C.Interact
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Interactable_Slotable_place_C::Interact(class AActor* Instigator, struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Slotable_place_C", "Interact");

	Params::UBP_Interactable_Slotable_place_C_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_Slotable_place.BP_Interactable_Slotable_place_C.ExecuteUbergraph_BP_Interactable_Slotable_place
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Slotable_C*              CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SlotableInteract_SuccessfullyInteracted                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Interactable_Slotable_place_C::ExecuteUbergraph_BP_Interactable_Slotable_place(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UBP_Slotable_C* CallFunc_GetComponentByClass_ReturnValue, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SlotableInteract_SuccessfullyInteracted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Slotable_place_C", "ExecuteUbergraph_BP_Interactable_Slotable_place");

	Params::UBP_Interactable_Slotable_place_C_ExecuteUbergraph_BP_Interactable_Slotable_place_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SlotableInteract_SuccessfullyInteracted = CallFunc_SlotableInteract_SuccessfullyInteracted;

	UObject::ProcessEvent(Func, &Parms);

}

}


