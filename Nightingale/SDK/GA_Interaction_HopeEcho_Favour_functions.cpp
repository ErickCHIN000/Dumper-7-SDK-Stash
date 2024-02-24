#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Interaction_HopeEcho_Favour.GA_Interaction_HopeEcho_Favour_C
// (None)

class UClass* UGA_Interaction_HopeEcho_Favour_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Interaction_HopeEcho_Favour_C");

	return Clss;
}


// GA_Interaction_HopeEcho_Favour_C GA_Interaction_HopeEcho_Favour.Default__GA_Interaction_HopeEcho_Favour_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Interaction_HopeEcho_Favour_C* UGA_Interaction_HopeEcho_Favour_C::GetDefaultObj()
{
	static class UGA_Interaction_HopeEcho_Favour_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Interaction_HopeEcho_Favour_C*>(UGA_Interaction_HopeEcho_Favour_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Interaction_HopeEcho_Favour.GA_Interaction_HopeEcho_Favour_C.PopulateVariables
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Local_Interactable                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Encounter_HopeEcho_Favour_C*K2Node_DynamicCast_AsBP_Encounter_Hope_Echo_Favour               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractable_Interactable                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PopulateVariables_bSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_HopeEcho_Favour_C::PopulateVariables(bool* bSuccess, class UObject* Local_Interactable, class ABP_Encounter_HopeEcho_Favour_C* K2Node_DynamicCast_AsBP_Encounter_Hope_Echo_Favour, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_GetInteractable_Interactable, bool CallFunc_PopulateVariables_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_HopeEcho_Favour_C", "PopulateVariables");

	Params::UGA_Interaction_HopeEcho_Favour_C_PopulateVariables_Params Parms{};

	Parms.Local_Interactable = Local_Interactable;
	Parms.K2Node_DynamicCast_AsBP_Encounter_Hope_Echo_Favour = K2Node_DynamicCast_AsBP_Encounter_Hope_Echo_Favour;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInteractable_Interactable = CallFunc_GetInteractable_Interactable;
	Parms.CallFunc_PopulateVariables_bSuccess = CallFunc_PopulateVariables_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function GA_Interaction_HopeEcho_Favour.GA_Interaction_HopeEcho_Favour_C.ExecuteInteraction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       InteractionTags                                                  (Parm, OutParm)
// struct FGameplayTagContainer       Local_Tags                                                       (Edit, BlueprintVisible)
// class APawn*                       CallFunc_GetPawn_Pawn                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueIdFromPawn_PersistentId              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_Pawn_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStatusEffectAccessInterface>K2Node_DynamicCast_AsStatus_Effect_Access_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_ExecuteInteraction_InteractionTags                      (None)
// struct FStatusEffectHandle         CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyTimedStatusEffect_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyTimedStatusEffect_Duration_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_HopeEcho_Favour_C::ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, const struct FGameplayTagContainer& Local_Tags, class APawn* CallFunc_GetPawn_Pawn, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, bool CallFunc_K2_HasAuthority_ReturnValue, class APawn* CallFunc_GetPawn_Pawn_1, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayTagContainer& CallFunc_ExecuteInteraction_InteractionTags, const struct FStatusEffectHandle& CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle, bool CallFunc_ApplyTimedStatusEffect_ReturnValue, float CallFunc_ApplyTimedStatusEffect_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_HopeEcho_Favour_C", "ExecuteInteraction");

	Params::UGA_Interaction_HopeEcho_Favour_C_ExecuteInteraction_Params Parms{};

	Parms.Local_Tags = Local_Tags;
	Parms.CallFunc_GetPawn_Pawn = CallFunc_GetPawn_Pawn;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPersistentUniqueIdFromPawn_PersistentId = CallFunc_GetPersistentUniqueIdFromPawn_PersistentId;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.CallFunc_GetPawn_Pawn_1 = CallFunc_GetPawn_Pawn_1;
	Parms.K2Node_DynamicCast_AsStatus_Effect_Access_Interface = K2Node_DynamicCast_AsStatus_Effect_Access_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_ExecuteInteraction_InteractionTags = CallFunc_ExecuteInteraction_InteractionTags;
	Parms.CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle = CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle;
	Parms.CallFunc_ApplyTimedStatusEffect_ReturnValue = CallFunc_ApplyTimedStatusEffect_ReturnValue;
	Parms.CallFunc_ApplyTimedStatusEffect_Duration_ImplicitCast = CallFunc_ApplyTimedStatusEffect_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractionTags != nullptr)
		*InteractionTags = std::move(Parms.InteractionTags);

}

}


