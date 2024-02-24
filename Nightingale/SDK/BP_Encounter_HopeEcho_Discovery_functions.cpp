#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Encounter_HopeEcho_Discovery.BP_Encounter_HopeEcho_Discovery_C
// (Actor)

class UClass* ABP_Encounter_HopeEcho_Discovery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Encounter_HopeEcho_Discovery_C");

	return Clss;
}


// BP_Encounter_HopeEcho_Discovery_C BP_Encounter_HopeEcho_Discovery.Default__BP_Encounter_HopeEcho_Discovery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Encounter_HopeEcho_Discovery_C* ABP_Encounter_HopeEcho_Discovery_C::GetDefaultObj()
{
	static class ABP_Encounter_HopeEcho_Discovery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Encounter_HopeEcho_Discovery_C*>(ABP_Encounter_HopeEcho_Discovery_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Encounter_HopeEcho_Discovery.BP_Encounter_HopeEcho_Discovery_C.Initialize
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              SpawningEncounter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEncounterRewardType    EncounterRewardType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEncounterRewardScale   RewardScale                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConditionalReward>  CallFunc_GenerateConditionalRewards_ReturnValue                  (ReferenceParm, ContainsInstancedReference)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GenerateEssenceRewardsForEncounter_ReturnValue          (ReferenceParm)
// TScriptInterface<class IEncounterMarkupInterface>CallFunc_GetMarkupDataAsset_self_CastInput                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GenerateEssenceRewardsForHopeEcho_ReturnValue           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_HopeEcho_Discovery_C::Initialize(class AEncounterBase* SpawningEncounter, enum class EEncounterRewardType EncounterRewardType, enum class EEncounterRewardScale RewardScale, TArray<struct FConditionalReward>& CallFunc_GenerateConditionalRewards_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GenerateEssenceRewardsForEncounter_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> CallFunc_GetMarkupDataAsset_self_CastInput, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GenerateEssenceRewardsForHopeEcho_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_HopeEcho_Discovery_C", "Initialize");

	Params::ABP_Encounter_HopeEcho_Discovery_C_Initialize_Params Parms{};

	Parms.SpawningEncounter = SpawningEncounter;
	Parms.EncounterRewardType = EncounterRewardType;
	Parms.RewardScale = RewardScale;
	Parms.CallFunc_GenerateConditionalRewards_ReturnValue = CallFunc_GenerateConditionalRewards_ReturnValue;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_GenerateEssenceRewardsForEncounter_ReturnValue = CallFunc_GenerateEssenceRewardsForEncounter_ReturnValue;
	Parms.CallFunc_GetMarkupDataAsset_self_CastInput = CallFunc_GetMarkupDataAsset_self_CastInput;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GenerateEssenceRewardsForHopeEcho_ReturnValue = CallFunc_GenerateEssenceRewardsForHopeEcho_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_HopeEcho_Discovery.BP_Encounter_HopeEcho_Discovery_C.Restore Rewards On Persistence
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FConditionalReward>  CallFunc_GenerateConditionalRewards_ReturnValue                  (ReferenceParm, ContainsInstancedReference)

void ABP_Encounter_HopeEcho_Discovery_C::Restore_Rewards_On_Persistence(TArray<struct FConditionalReward>& CallFunc_GenerateConditionalRewards_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_HopeEcho_Discovery_C", "Restore Rewards On Persistence");

	Params::ABP_Encounter_HopeEcho_Discovery_C_Restore_Rewards_On_Persistence_Params Parms{};

	Parms.CallFunc_GenerateConditionalRewards_ReturnValue = CallFunc_GenerateConditionalRewards_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_HopeEcho_Discovery.BP_Encounter_HopeEcho_Discovery_C.GetSpawningEncounter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AEncounterBase*              SpawningEncounter                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_HopeEcho_Discovery_C::GetSpawningEncounter(class AEncounterBase** SpawningEncounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_HopeEcho_Discovery_C", "GetSpawningEncounter");

	Params::ABP_Encounter_HopeEcho_Discovery_C_GetSpawningEncounter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SpawningEncounter != nullptr)
		*SpawningEncounter = Parms.SpawningEncounter;

}


// Function BP_Encounter_HopeEcho_Discovery.BP_Encounter_HopeEcho_Discovery_C.GetInteractText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class FString                      InteractText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_Encounter_HopeEcho_Discovery_C::GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_HopeEcho_Discovery_C", "GetInteractText");

	Params::ABP_Encounter_HopeEcho_Discovery_C_GetInteractText_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractText != nullptr)
		*InteractText = std::move(Parms.InteractText);

}


// Function BP_Encounter_HopeEcho_Discovery.BP_Encounter_HopeEcho_Discovery_C.GetInteractionTag
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InteractionTag                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Encounter_HopeEcho_Discovery_C::GetInteractionTag(struct FGameplayTag* InteractionTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_HopeEcho_Discovery_C", "GetInteractionTag");

	Params::ABP_Encounter_HopeEcho_Discovery_C_GetInteractionTag_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InteractionTag != nullptr)
		*InteractionTag = std::move(Parms.InteractionTag);

	return Parms.ReturnValue;

}

}


