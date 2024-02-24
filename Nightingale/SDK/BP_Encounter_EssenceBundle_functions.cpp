#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Encounter_EssenceBundle.BP_Encounter_EssenceBundle_C
// (Actor)

class UClass* ABP_Encounter_EssenceBundle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Encounter_EssenceBundle_C");

	return Clss;
}


// BP_Encounter_EssenceBundle_C BP_Encounter_EssenceBundle.Default__BP_Encounter_EssenceBundle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Encounter_EssenceBundle_C* ABP_Encounter_EssenceBundle_C::GetDefaultObj()
{
	static class ABP_Encounter_EssenceBundle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Encounter_EssenceBundle_C*>(ABP_Encounter_EssenceBundle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Encounter_EssenceBundle.BP_Encounter_EssenceBundle_C.Initialize
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              SpawningEncounter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEncounterRewardType    EncounterRewardType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEncounterRewardScale   RewardScale                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>CallFunc_GetMarkupDataAsset_self_CastInput                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GenerateEssenceRewardsForEncounter_ReturnValue          (ReferenceParm)

void ABP_Encounter_EssenceBundle_C::Initialize(class AEncounterBase* SpawningEncounter, enum class EEncounterRewardType EncounterRewardType, enum class EEncounterRewardScale RewardScale, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> CallFunc_GetMarkupDataAsset_self_CastInput, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FInventoryEntry>& CallFunc_GenerateEssenceRewardsForEncounter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_EssenceBundle_C", "Initialize");

	Params::ABP_Encounter_EssenceBundle_C_Initialize_Params Parms{};

	Parms.SpawningEncounter = SpawningEncounter;
	Parms.EncounterRewardType = EncounterRewardType;
	Parms.RewardScale = RewardScale;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMarkupDataAsset_self_CastInput = CallFunc_GetMarkupDataAsset_self_CastInput;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GenerateEssenceRewardsForEncounter_ReturnValue = CallFunc_GenerateEssenceRewardsForEncounter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_EssenceBundle.BP_Encounter_EssenceBundle_C.Spawn Hope Echo Escape AVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Essence_Bundle_Escape_Row                                        (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_CreateEncounterAVFX_NiagaraSystem                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_EssenceBundle_C::Spawn_Hope_Echo_Escape_AVFX(const struct FGameplayTag& Essence_Bundle_Escape_Row, bool CallFunc_HasAuthority_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, bool CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned, class UNiagaraComponent* CallFunc_CreateEncounterAVFX_NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_EssenceBundle_C", "Spawn Hope Echo Escape AVFX");

	Params::ABP_Encounter_EssenceBundle_C_Spawn_Hope_Echo_Escape_AVFX_Params Parms{};

	Parms.Essence_Bundle_Escape_Row = Essence_Bundle_Escape_Row;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams = K2Node_MakeStruct_S_EncounterAVFXParams;
	Parms.CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned = CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned;
	Parms.CallFunc_CreateEncounterAVFX_NiagaraSystem = CallFunc_CreateEncounterAVFX_NiagaraSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_EssenceBundle.BP_Encounter_EssenceBundle_C.GetSpawningEncounter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AEncounterBase*              SpawningEncounter                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_EssenceBundle_C::GetSpawningEncounter(class AEncounterBase** SpawningEncounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_EssenceBundle_C", "GetSpawningEncounter");

	Params::ABP_Encounter_EssenceBundle_C_GetSpawningEncounter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SpawningEncounter != nullptr)
		*SpawningEncounter = Parms.SpawningEncounter;

}


// Function BP_Encounter_EssenceBundle.BP_Encounter_EssenceBundle_C.GetInteractText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class FString                      InteractText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_Encounter_EssenceBundle_C::GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_EssenceBundle_C", "GetInteractText");

	Params::ABP_Encounter_EssenceBundle_C_GetInteractText_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractText != nullptr)
		*InteractText = std::move(Parms.InteractText);

}


// Function BP_Encounter_EssenceBundle.BP_Encounter_EssenceBundle_C.GetInteractionTag
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InteractionTag                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Encounter_EssenceBundle_C::GetInteractionTag(struct FGameplayTag* InteractionTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_EssenceBundle_C", "GetInteractionTag");

	Params::ABP_Encounter_EssenceBundle_C_GetInteractionTag_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InteractionTag != nullptr)
		*InteractionTag = std::move(Parms.InteractionTag);

	return Parms.ReturnValue;

}


// Function BP_Encounter_EssenceBundle.BP_Encounter_EssenceBundle_C.Clear Hope Echo AVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_EssenceBundle_C::Clear_Hope_Echo_AVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_EssenceBundle_C", "Clear Hope Echo AVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_EssenceBundle.BP_Encounter_EssenceBundle_C.ExecuteUbergraph_BP_Encounter_EssenceBundle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_EssenceBundle_C::ExecuteUbergraph_BP_Encounter_EssenceBundle(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_EssenceBundle_C", "ExecuteUbergraph_BP_Encounter_EssenceBundle");

	Params::ABP_Encounter_EssenceBundle_C_ExecuteUbergraph_BP_Encounter_EssenceBundle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


