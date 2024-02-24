#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CreatureNamePlate.WBP_CreatureNamePlate_C
// (None)

class UClass* UWBP_CreatureNamePlate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CreatureNamePlate_C");

	return Clss;
}


// WBP_CreatureNamePlate_C WBP_CreatureNamePlate.Default__WBP_CreatureNamePlate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CreatureNamePlate_C* UWBP_CreatureNamePlate_C::GetDefaultObj()
{
	static class UWBP_CreatureNamePlate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CreatureNamePlate_C*>(UWBP_CreatureNamePlate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.InitializeDesignerPreview
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CreatureNamePlate_C::InitializeDesignerPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "InitializeDesignerPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.TryGetGenericNPCName
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        NPCName                                                          (Parm, OutParm)
// class FName                        LNoneName                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStringTableEntryHandle     CallFunc_GetNPCNameHandle_OutNameHandle                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNPCNameText_NPCName                                  (None)

void UWBP_CreatureNamePlate_C::TryGetGenericNPCName(class FText* NPCName, class FName LNoneName, const struct FStringTableEntryHandle& CallFunc_GetNPCNameHandle_OutNameHandle, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class FText CallFunc_GetNPCNameText_NPCName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "TryGetGenericNPCName");

	Params::UWBP_CreatureNamePlate_C_TryGetGenericNPCName_Params Parms{};

	Parms.LNoneName = LNoneName;
	Parms.CallFunc_GetNPCNameHandle_OutNameHandle = CallFunc_GetNPCNameHandle_OutNameHandle;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetNPCNameText_NPCName = CallFunc_GetNPCNameText_NPCName;

	UObject::ProcessEvent(Func, &Parms);

	if (NPCName != nullptr)
		*NPCName = Parms.NPCName;

}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.BP_OnActorTypeUpdated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          K2Node_DynamicCast_AsBP_Creature_NPC                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CreatureNamePlate_C::BP_OnActorTypeUpdated(bool CallFunc_IsValid_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "BP_OnActorTypeUpdated");

	Params::UWBP_CreatureNamePlate_C_BP_OnActorTypeUpdated_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC = K2Node_DynamicCast_AsBP_Creature_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.GetActorTypeFromOwningActor
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class EUIActorType            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DialogueComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EUIActorType UWBP_CreatureNamePlate_C::GetActorTypeFromOwningActor(class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, class UBP_DialogueComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "GetActorTypeFromOwningActor");

	Params::UWBP_CreatureNamePlate_C_GetActorTypeFromOwningActor_Params Parms{};

	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue_2 = CallFunc_GetObjectClass_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_2 = CallFunc_ClassIsChildOf_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.UpdateHPBarVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        LVisibility                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LIsHealthNearlyZero                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibilityByRules_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTweening_IsTweening                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CreatureNamePlate_C::UpdateHPBarVisibility(enum class ESlateVisibility LVisibility, bool LIsHealthNearlyZero, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, enum class ESlateVisibility CallFunc_GetVisibilityByRules_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, int32 K2Node_Select_Default, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_IsTweening_IsTweening, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "UpdateHPBarVisibility");

	Params::UWBP_CreatureNamePlate_C_UpdateHPBarVisibility_Params Parms{};

	Parms.LVisibility = LVisibility;
	Parms.LIsHealthNearlyZero = LIsHealthNearlyZero;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetVisibilityByRules_ReturnValue = CallFunc_GetVisibilityByRules_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsTweening_IsTweening = CallFunc_IsTweening_IsTweening;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.InitializeName
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CreatureNamePlate_C::InitializeName(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "InitializeName");

	Params::UWBP_CreatureNamePlate_C_InitializeName_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.InitializeHPBar
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAttributeSet*               CallFunc_GetAttributeSet_ReturnValue                             (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXAttributeSet*            K2Node_DynamicCast_AsNWXAttribute_Set                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CreatureNamePlate_C::InitializeHPBar(class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAttributeSet* CallFunc_GetAttributeSet_ReturnValue, class UNWXAttributeSet* K2Node_DynamicCast_AsNWXAttribute_Set, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "InitializeHPBar");

	Params::UWBP_CreatureNamePlate_C_InitializeHPBar_Params Parms{};

	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetAttributeSet_ReturnValue = CallFunc_GetAttributeSet_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXAttribute_Set = K2Node_DynamicCast_AsNWXAttribute_Set;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.UpdateSubtext
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IAICompanionInterface>K2Node_DynamicCast_AsAICompanion_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLeaderName_LeaderName                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLeaderName_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAICompanionInterface>K2Node_DynamicCast_AsAICompanion_Interface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERecruitmentFailureReasonCallFunc_CanBeRecruited_OutFailureReason                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeRecruited_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_CreatureNamePlate_C::UpdateSubtext(bool CallFunc_IsValid_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetPlayerName_ReturnValue, TScriptInterface<class IAICompanionInterface> K2Node_DynamicCast_AsAICompanion_Interface, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetLeaderName_LeaderName, bool CallFunc_GetLeaderName_ReturnValue, TScriptInterface<class IAICompanionInterface> K2Node_DynamicCast_AsAICompanion_Interface_1, bool K2Node_DynamicCast_bSuccess_1, enum class ERecruitmentFailureReason CallFunc_CanBeRecruited_OutFailureReason, bool CallFunc_CanBeRecruited_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, bool Temp_bool_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "UpdateSubtext");

	Params::UWBP_CreatureNamePlate_C_UpdateSubtext_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.K2Node_DynamicCast_AsAICompanion_Interface = K2Node_DynamicCast_AsAICompanion_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLeaderName_LeaderName = CallFunc_GetLeaderName_LeaderName;
	Parms.CallFunc_GetLeaderName_ReturnValue = CallFunc_GetLeaderName_ReturnValue;
	Parms.K2Node_DynamicCast_AsAICompanion_Interface_1 = K2Node_DynamicCast_AsAICompanion_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CanBeRecruited_OutFailureReason = CallFunc_CanBeRecruited_OutFailureReason;
	Parms.CallFunc_CanBeRecruited_ReturnValue = CallFunc_CanBeRecruited_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.UpdateSpyglassVisibility
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CreatureNamePlate_C::UpdateSpyglassVisibility(const struct FGameplayTag& Temp_struct_Variable, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "UpdateSpyglassVisibility");

	Params::UWBP_CreatureNamePlate_C_UpdateSpyglassVisibility_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetTruncatedName_OutName                                (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceToPlayer_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTruncatedName_DistanceToPlayer_ImplicitCast          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DistanceToPlayer_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CreatureNamePlate_C::Refresh(class FText CallFunc_GetTruncatedName_OutName, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetDistanceToPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetTruncatedName_DistanceToPlayer_ImplicitCast, double K2Node_VariableSet_DistanceToPlayer_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "Refresh");

	Params::UWBP_CreatureNamePlate_C_Refresh_Params Parms{};

	Parms.CallFunc_GetTruncatedName_OutName = CallFunc_GetTruncatedName_OutName;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDistanceToPlayer_ReturnValue = CallFunc_GetDistanceToPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTruncatedName_DistanceToPlayer_ImplicitCast = CallFunc_GetTruncatedName_DistanceToPlayer_ImplicitCast;
	Parms.K2Node_VariableSet_DistanceToPlayer_ImplicitCast = K2Node_VariableSet_DistanceToPlayer_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.InitializeGenericNPCInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_TryGetGenericNPCName_NPCName                            (None)

void UWBP_CreatureNamePlate_C::InitializeGenericNPCInfo(class FText CallFunc_TryGetGenericNPCName_NPCName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "InitializeGenericNPCInfo");

	Params::UWBP_CreatureNamePlate_C_InitializeGenericNPCInfo_Params Parms{};

	Parms.CallFunc_TryGetGenericNPCName_NPCName = CallFunc_TryGetGenericNPCName_NPCName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.InitializeNarrativeNPCInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LName                                                            (Edit, BlueprintVisible)
// class FText                        CallFunc_TryGetGenericNPCName_NPCName                            (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTruncatedName_OutName                                (None)
// class UBP_DialogueComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// float                              CallFunc_GetTruncatedName_DistanceToPlayer_ImplicitCast          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CreatureNamePlate_C::InitializeNarrativeNPCInfo(class FText LName, class FText CallFunc_TryGetGenericNPCName_NPCName, bool CallFunc_TextIsEmpty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetTruncatedName_OutName, class UBP_DialogueComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_GetTruncatedName_DistanceToPlayer_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "InitializeNarrativeNPCInfo");

	Params::UWBP_CreatureNamePlate_C_InitializeNarrativeNPCInfo_Params Parms{};

	Parms.LName = LName;
	Parms.CallFunc_TryGetGenericNPCName_NPCName = CallFunc_TryGetGenericNPCName_NPCName;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetTruncatedName_OutName = CallFunc_GetTruncatedName_OutName;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetTruncatedName_DistanceToPlayer_ImplicitCast = CallFunc_GetTruncatedName_DistanceToPlayer_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.InitializeCreatureInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          L_CreatureRef                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCreatureRealmPower_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_BreakCreatureUIInfo_CreatureName                        (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_BreakCreatureUIInfo_CreatureIcon                        (HasGetValueTypeHash)
// int32                              CallFunc_BreakCreatureUIInfo_FerocityMin                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakCreatureUIInfo_FerocityMax                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EBiomeID>        CallFunc_BreakCreatureUIInfo_Biomes                              (ReferenceParm)
// bool                               CallFunc_BreakCreatureUIInfo_ShowNameplate                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CreatureNamePlate_C::InitializeCreatureInfo(class ABP_CreatureBase_C* L_CreatureRef, int32 CallFunc_GetCreatureRealmPower_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_BreakCreatureUIInfo_CreatureName, TSoftObjectPtr<class UTexture2D> CallFunc_BreakCreatureUIInfo_CreatureIcon, int32 CallFunc_BreakCreatureUIInfo_FerocityMin, int32 CallFunc_BreakCreatureUIInfo_FerocityMax, TArray<enum class EBiomeID>& CallFunc_BreakCreatureUIInfo_Biomes, bool CallFunc_BreakCreatureUIInfo_ShowNameplate, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "InitializeCreatureInfo");

	Params::UWBP_CreatureNamePlate_C_InitializeCreatureInfo_Params Parms{};

	Parms.L_CreatureRef = L_CreatureRef;
	Parms.CallFunc_GetCreatureRealmPower_ReturnValue = CallFunc_GetCreatureRealmPower_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_BreakCreatureUIInfo_CreatureName = CallFunc_BreakCreatureUIInfo_CreatureName;
	Parms.CallFunc_BreakCreatureUIInfo_CreatureIcon = CallFunc_BreakCreatureUIInfo_CreatureIcon;
	Parms.CallFunc_BreakCreatureUIInfo_FerocityMin = CallFunc_BreakCreatureUIInfo_FerocityMin;
	Parms.CallFunc_BreakCreatureUIInfo_FerocityMax = CallFunc_BreakCreatureUIInfo_FerocityMax;
	Parms.CallFunc_BreakCreatureUIInfo_Biomes = CallFunc_BreakCreatureUIInfo_Biomes;
	Parms.CallFunc_BreakCreatureUIInfo_ShowNameplate = CallFunc_BreakCreatureUIInfo_ShowNameplate;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceToPlayer_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DistanceToPlayer_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CreatureNamePlate_C::Initialize(bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetDistanceToPlayer_ReturnValue, double K2Node_VariableSet_DistanceToPlayer_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "Initialize");

	Params::UWBP_CreatureNamePlate_C_Initialize_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDistanceToPlayer_ReturnValue = CallFunc_GetDistanceToPlayer_ReturnValue;
	Parms.K2Node_VariableSet_DistanceToPlayer_ImplicitCast = K2Node_VariableSet_DistanceToPlayer_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.OnPawnPossessedAndReady
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CreatureNamePlate_C::OnPawnPossessedAndReady(class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "OnPawnPossessedAndReady");

	Params::UWBP_CreatureNamePlate_C_OnPawnPossessedAndReady_Params Parms{};

	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CreatureNamePlate_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "Tick");

	Params::UWBP_CreatureNamePlate_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CreatureNamePlate.WBP_CreatureNamePlate_C.ExecuteUbergraph_WBP_CreatureNamePlate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_NewPawn                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CreatureNamePlate_C::ExecuteUbergraph_WBP_CreatureNamePlate(int32 EntryPoint, class APawn* K2Node_Event_NewPawn, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreatureNamePlate_C", "ExecuteUbergraph_WBP_CreatureNamePlate");

	Params::UWBP_CreatureNamePlate_C_ExecuteUbergraph_WBP_CreatureNamePlate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewPawn = K2Node_Event_NewPawn;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


