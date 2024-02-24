#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Interaction_HopeEcho_Discovery.GA_Interaction_HopeEcho_Discovery_C
// (None)

class UClass* UGA_Interaction_HopeEcho_Discovery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Interaction_HopeEcho_Discovery_C");

	return Clss;
}


// GA_Interaction_HopeEcho_Discovery_C GA_Interaction_HopeEcho_Discovery.Default__GA_Interaction_HopeEcho_Discovery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Interaction_HopeEcho_Discovery_C* UGA_Interaction_HopeEcho_Discovery_C::GetDefaultObj()
{
	static class UGA_Interaction_HopeEcho_Discovery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Interaction_HopeEcho_Discovery_C*>(UGA_Interaction_HopeEcho_Discovery_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Interaction_HopeEcho_Discovery.GA_Interaction_HopeEcho_Discovery_C.PopulateVariables
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Local_Interactable                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Encounter_HopeEcho_Discovery_C*K2Node_DynamicCast_AsBP_Encounter_Hope_Echo_Discovery            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractable_Interactable                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PopulateVariables_bSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_HopeEcho_Discovery_C::PopulateVariables(bool* bSuccess, class UObject* Local_Interactable, class ABP_Encounter_HopeEcho_Discovery_C* K2Node_DynamicCast_AsBP_Encounter_Hope_Echo_Discovery, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_GetInteractable_Interactable, bool CallFunc_PopulateVariables_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_HopeEcho_Discovery_C", "PopulateVariables");

	Params::UGA_Interaction_HopeEcho_Discovery_C_PopulateVariables_Params Parms{};

	Parms.Local_Interactable = Local_Interactable;
	Parms.K2Node_DynamicCast_AsBP_Encounter_Hope_Echo_Discovery = K2Node_DynamicCast_AsBP_Encounter_Hope_Echo_Discovery;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInteractable_Interactable = CallFunc_GetInteractable_Interactable;
	Parms.CallFunc_PopulateVariables_bSuccess = CallFunc_PopulateVariables_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function GA_Interaction_HopeEcho_Discovery.GA_Interaction_HopeEcho_Discovery_C.ExecuteInteraction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       InteractionTags                                                  (Parm, OutParm)
// struct FGameplayTagContainer       Local_Tags                                                       (Edit, BlueprintVisible)
// class APawn*                       CallFunc_GetPawn_Pawn                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClaimItems_bSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_ClaimItems_ClaimedInstances                             (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_ClaimItems_UnclaimedItems                               (ReferenceParm)
// class APawn*                       CallFunc_GetPawn_Pawn_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueIdFromPawn_PersistentId              (ZeroConstructor, HasGetValueTypeHash)
// class AEncounterBase*              CallFunc_GetSpawningEncounter_SpawningEncounter                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_Pawn_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_ExecuteInteraction_InteractionTags                      (None)
// class ANWXPlayerState*             CallFunc_GetPlayerState_PlayerState                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConditionalReward>  CallFunc_AwardConditionalRewards_OutAwardedRewards               (ReferenceParm, ContainsInstancedReference)

void UGA_Interaction_HopeEcho_Discovery_C::ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, const struct FGameplayTagContainer& Local_Tags, class APawn* CallFunc_GetPawn_Pawn, bool CallFunc_ClaimItems_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItems_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItems_UnclaimedItems, class APawn* CallFunc_GetPawn_Pawn_1, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, class AEncounterBase* CallFunc_GetSpawningEncounter_SpawningEncounter, bool CallFunc_K2_HasAuthority_ReturnValue, class APawn* CallFunc_GetPawn_Pawn_2, const struct FGameplayTagContainer& CallFunc_ExecuteInteraction_InteractionTags, class ANWXPlayerState* CallFunc_GetPlayerState_PlayerState, TArray<struct FConditionalReward>& CallFunc_AwardConditionalRewards_OutAwardedRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_HopeEcho_Discovery_C", "ExecuteInteraction");

	Params::UGA_Interaction_HopeEcho_Discovery_C_ExecuteInteraction_Params Parms{};

	Parms.Local_Tags = Local_Tags;
	Parms.CallFunc_GetPawn_Pawn = CallFunc_GetPawn_Pawn;
	Parms.CallFunc_ClaimItems_bSuccess = CallFunc_ClaimItems_bSuccess;
	Parms.CallFunc_ClaimItems_ClaimedInstances = CallFunc_ClaimItems_ClaimedInstances;
	Parms.CallFunc_ClaimItems_UnclaimedItems = CallFunc_ClaimItems_UnclaimedItems;
	Parms.CallFunc_GetPawn_Pawn_1 = CallFunc_GetPawn_Pawn_1;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPersistentUniqueIdFromPawn_PersistentId = CallFunc_GetPersistentUniqueIdFromPawn_PersistentId;
	Parms.CallFunc_GetSpawningEncounter_SpawningEncounter = CallFunc_GetSpawningEncounter_SpawningEncounter;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.CallFunc_GetPawn_Pawn_2 = CallFunc_GetPawn_Pawn_2;
	Parms.CallFunc_ExecuteInteraction_InteractionTags = CallFunc_ExecuteInteraction_InteractionTags;
	Parms.CallFunc_GetPlayerState_PlayerState = CallFunc_GetPlayerState_PlayerState;
	Parms.CallFunc_AwardConditionalRewards_OutAwardedRewards = CallFunc_AwardConditionalRewards_OutAwardedRewards;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractionTags != nullptr)
		*InteractionTags = std::move(Parms.InteractionTags);

}

}


