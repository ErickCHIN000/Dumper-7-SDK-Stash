#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Harvest_Resource.BP_Interactable_Harvest_Resource_C
// (None)

class UClass* UBP_Interactable_Harvest_Resource_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Harvest_Resource_C");

	return Clss;
}


// BP_Interactable_Harvest_Resource_C BP_Interactable_Harvest_Resource.Default__BP_Interactable_Harvest_Resource_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_Harvest_Resource_C* UBP_Interactable_Harvest_Resource_C::GetDefaultObj()
{
	static class UBP_Interactable_Harvest_Resource_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_Harvest_Resource_C*>(UBP_Interactable_Harvest_Resource_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_Harvest_Resource.BP_Interactable_Harvest_Resource_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Interactable_Harvest_Resource_C::CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Resource_C", "CanInteract");

	Params::UBP_Interactable_Harvest_Resource_C_CanInteract_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Interactable_Harvest_Resource.BP_Interactable_Harvest_Resource_C.Interact
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Interactable_Harvest_Resource_C::Interact(class AActor* Instigator, struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Resource_C", "Interact");

	Params::UBP_Interactable_Harvest_Resource_C_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_Harvest_Resource.BP_Interactable_Harvest_Resource_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Interactable_Harvest_Resource_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Resource_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interactable_Harvest_Resource.BP_Interactable_Harvest_Resource_C.PlayPickupFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Interactable_Harvest_Resource_C::PlayPickupFX(class AIcarusPlayerCharacter* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Resource_C", "PlayPickupFX");

	Params::UBP_Interactable_Harvest_Resource_C_PlayPickupFX_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_Harvest_Resource.BP_Interactable_Harvest_Resource_C.ExecuteUbergraph_BP_Interactable_Harvest_Resource
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHandedness             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ResourceNodeBase_C*      K2Node_DynamicCast_AsBP_Resource_Node_Base                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      K2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValidity           CallFunc_GetFocusedItemData_Validity                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetFocusedItemData_ReturnValue                          (ContainsInstancedReference)
// struct FItemAttachmentData         CallFunc_GetFocusableAttachmentData_AttachmentData               (None)
// enum class EDataValid              CallFunc_GetFocusableAttachmentData_Paths                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHandedness             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Interactable_Harvest_Resource_C::ExecuteUbergraph_BP_Interactable_Harvest_Resource(int32 EntryPoint, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, class UAnimMontage* Temp_object_Variable_2, enum class EHandedness Temp_byte_Variable, class UAnimMontage* Temp_object_Variable_3, class UAnimMontage* Temp_object_Variable_4, class UAnimMontage* Temp_object_Variable_5, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_ResourceNodeBase_C* K2Node_DynamicCast_AsBP_Resource_Node_Base, bool K2Node_DynamicCast_bSuccess_1, class AIcarusPlayerCharacter* K2Node_CustomEvent_Target, enum class EDataValidity CallFunc_GetFocusedItemData_Validity, const struct FItemData& CallFunc_GetFocusedItemData_ReturnValue, const struct FItemAttachmentData& CallFunc_GetFocusableAttachmentData_AttachmentData, enum class EDataValid CallFunc_GetFocusableAttachmentData_Paths, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAnimMontage* K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EHandedness Temp_byte_Variable_1, bool CallFunc_IsServer_ReturnValue, class UAnimMontage* K2Node_Select_Default_1, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Harvest_Resource_C", "ExecuteUbergraph_BP_Interactable_Harvest_Resource");

	Params::UBP_Interactable_Harvest_Resource_C_ExecuteUbergraph_BP_Interactable_Harvest_Resource_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Resource_Node_Base = K2Node_DynamicCast_AsBP_Resource_Node_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.CallFunc_GetFocusedItemData_Validity = CallFunc_GetFocusedItemData_Validity;
	Parms.CallFunc_GetFocusedItemData_ReturnValue = CallFunc_GetFocusedItemData_ReturnValue;
	Parms.CallFunc_GetFocusableAttachmentData_AttachmentData = CallFunc_GetFocusableAttachmentData_AttachmentData;
	Parms.CallFunc_GetFocusableAttachmentData_Paths = CallFunc_GetFocusableAttachmentData_Paths;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1 = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


