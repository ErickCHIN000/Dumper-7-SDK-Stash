#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CraftingComponent.BP_CraftingComponent_C
// (None)

class UClass* UBP_CraftingComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CraftingComponent_C");

	return Clss;
}


// BP_CraftingComponent_C BP_CraftingComponent.Default__BP_CraftingComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CraftingComponent_C* UBP_CraftingComponent_C::GetDefaultObj()
{
	static class UBP_CraftingComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CraftingComponent_C*>(UBP_CraftingComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CraftingComponent.BP_CraftingComponent_C.EnterCraftingStation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CraftingStationComponent_C*CraftingStation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_NewGuid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::EnterCraftingStation(class UBP_CraftingStationComponent_C* CraftingStation, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGuid& CallFunc_NewGuid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "EnterCraftingStation");

	Params::UBP_CraftingComponent_C_EnterCraftingStation_Params Parms{};

	Parms.CraftingStation = CraftingStation;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_NewGuid_ReturnValue = CallFunc_NewGuid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.OnCraftingStationDestroyed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CraftingStationComponent_C*CraftingStation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::OnCraftingStationDestroyed(class UBP_CraftingStationComponent_C* CraftingStation, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "OnCraftingStationDestroyed");

	Params::UBP_CraftingComponent_C_OnCraftingStationDestroyed_Params Parms{};

	Parms.CraftingStation = CraftingStation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.CallCraftedItemReceived
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    RecipeReference                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FInventoryEntry             ReceivedItem                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              ReceivedRecipeQuantity                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::CallCraftedItemReceived(struct FCraftingRecipeReference& RecipeReference, struct FInventoryEntry& ReceivedItem, int32& ReceivedRecipeQuantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "CallCraftedItemReceived");

	Params::UBP_CraftingComponent_C_CallCraftedItemReceived_Params Parms{};

	Parms.RecipeReference = RecipeReference;
	Parms.ReceivedItem = ReceivedItem;
	Parms.ReceivedRecipeQuantity = ReceivedRecipeQuantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.RemoveCraftingStationEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithTags_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::RemoveCraftingStationEffect(class APawn* CallFunc_K2_GetPawn_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "RemoveCraftingStationEffect");

	Params::UBP_CraftingComponent_C_RemoveCraftingStationEffect_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_RemoveActiveEffectsWithTags_ReturnValue = CallFunc_RemoveActiveEffectsWithTags_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.Request_CancelCraft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CraftingStationComponent_C*CraftingStationComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::Request_CancelCraft(class UBP_CraftingStationComponent_C* CraftingStationComponent, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "Request_CancelCraft");

	Params::UBP_CraftingComponent_C_Request_CancelCraft_Params Parms{};

	Parms.CraftingStationComponent = CraftingStationComponent;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.GetActiveCraftingSessionId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGuid                       SessionId                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::GetActiveCraftingSessionId(struct FGuid* SessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "GetActiveCraftingSessionId");

	Params::UBP_CraftingComponent_C_GetActiveCraftingSessionId_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SessionId != nullptr)
		*SessionId = std::move(Parms.SessionId);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.LeaveActiveCraftingStation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::LeaveActiveCraftingStation(class APlayerState* PlayerState, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "LeaveActiveCraftingStation");

	Params::UBP_CraftingComponent_C_LeaveActiveCraftingStation_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.OnCraftStartedInCraftingSession
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               StartedSuccessfully                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    RecipeId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CrafterID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FGuid                       CraftInProgressId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::OnCraftStartedInCraftingSession(bool StartedSuccessfully, const struct FCraftingRecipeReference& RecipeId, int32 Quantity, const class FString& CrafterID, const struct FGuid& CraftInProgressId, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "OnCraftStartedInCraftingSession");

	Params::UBP_CraftingComponent_C_OnCraftStartedInCraftingSession_Params Parms{};

	Parms.StartedSuccessfully = StartedSuccessfully;
	Parms.RecipeId = RecipeId;
	Parms.Quantity = Quantity;
	Parms.CrafterID = CrafterID;
	Parms.CraftInProgressId = CraftInProgressId;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.GetActiveCraftingStation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_CraftingStationComponent_C*ActiveCraftingStation                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::GetActiveCraftingStation(class UBP_CraftingStationComponent_C** ActiveCraftingStation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "GetActiveCraftingStation");

	Params::UBP_CraftingComponent_C_GetActiveCraftingStation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ActiveCraftingStation != nullptr)
		*ActiveCraftingStation = Parms.ActiveCraftingStation;

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.EndCraftItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CraftingStationComponent_C*CraftingStation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CraftingSuccess                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CrafterUniqueID                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CurrentCraftData                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               TemporaryAbilityGranted                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilitySpecHandle  TemporaryAbilityHandle                                           (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CraftingAbilitySystem                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CraftingPawn                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_AbilityPayloadFromBool_ReturnValue                      (None)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue(None)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// bool                               CallFunc_GetCurrentCraftData_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_GetCurrentCraftData_ReturnValue                         (HasGetValueTypeHash)
// class UNWXAbilitySystemComponent*  K2Node_DynamicCast_AsNWXAbility_System_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_CanActivateAbilityByEvent_OptionalRelevantTags          (None)
// bool                               CallFunc_CanActivateAbilityByEvent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilitySpecDef     CallFunc_CreateAbilitySpecDefFromClass_ReturnValue               (None)
// struct FGameplayAbilitySpecHandle  CallFunc_GiveAbility_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::EndCraftItem(class UBP_CraftingStationComponent_C* CraftingStation, bool CraftingSuccess, const class FString& CrafterUniqueID, const struct FS_Crafting_CraftInProgress& CurrentCraftData, bool TemporaryAbilityGranted, const struct FGameplayAbilitySpecHandle& TemporaryAbilityHandle, class UAbilitySystemComponent* CraftingAbilitySystem, class APawn* CraftingPawn, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_GetCurrentCraftData_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCurrentCraftData_ReturnValue, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_CanActivateAbilityByEvent_OptionalRelevantTags, bool CallFunc_CanActivateAbilityByEvent_ReturnValue, int32 CallFunc_SendGameplayEventToActor_ReturnValue, const struct FGameplayAbilitySpecDef& CallFunc_CreateAbilitySpecDefFromClass_ReturnValue, const struct FGameplayAbilitySpecHandle& CallFunc_GiveAbility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "EndCraftItem");

	Params::UBP_CraftingComponent_C_EndCraftItem_Params Parms{};

	Parms.CraftingStation = CraftingStation;
	Parms.CraftingSuccess = CraftingSuccess;
	Parms.CrafterUniqueID = CrafterUniqueID;
	Parms.CurrentCraftData = CurrentCraftData;
	Parms.TemporaryAbilityGranted = TemporaryAbilityGranted;
	Parms.TemporaryAbilityHandle = TemporaryAbilityHandle;
	Parms.CraftingAbilitySystem = CraftingAbilitySystem;
	Parms.CraftingPawn = CraftingPawn;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_AbilityPayloadFromBool_ReturnValue = CallFunc_AbilityPayloadFromBool_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue = CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_GetCurrentCraftData_Success = CallFunc_GetCurrentCraftData_Success;
	Parms.CallFunc_GetCurrentCraftData_ReturnValue = CallFunc_GetCurrentCraftData_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXAbility_System_Component = K2Node_DynamicCast_AsNWXAbility_System_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanActivateAbilityByEvent_OptionalRelevantTags = CallFunc_CanActivateAbilityByEvent_OptionalRelevantTags;
	Parms.CallFunc_CanActivateAbilityByEvent_ReturnValue = CallFunc_CanActivateAbilityByEvent_ReturnValue;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;
	Parms.CallFunc_CreateAbilitySpecDefFromClass_ReturnValue = CallFunc_CreateAbilitySpecDefFromClass_ReturnValue;
	Parms.CallFunc_GiveAbility_ReturnValue = CallFunc_GiveAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.RemovePartsFromInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponentBase*     Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     InputParts                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>RealmCardDeck                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             CurrentInputPart                                                 (Edit, BlueprintVisible)
// int32                              CurrentQuantity                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>EssencePouch                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               OverallSuccess                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>LBackpackContainer                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetRealmCardDeck_Container                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmCardDeck_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItem_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItem_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetEssencePouch_Container                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetEssencePouch_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::RemovePartsFromInventory(class UInventoryComponentBase* Inventory, TArray<struct FInventoryEntry>& InputParts, bool* Success, TScriptInterface<class IItemContainer> RealmCardDeck, const struct FInventoryEntry& CurrentInputPart, int32 CurrentQuantity, TScriptInterface<class IItemContainer> EssencePouch, bool OverallSuccess, TScriptInterface<class IItemContainer> LBackpackContainer, int32 Temp_int_Array_Index_Variable, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetRealmCardDeck_Container, bool CallFunc_GetRealmCardDeck_ReturnValue, bool CallFunc_RemoveItem_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_RemoveItem_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "RemovePartsFromInventory");

	Params::UBP_CraftingComponent_C_RemovePartsFromInventory_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.InputParts = InputParts;
	Parms.RealmCardDeck = RealmCardDeck;
	Parms.CurrentInputPart = CurrentInputPart;
	Parms.CurrentQuantity = CurrentQuantity;
	Parms.EssencePouch = EssencePouch;
	Parms.OverallSuccess = OverallSuccess;
	Parms.LBackpackContainer = LBackpackContainer;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetRealmCardDeck_Container = CallFunc_GetRealmCardDeck_Container;
	Parms.CallFunc_GetRealmCardDeck_ReturnValue = CallFunc_GetRealmCardDeck_ReturnValue;
	Parms.CallFunc_RemoveItem_ReturnValue_1 = CallFunc_RemoveItem_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RemoveItem_ReturnValue_2 = CallFunc_RemoveItem_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetEssencePouch_Container = CallFunc_GetEssencePouch_Container;
	Parms.CallFunc_GetEssencePouch_ReturnValue = CallFunc_GetEssencePouch_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.Server_CancelCraft
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CraftingStationComponent_C*CraftingStationComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::Server_CancelCraft(class UBP_CraftingStationComponent_C* CraftingStationComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "Server_CancelCraft");

	Params::UBP_CraftingComponent_C_Server_CancelCraft_Params Parms{};

	Parms.CraftingStationComponent = CraftingStationComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.Server_ExitCraftingStation
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CraftingStationComponent_C*CraftingStation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::Server_ExitCraftingStation(class UBP_CraftingStationComponent_C* CraftingStation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "Server_ExitCraftingStation");

	Params::UBP_CraftingComponent_C_Server_ExitCraftingStation_Params Parms{};

	Parms.CraftingStation = CraftingStation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.ForceEndCraftItem
// (Net, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CraftingStationComponent_C*CraftingStation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CraftingSuccess                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::ForceEndCraftItem(class UBP_CraftingStationComponent_C* CraftingStation, bool CraftingSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "ForceEndCraftItem");

	Params::UBP_CraftingComponent_C_ForceEndCraftItem_Params Parms{};

	Parms.CraftingStation = CraftingStation;
	Parms.CraftingSuccess = CraftingSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.Client_CraftedItemReceived
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    RecipeReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FInventoryEntry             ReceivedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              ReceivedRecipeQuantity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::Client_CraftedItemReceived(const struct FCraftingRecipeReference& RecipeReference, const struct FInventoryEntry& ReceivedItem, int32 ReceivedRecipeQuantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "Client_CraftedItemReceived");

	Params::UBP_CraftingComponent_C_Client_CraftedItemReceived_Params Parms{};

	Parms.RecipeReference = RecipeReference;
	Parms.ReceivedItem = ReceivedItem;
	Parms.ReceivedRecipeQuantity = ReceivedRecipeQuantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.ExecuteUbergraph_BP_CraftingComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    K2Node_CustomEvent_RecipeReference                               (HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_CustomEvent_ReceivedItem                                  (None)
// int32                              K2Node_CustomEvent_ReceivedRecipeQuantity                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*K2Node_CustomEvent_CraftingStation_1                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*K2Node_CustomEvent_CraftingStation                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CraftingSuccess                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*K2Node_CustomEvent_CraftingStationComponent                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::ExecuteUbergraph_BP_CraftingComponent(int32 EntryPoint, const struct FCraftingRecipeReference& K2Node_CustomEvent_RecipeReference, const struct FInventoryEntry& K2Node_CustomEvent_ReceivedItem, int32 K2Node_CustomEvent_ReceivedRecipeQuantity, class UBP_CraftingStationComponent_C* K2Node_CustomEvent_CraftingStation_1, class UBP_CraftingStationComponent_C* K2Node_CustomEvent_CraftingStation, bool K2Node_CustomEvent_CraftingSuccess, bool CallFunc_IsValid_ReturnValue, class UBP_CraftingStationComponent_C* K2Node_CustomEvent_CraftingStationComponent, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "ExecuteUbergraph_BP_CraftingComponent");

	Params::UBP_CraftingComponent_C_ExecuteUbergraph_BP_CraftingComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_RecipeReference = K2Node_CustomEvent_RecipeReference;
	Parms.K2Node_CustomEvent_ReceivedItem = K2Node_CustomEvent_ReceivedItem;
	Parms.K2Node_CustomEvent_ReceivedRecipeQuantity = K2Node_CustomEvent_ReceivedRecipeQuantity;
	Parms.K2Node_CustomEvent_CraftingStation_1 = K2Node_CustomEvent_CraftingStation_1;
	Parms.K2Node_CustomEvent_CraftingStation = K2Node_CustomEvent_CraftingStation;
	Parms.K2Node_CustomEvent_CraftingSuccess = K2Node_CustomEvent_CraftingSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_CraftingStationComponent = K2Node_CustomEvent_CraftingStationComponent;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.CraftedItemReceived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    RecipeReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FInventoryEntry             ReceivedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              ReceivedRecipeQuantity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::CraftedItemReceived__DelegateSignature(const struct FCraftingRecipeReference& RecipeReference, const struct FInventoryEntry& ReceivedItem, int32 ReceivedRecipeQuantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "CraftedItemReceived__DelegateSignature");

	Params::UBP_CraftingComponent_C_CraftedItemReceived__DelegateSignature_Params Parms{};

	Parms.RecipeReference = RecipeReference;
	Parms.ReceivedItem = ReceivedItem;
	Parms.ReceivedRecipeQuantity = ReceivedRecipeQuantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.CraftingStepEffectApplied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CrafterID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       CrafterPawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         StepHandle                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::CraftingStepEffectApplied__DelegateSignature(const class FString& CrafterID, class APawn* CrafterPawn, const struct FDataTableRowHandle& StepHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "CraftingStepEffectApplied__DelegateSignature");

	Params::UBP_CraftingComponent_C_CraftingStepEffectApplied__DelegateSignature_Params Parms{};

	Parms.CrafterID = CrafterID;
	Parms.CrafterPawn = CrafterPawn;
	Parms.StepHandle = StepHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.CraftingStepEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CrafterID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       CraftingPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         StepHandle                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::CraftingStepEnded__DelegateSignature(const class FString& CrafterID, class APawn* CraftingPawn, const struct FDataTableRowHandle& StepHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "CraftingStepEnded__DelegateSignature");

	Params::UBP_CraftingComponent_C_CraftingStepEnded__DelegateSignature_Params Parms{};

	Parms.CrafterID = CrafterID;
	Parms.CraftingPawn = CraftingPawn;
	Parms.StepHandle = StepHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.CraftingStepStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CrafterID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       CraftingPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         StepHandle                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::CraftingStepStarted__DelegateSignature(const class FString& CrafterID, class APawn* CraftingPawn, const struct FDataTableRowHandle& StepHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "CraftingStepStarted__DelegateSignature");

	Params::UBP_CraftingComponent_C_CraftingStepStarted__DelegateSignature_Params Parms{};

	Parms.CrafterID = CrafterID;
	Parms.CraftingPawn = CraftingPawn;
	Parms.StepHandle = StepHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.CraftStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               StartedSuccessfully                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    RecipeId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CrafterID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FGuid                       CraftInProgressId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingComponent_C::CraftStarted__DelegateSignature(bool StartedSuccessfully, const struct FCraftingRecipeReference& RecipeId, int32 Quantity, const class FString& CrafterID, const struct FGuid& CraftInProgressId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "CraftStarted__DelegateSignature");

	Params::UBP_CraftingComponent_C_CraftStarted__DelegateSignature_Params Parms{};

	Parms.StartedSuccessfully = StartedSuccessfully;
	Parms.RecipeId = RecipeId;
	Parms.Quantity = Quantity;
	Parms.CrafterID = CrafterID;
	Parms.CraftInProgressId = CraftInProgressId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingComponent.BP_CraftingComponent_C.ItemCrafted__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    RecipeId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              CraftedQuantity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CraftedItems                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_CraftingComponent_C::ItemCrafted__DelegateSignature(bool Success, const struct FCraftingRecipeReference& RecipeId, int32 CraftedQuantity, class ABP_PlayerController_C* Controller, TArray<struct FInventoryEntry>& CraftedItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingComponent_C", "ItemCrafted__DelegateSignature");

	Params::UBP_CraftingComponent_C_ItemCrafted__DelegateSignature_Params Parms{};

	Parms.Success = Success;
	Parms.RecipeId = RecipeId;
	Parms.CraftedQuantity = CraftedQuantity;
	Parms.Controller = Controller;
	Parms.CraftedItems = CraftedItems;

	UObject::ProcessEvent(Func, &Parms);

}

}


