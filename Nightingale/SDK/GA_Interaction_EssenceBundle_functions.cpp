#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Interaction_EssenceBundle.GA_Interaction_EssenceBundle_C
// (None)

class UClass* UGA_Interaction_EssenceBundle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Interaction_EssenceBundle_C");

	return Clss;
}


// GA_Interaction_EssenceBundle_C GA_Interaction_EssenceBundle.Default__GA_Interaction_EssenceBundle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Interaction_EssenceBundle_C* UGA_Interaction_EssenceBundle_C::GetDefaultObj()
{
	static class UGA_Interaction_EssenceBundle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Interaction_EssenceBundle_C*>(UGA_Interaction_EssenceBundle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Interaction_EssenceBundle.GA_Interaction_EssenceBundle_C.SendEssenceTelemetry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     RewardEntries                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ANWXPlayerState*             PlayerState                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEssenceCountsFromEntries_T0Count                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEssenceCountsFromEntries_T1Count                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEssenceCountsFromEntries_T2Count                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEssenceCountsFromEntries_T3Count                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEssenceCountsFromEntries_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             K2Node_DynamicCast_AsNWXPlayer_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_EssenceBundle_C::SendEssenceTelemetry(TArray<struct FInventoryEntry>& RewardEntries, class ANWXPlayerState* PlayerState, int32 CallFunc_GetEssenceCountsFromEntries_T0Count, int32 CallFunc_GetEssenceCountsFromEntries_T1Count, int32 CallFunc_GetEssenceCountsFromEntries_T2Count, int32 CallFunc_GetEssenceCountsFromEntries_T3Count, bool CallFunc_GetEssenceCountsFromEntries_ReturnValue, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_EssenceBundle_C", "SendEssenceTelemetry");

	Params::UGA_Interaction_EssenceBundle_C_SendEssenceTelemetry_Params Parms{};

	Parms.RewardEntries = RewardEntries;
	Parms.PlayerState = PlayerState;
	Parms.CallFunc_GetEssenceCountsFromEntries_T0Count = CallFunc_GetEssenceCountsFromEntries_T0Count;
	Parms.CallFunc_GetEssenceCountsFromEntries_T1Count = CallFunc_GetEssenceCountsFromEntries_T1Count;
	Parms.CallFunc_GetEssenceCountsFromEntries_T2Count = CallFunc_GetEssenceCountsFromEntries_T2Count;
	Parms.CallFunc_GetEssenceCountsFromEntries_T3Count = CallFunc_GetEssenceCountsFromEntries_T3Count;
	Parms.CallFunc_GetEssenceCountsFromEntries_ReturnValue = CallFunc_GetEssenceCountsFromEntries_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_State = K2Node_DynamicCast_AsNWXPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Interaction_EssenceBundle.GA_Interaction_EssenceBundle_C.PopulateVariables
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Local_Interactable                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_Pawn                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Encounter_EssenceBundle_C*K2Node_DynamicCast_AsBP_Encounter_Essence_Bundle                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractable_Interactable                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PopulateVariables_bSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_EssenceBundle_C::PopulateVariables(bool* bSuccess, class UObject* Local_Interactable, class APawn* CallFunc_GetPawn_Pawn, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_Encounter_EssenceBundle_C* K2Node_DynamicCast_AsBP_Encounter_Essence_Bundle, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_GetInteractable_Interactable, bool CallFunc_PopulateVariables_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_EssenceBundle_C", "PopulateVariables");

	Params::UGA_Interaction_EssenceBundle_C_PopulateVariables_Params Parms{};

	Parms.Local_Interactable = Local_Interactable;
	Parms.CallFunc_GetPawn_Pawn = CallFunc_GetPawn_Pawn;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Encounter_Essence_Bundle = K2Node_DynamicCast_AsBP_Encounter_Essence_Bundle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetInteractable_Interactable = CallFunc_GetInteractable_Interactable;
	Parms.CallFunc_PopulateVariables_bSuccess = CallFunc_PopulateVariables_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function GA_Interaction_EssenceBundle.GA_Interaction_EssenceBundle_C.ExecuteInteraction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       InteractionTags                                                  (Parm, OutParm)
// struct FGameplayTagContainer       Local_Tags                                                       (Edit, BlueprintVisible)
// class APawn*                       CallFunc_GetPawn_Pawn                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueIdFromPawn_PersistentId              (ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_Pawn_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClaimItems_bSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_ClaimItems_ClaimedInstances                             (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_ClaimItems_UnclaimedItems                               (ReferenceParm)
// struct FGameplayTagContainer       CallFunc_ExecuteInteraction_InteractionTags                      (None)

void UGA_Interaction_EssenceBundle_C::ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, const struct FGameplayTagContainer& Local_Tags, class APawn* CallFunc_GetPawn_Pawn, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, class APawn* CallFunc_GetPawn_Pawn_1, bool CallFunc_K2_HasAuthority_ReturnValue, bool CallFunc_ClaimItems_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItems_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItems_UnclaimedItems, const struct FGameplayTagContainer& CallFunc_ExecuteInteraction_InteractionTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_EssenceBundle_C", "ExecuteInteraction");

	Params::UGA_Interaction_EssenceBundle_C_ExecuteInteraction_Params Parms{};

	Parms.Local_Tags = Local_Tags;
	Parms.CallFunc_GetPawn_Pawn = CallFunc_GetPawn_Pawn;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPersistentUniqueIdFromPawn_PersistentId = CallFunc_GetPersistentUniqueIdFromPawn_PersistentId;
	Parms.CallFunc_GetPawn_Pawn_1 = CallFunc_GetPawn_Pawn_1;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.CallFunc_ClaimItems_bSuccess = CallFunc_ClaimItems_bSuccess;
	Parms.CallFunc_ClaimItems_ClaimedInstances = CallFunc_ClaimItems_ClaimedInstances;
	Parms.CallFunc_ClaimItems_UnclaimedItems = CallFunc_ClaimItems_UnclaimedItems;
	Parms.CallFunc_ExecuteInteraction_InteractionTags = CallFunc_ExecuteInteraction_InteractionTags;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractionTags != nullptr)
		*InteractionTags = std::move(Parms.InteractionTags);

}

}


