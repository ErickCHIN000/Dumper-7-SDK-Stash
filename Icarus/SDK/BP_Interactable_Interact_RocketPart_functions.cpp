#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Interact_RocketPart.BP_Interactable_Interact_RocketPart_C
// (None)

class UClass* UBP_Interactable_Interact_RocketPart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Interact_RocketPart_C");

	return Clss;
}


// BP_Interactable_Interact_RocketPart_C BP_Interactable_Interact_RocketPart.Default__BP_Interactable_Interact_RocketPart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_Interact_RocketPart_C* UBP_Interactable_Interact_RocketPart_C::GetDefaultObj()
{
	static class UBP_Interactable_Interact_RocketPart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_Interact_RocketPart_C*>(UBP_Interactable_Interact_RocketPart_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_Interact_RocketPart.BP_Interactable_Interact_RocketPart_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PartBase_C*              K2Node_DynamicCast_AsBP_Part_Base                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerControllerSurvival*CallFunc_GetAssignedPlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Interactable_Interact_RocketPart_C::CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_PartBase_C* K2Node_DynamicCast_AsBP_Part_Base, bool K2Node_DynamicCast_bSuccess_1, class AIcarusPlayerControllerSurvival* CallFunc_GetAssignedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Interact_RocketPart_C", "CanInteract");

	Params::UBP_Interactable_Interact_RocketPart_C_CanInteract_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Part_Base = K2Node_DynamicCast_AsBP_Part_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAssignedPlayer_ReturnValue = CallFunc_GetAssignedPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_Interact_RocketPart.BP_Interactable_Interact_RocketPart_C.Interact
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Interactable_Interact_RocketPart_C::Interact(class AActor* Instigator, struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Interact_RocketPart_C", "Interact");

	Params::UBP_Interactable_Interact_RocketPart_C_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_Interact_RocketPart.BP_Interactable_Interact_RocketPart_C.ExecuteUbergraph_BP_Interactable_Interact_RocketPart
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PartBase_C*              K2Node_DynamicCast_AsBP_Part_Base                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_WorldInteract_HitResult                                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Interactable_Interact_RocketPart_C::ExecuteUbergraph_BP_Interactable_Interact_RocketPart(int32 EntryPoint, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_PartBase_C* K2Node_DynamicCast_AsBP_Part_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_WorldInteract_HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Interact_RocketPart_C", "ExecuteUbergraph_BP_Interactable_Interact_RocketPart");

	Params::UBP_Interactable_Interact_RocketPart_C_ExecuteUbergraph_BP_Interactable_Interact_RocketPart_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Part_Base = K2Node_DynamicCast_AsBP_Part_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_WorldInteract_HitResult = CallFunc_WorldInteract_HitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


