#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Crafting_Step_Base.GA_Crafting_Step_Base_C
// (None)

class UClass* UGA_Crafting_Step_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Crafting_Step_Base_C");

	return Clss;
}


// GA_Crafting_Step_Base_C GA_Crafting_Step_Base.Default__GA_Crafting_Step_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Crafting_Step_Base_C* UGA_Crafting_Step_Base_C::GetDefaultObj()
{
	static class UGA_Crafting_Step_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Crafting_Step_Base_C*>(UGA_Crafting_Step_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Crafting_Step_Base.GA_Crafting_Step_Base_C.CraftCancelled
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       CancelledCraft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Base_C::CraftCancelled(const struct FGuid& CancelledCraft, bool CallFunc_EqualEqual_GuidGuid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Base_C", "CraftCancelled");

	Params::UGA_Crafting_Step_Base_C_CraftCancelled_Params Parms{};

	Parms.CancelledCraft = CancelledCraft;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Base.GA_Crafting_Step_Base_C.ActorPresentAtCraftingStation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectQuery        K2Node_MakeStruct_GameplayEffectQuery                            (None)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_GetActiveEffects_ReturnValue                            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Crafting_Step_Base_C::ActorPresentAtCraftingStation(class AActor* Actor, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectQuery& K2Node_MakeStruct_GameplayEffectQuery, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Base_C", "ActorPresentAtCraftingStation");

	Params::UGA_Crafting_Step_Base_C_ActorPresentAtCraftingStation_Params Parms{};

	Parms.Actor = Actor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEffectQuery = K2Node_MakeStruct_GameplayEffectQuery;
	Parms.CallFunc_GetActiveEffects_ReturnValue = CallFunc_GetActiveEffects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Crafting_Step_Base.GA_Crafting_Step_Base_C.InitializeCrafterVariables
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InstigatingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      InitialUniqueID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bCharacterPresent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCharacterPlayer                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      PlayerUniqueId                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class ANWXCharacter*               CraftingCharacter                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               InstigatingCharacter                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FString                      ID                                                               (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               bIsPlayer                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPresent                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorPresentAtCraftingStation_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorPresentAtCraftingStation_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_DynamicCast_AsNWXCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IOwnershipInterface>K2Node_DynamicCast_AsOwnership_Interface                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOwningPlayerPersistentID_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerStateFromId_PlayerState                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerStateSystems_C>K2Node_DynamicCast_AsBPI_Player_State_Systems                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      CallFunc_GetBPPlayerController_Player_Controller                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_DynamicCast_AsNWXCharacter_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IOwnershipAccessInterface>K2Node_DynamicCast_AsOwnership_Access_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwnershipObject_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Base_C::InitializeCrafterVariables(class AActor* InstigatingActor, const class FString& InitialUniqueID, bool* bCharacterPresent, bool* bCharacterPlayer, class FString* PlayerUniqueId, class ANWXCharacter** CraftingCharacter, class ANWXCharacter* InstigatingCharacter, const class FString& ID, bool bIsPlayer, bool bPresent, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorPresentAtCraftingStation_ReturnValue, bool CallFunc_ActorPresentAtCraftingStation_ReturnValue_1, class UObject* Temp_object_Variable, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IOwnershipInterface> K2Node_DynamicCast_AsOwnership_Interface, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetOwningPlayerPersistentID_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, class APlayerState* CallFunc_GetPlayerStateFromId_PlayerState, TScriptInterface<class IBPI_PlayerStateSystems_C> K2Node_DynamicCast_AsBPI_Player_State_Systems, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, class ABP_PlayerController_C* CallFunc_GetBPPlayerController_Player_Controller, bool CallFunc_IsValid_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter_1, bool K2Node_DynamicCast_bSuccess_3, const class FString& Temp_string_Variable, TScriptInterface<class IOwnershipAccessInterface> K2Node_DynamicCast_AsOwnership_Access_Interface, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_ActorHasTag_ReturnValue_1, class UObject* CallFunc_GetOwnershipObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Base_C", "InitializeCrafterVariables");

	Params::UGA_Crafting_Step_Base_C_InitializeCrafterVariables_Params Parms{};

	Parms.InstigatingActor = InstigatingActor;
	Parms.InitialUniqueID = InitialUniqueID;
	Parms.InstigatingCharacter = InstigatingCharacter;
	Parms.ID = ID;
	Parms.bIsPlayer = bIsPlayer;
	Parms.bPresent = bPresent;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_ActorPresentAtCraftingStation_ReturnValue = CallFunc_ActorPresentAtCraftingStation_ReturnValue;
	Parms.CallFunc_ActorPresentAtCraftingStation_ReturnValue_1 = CallFunc_ActorPresentAtCraftingStation_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsNWXCharacter = K2Node_DynamicCast_AsNWXCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsOwnership_Interface = K2Node_DynamicCast_AsOwnership_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwningPlayerPersistentID_ReturnValue = CallFunc_GetOwningPlayerPersistentID_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_GetPlayerStateFromId_PlayerState = CallFunc_GetPlayerStateFromId_PlayerState;
	Parms.K2Node_DynamicCast_AsBPI_Player_State_Systems = K2Node_DynamicCast_AsBPI_Player_State_Systems;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetBPPlayerController_Player_Controller = CallFunc_GetBPPlayerController_Player_Controller;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXCharacter_1 = K2Node_DynamicCast_AsNWXCharacter_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.K2Node_DynamicCast_AsOwnership_Access_Interface = K2Node_DynamicCast_AsOwnership_Access_Interface;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_GetOwnershipObject_ReturnValue = CallFunc_GetOwnershipObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCharacterPresent != nullptr)
		*bCharacterPresent = Parms.bCharacterPresent;

	if (bCharacterPlayer != nullptr)
		*bCharacterPlayer = Parms.bCharacterPlayer;

	if (PlayerUniqueId != nullptr)
		*PlayerUniqueId = std::move(Parms.PlayerUniqueId);

	if (CraftingCharacter != nullptr)
		*CraftingCharacter = Parms.CraftingCharacter;

}


// Function GA_Crafting_Step_Base.GA_Crafting_Step_Base_C.InitializeAbility_GetTargetData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCraftingStepFromTargetData_CrafterUniqueId           (ZeroConstructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetCraftingStepFromTargetData_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Base_C::InitializeAbility_GetTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, bool* Success, const class FString& CallFunc_GetCraftingStepFromTargetData_CrafterUniqueId, const struct FDataTableRowHandle& CallFunc_GetCraftingStepFromTargetData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Base_C", "InitializeAbility_GetTargetData");

	Params::UGA_Crafting_Step_Base_C_InitializeAbility_GetTargetData_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.CallFunc_GetCraftingStepFromTargetData_CrafterUniqueId = CallFunc_GetCraftingStepFromTargetData_CrafterUniqueId;
	Parms.CallFunc_GetCraftingStepFromTargetData_ReturnValue = CallFunc_GetCraftingStepFromTargetData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_Crafting_Step_Base.GA_Crafting_Step_Base_C.InitializeAbilityFromEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AbilityTarget                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AbilityInstigator                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializeAbility_GetTargetData_Success                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCraftInProgressIDForCrafter_bSuccess                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetCraftInProgressIDForCrafter_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializeCrafterVariables_bCharacterPresent            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializeCrafterVariables_bCharacterPlayer             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_InitializeCrafterVariables_PlayerUniqueID               (ZeroConstructor, HasGetValueTypeHash)
// class ANWXCharacter*               CallFunc_InitializeCrafterVariables_CraftingCharacter            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Base_C::InitializeAbilityFromEvent(const struct FGameplayEventData& EventData, bool* Success, class AActor* AbilityTarget, class AActor* AbilityInstigator, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_InitializeAbility_GetTargetData_Success, bool CallFunc_GetCraftInProgressIDForCrafter_bSuccess, const struct FGuid& CallFunc_GetCraftInProgressIDForCrafter_ReturnValue, bool CallFunc_InitializeCrafterVariables_bCharacterPresent, bool CallFunc_InitializeCrafterVariables_bCharacterPlayer, const class FString& CallFunc_InitializeCrafterVariables_PlayerUniqueID, class ANWXCharacter* CallFunc_InitializeCrafterVariables_CraftingCharacter, bool CallFunc_IsValid_ReturnValue, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Base_C", "InitializeAbilityFromEvent");

	Params::UGA_Crafting_Step_Base_C_InitializeAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;
	Parms.AbilityTarget = AbilityTarget;
	Parms.AbilityInstigator = AbilityInstigator;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_InitializeAbility_GetTargetData_Success = CallFunc_InitializeAbility_GetTargetData_Success;
	Parms.CallFunc_GetCraftInProgressIDForCrafter_bSuccess = CallFunc_GetCraftInProgressIDForCrafter_bSuccess;
	Parms.CallFunc_GetCraftInProgressIDForCrafter_ReturnValue = CallFunc_GetCraftInProgressIDForCrafter_ReturnValue;
	Parms.CallFunc_InitializeCrafterVariables_bCharacterPresent = CallFunc_InitializeCrafterVariables_bCharacterPresent;
	Parms.CallFunc_InitializeCrafterVariables_bCharacterPlayer = CallFunc_InitializeCrafterVariables_bCharacterPlayer;
	Parms.CallFunc_InitializeCrafterVariables_PlayerUniqueID = CallFunc_InitializeCrafterVariables_PlayerUniqueID;
	Parms.CallFunc_InitializeCrafterVariables_CraftingCharacter = CallFunc_InitializeCrafterVariables_CraftingCharacter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_Crafting_Step_Base.GA_Crafting_Step_Base_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Crafting_Step_Base_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Base_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Crafting_Step_Base_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Base.GA_Crafting_Step_Base_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Base_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Base_C", "K2_OnEndAbility");

	Params::UGA_Crafting_Step_Base_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Base.GA_Crafting_Step_Base_C.ExecuteUbergraph_GA_Crafting_Step_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_InitializeAbilityFromEvent_Success                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_ObjectToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Base_C::ExecuteUbergraph_GA_Crafting_Step_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_InitializeAbilityFromEvent_Success, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Base_C", "ExecuteUbergraph_GA_Crafting_Step_Base");

	Params::UGA_Crafting_Step_Base_C_ExecuteUbergraph_GA_Crafting_Step_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_InitializeAbilityFromEvent_Success = CallFunc_InitializeAbilityFromEvent_Success;
	Parms.CallFunc_Conv_ObjectToString_ReturnValue = CallFunc_Conv_ObjectToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


