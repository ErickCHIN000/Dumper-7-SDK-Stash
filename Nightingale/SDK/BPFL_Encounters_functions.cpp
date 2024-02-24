#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Encounters.BPFL_Encounters_C
// (None)

class UClass* UBPFL_Encounters_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Encounters_C");

	return Clss;
}


// BPFL_Encounters_C BPFL_Encounters.Default__BPFL_Encounters_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Encounters_C* UBPFL_Encounters_C::GetDefaultObj()
{
	static class UBPFL_Encounters_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Encounters_C*>(UBPFL_Encounters_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Encounters.BPFL_Encounters_C.GetRandomRewardType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EEncounterRewardType>Rewards                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEncounterRewardType    Reward                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEncounterRewardType    CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EEncounterRewardType>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// enum class EEncounterRewardType    CallFunc_Array_Random_OutItem_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Encounters_C::GetRandomRewardType(TArray<enum class EEncounterRewardType>& Rewards, class UObject* __WorldContext, enum class EEncounterRewardType* Reward, bool CallFunc_Array_IsNotEmpty_ReturnValue, enum class EEncounterRewardType CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, TArray<enum class EEncounterRewardType>& K2Node_MakeArray_Array, enum class EEncounterRewardType CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Encounters_C", "GetRandomRewardType");

	Params::UBPFL_Encounters_C_GetRandomRewardType_Params Parms{};

	Parms.Rewards = Rewards;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Random_OutItem_1 = CallFunc_Array_Random_OutItem_1;
	Parms.CallFunc_Array_Random_OutIndex_1 = CallFunc_Array_Random_OutIndex_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Reward != nullptr)
		*Reward = Parms.Reward;

}


// Function BPFL_Encounters.BPFL_Encounters_C.GetRewardTypesFrom RealmTags
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       RealmTags                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EEncounterRewardType>EncounterRewardType                                              (Parm, OutParm)
// TArray<enum class EEncounterRewardType>LOCAL_EncounterRewardTypes                                       (Edit, BlueprintVisible)
// enum class EEncounterRewardType    Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEncounterRewardType    Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEncounterRewardType    Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEncounterRewardType    Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEncounterRewardType    Temp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Encounters_C::GetRewardTypesFrom_RealmTags(const struct FGameplayTagContainer& RealmTags, class UObject* __WorldContext, TArray<enum class EEncounterRewardType>* EncounterRewardType, const TArray<enum class EEncounterRewardType>& LOCAL_EncounterRewardTypes, enum class EEncounterRewardType Temp_byte_Variable, enum class EEncounterRewardType Temp_byte_Variable_1, enum class EEncounterRewardType Temp_byte_Variable_2, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_2, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, bool CallFunc_HasTag_ReturnValue_3, bool CallFunc_HasTag_ReturnValue_4, enum class EEncounterRewardType Temp_byte_Variable_3, enum class EEncounterRewardType Temp_byte_Variable_4, int32 CallFunc_Array_AddUnique_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Encounters_C", "GetRewardTypesFrom RealmTags");

	Params::UBPFL_Encounters_C_GetRewardTypesFrom_RealmTags_Params Parms{};

	Parms.RealmTags = RealmTags;
	Parms.__WorldContext = __WorldContext;
	Parms.LOCAL_EncounterRewardTypes = LOCAL_EncounterRewardTypes;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_HasTag_ReturnValue_2 = CallFunc_HasTag_ReturnValue_2;
	Parms.CallFunc_HasTag_ReturnValue_3 = CallFunc_HasTag_ReturnValue_3;
	Parms.CallFunc_HasTag_ReturnValue_4 = CallFunc_HasTag_ReturnValue_4;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_Array_AddUnique_ReturnValue_3 = CallFunc_Array_AddUnique_ReturnValue_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue_4 = CallFunc_Array_AddUnique_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (EncounterRewardType != nullptr)
		*EncounterRewardType = std::move(Parms.EncounterRewardType);

}


// Function BPFL_Encounters.BPFL_Encounters_C.CreateEncounterSFX
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Column                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      AVFXParams                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAudio           CallFunc_GetTableCellData_OutData                                (HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Encounters_C::CreateEncounterSFX(const struct FGameplayTag& Row, const struct FGameplayTag& Column, const struct FS_EncounterAVFXParams& AVFXParams, class UObject* __WorldContext, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_EncounterAudio& CallFunc_GetTableCellData_OutData, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Encounters_C", "CreateEncounterSFX");

	Params::UBPFL_Encounters_C_CreateEncounterSFX_Params Parms{};

	Parms.Row = Row;
	Parms.Column = Column;
	Parms.AVFXParams = AVFXParams;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1 = CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Encounters.BPFL_Encounters_C.CreateEncounterVFX
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Column                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      AVFXParams                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bNiagaraSystemSpawned                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterVFXPresentation CallFunc_GetTableCellData_OutData                                (HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateEncounterVFXInternal_bNiagaraSystemSpawned        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_CreateEncounterVFXInternal_NiagaraSystem                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Encounters_C::CreateEncounterVFX(const struct FGameplayTag& Row, const struct FGameplayTag& Column, const struct FS_EncounterAVFXParams& AVFXParams, class UObject* __WorldContext, bool* bNiagaraSystemSpawned, class UNiagaraComponent** NiagaraSystem, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_EncounterVFXPresentation& CallFunc_GetTableCellData_OutData, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_CreateEncounterVFXInternal_bNiagaraSystemSpawned, class UNiagaraComponent* CallFunc_CreateEncounterVFXInternal_NiagaraSystem, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Encounters_C", "CreateEncounterVFX");

	Params::UBPFL_Encounters_C_CreateEncounterVFX_Params Parms{};

	Parms.Row = Row;
	Parms.Column = Column;
	Parms.AVFXParams = AVFXParams;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1 = CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_CreateEncounterVFXInternal_bNiagaraSystemSpawned = CallFunc_CreateEncounterVFXInternal_bNiagaraSystemSpawned;
	Parms.CallFunc_CreateEncounterVFXInternal_NiagaraSystem = CallFunc_CreateEncounterVFXInternal_NiagaraSystem;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (bNiagaraSystemSpawned != nullptr)
		*bNiagaraSystemSpawned = Parms.bNiagaraSystemSpawned;

	if (NiagaraSystem != nullptr)
		*NiagaraSystem = Parms.NiagaraSystem;

}


// Function BPFL_Encounters.BPFL_Encounters_C.Get Encounter Palette AVFXTag
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AEncounterBase*              Encounter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                AVFXTag                                                          (ConstParm, Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                Faction                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlugPalette            Palette                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetEncounterPaletteAVFXTag_ReturnValue                  (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UEncounterDataAsset*         CallFunc_GetEncounterData_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_Encounters_C::Get_Encounter_Palette_AVFXTag(class AEncounterBase* Encounter, class UObject* __WorldContext, struct FGameplayTag* AVFXTag, enum class EFaction Faction, enum class EPlugPalette Palette, const struct FGameplayTag& CallFunc_GetEncounterPaletteAVFXTag_ReturnValue, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Encounters_C", "Get Encounter Palette AVFXTag");

	Params::UBPFL_Encounters_C_Get_Encounter_Palette_AVFXTag_Params Parms{};

	Parms.Encounter = Encounter;
	Parms.__WorldContext = __WorldContext;
	Parms.Faction = Faction;
	Parms.Palette = Palette;
	Parms.CallFunc_GetEncounterPaletteAVFXTag_ReturnValue = CallFunc_GetEncounterPaletteAVFXTag_ReturnValue;
	Parms.CallFunc_GetEncounterData_ReturnValue = CallFunc_GetEncounterData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AVFXTag != nullptr)
		*AVFXTag = std::move(Parms.AVFXTag);

}


// Function BPFL_Encounters.BPFL_Encounters_C.CreateEncounterSFXInternal
// (Static, Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_EncounterAudio           Audio                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      EncounterParams                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          ScopedAkComp                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               StopEvent                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               AudioEvent                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          CallFunc_LocationsToTransforms_Transforms                        (ReferenceParm)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_PostAsyncAkEventScoped_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Encounters_C::CreateEncounterSFXInternal(const struct FS_EncounterAudio& Audio, const struct FS_EncounterAVFXParams& EncounterParams, class UObject* __WorldContext, class UScopedAkComponent* ScopedAkComp, class UAkAudioEvent* StopEvent, class UAkAudioEvent* AudioEvent, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FTransform>& CallFunc_LocationsToTransforms_Transforms, bool CallFunc_Array_IsEmpty_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_PostAsyncAkEventScoped_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Encounters_C", "CreateEncounterSFXInternal");

	Params::UBPFL_Encounters_C_CreateEncounterSFXInternal_Params Parms{};

	Parms.Audio = Audio;
	Parms.EncounterParams = EncounterParams;
	Parms.__WorldContext = __WorldContext;
	Parms.ScopedAkComp = ScopedAkComp;
	Parms.StopEvent = StopEvent;
	Parms.AudioEvent = AudioEvent;
	Parms.CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue = CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_LocationsToTransforms_Transforms = CallFunc_LocationsToTransforms_Transforms;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_PostAsyncAkEventScoped_ReturnValue = CallFunc_PostAsyncAkEventScoped_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Encounters.BPFL_Encounters_C.CreateEncounterVFXInternal
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_EncounterVFXPresentation VFX                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      EncounterParams                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bNiagaraSystemSpawned                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NVFX_SpawnSystem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPFL_Encounters_C::CreateEncounterVFXInternal(const struct FS_EncounterVFXPresentation& VFX, struct FS_EncounterAVFXParams& EncounterParams, class UObject* __WorldContext, bool* bNiagaraSystemSpawned, class UNiagaraComponent** NiagaraSystem, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_NVFX_SpawnSystem_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Encounters_C", "CreateEncounterVFXInternal");

	Params::UBPFL_Encounters_C_CreateEncounterVFXInternal_Params Parms{};

	Parms.VFX = VFX;
	Parms.EncounterParams = EncounterParams;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_NVFX_SpawnSystem_ReturnValue = CallFunc_NVFX_SpawnSystem_ReturnValue;
	Parms.CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned = CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned;

	UObject::ProcessEvent(Func, &Parms);

	if (bNiagaraSystemSpawned != nullptr)
		*bNiagaraSystemSpawned = Parms.bNiagaraSystemSpawned;

	if (NiagaraSystem != nullptr)
		*NiagaraSystem = Parms.NiagaraSystem;

}


// Function BPFL_Encounters.BPFL_Encounters_C.CreateEncounterAVFX
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Column                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      AVFXParams                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bNiagaraSystemSpawned                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// struct FS_EncounterAudio           CallFunc_GetTableCellData_OutData                                (HasGetValueTypeHash)
// struct FS_EncounterVFXPresentation CallFunc_GetTableCellData_OutData_1                              (HasGetValueTypeHash)
// bool                               CallFunc_CreateEncounterVFXInternal_bNiagaraSystemSpawned        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_CreateEncounterVFXInternal_NiagaraSystem                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPFL_Encounters_C::CreateEncounterAVFX(const struct FGameplayTag& Row, const struct FGameplayTag& Column, const struct FS_EncounterAVFXParams& AVFXParams, class UObject* __WorldContext, bool* bNiagaraSystemSpawned, class UNiagaraComponent** NiagaraSystem, bool CallFunc_IsDedicatedServer_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const struct FS_EncounterAudio& CallFunc_GetTableCellData_OutData, const struct FS_EncounterVFXPresentation& CallFunc_GetTableCellData_OutData_1, bool CallFunc_CreateEncounterVFXInternal_bNiagaraSystemSpawned, class UNiagaraComponent* CallFunc_CreateEncounterVFXInternal_NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Encounters_C", "CreateEncounterAVFX");

	Params::UBPFL_Encounters_C_CreateEncounterAVFX_Params Parms{};

	Parms.Row = Row;
	Parms.Column = Column;
	Parms.AVFXParams = AVFXParams;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1 = CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.CallFunc_GetTableCellData_OutData_1 = CallFunc_GetTableCellData_OutData_1;
	Parms.CallFunc_CreateEncounterVFXInternal_bNiagaraSystemSpawned = CallFunc_CreateEncounterVFXInternal_bNiagaraSystemSpawned;
	Parms.CallFunc_CreateEncounterVFXInternal_NiagaraSystem = CallFunc_CreateEncounterVFXInternal_NiagaraSystem;

	UObject::ProcessEvent(Func, &Parms);

	if (bNiagaraSystemSpawned != nullptr)
		*bNiagaraSystemSpawned = Parms.bNiagaraSystemSpawned;

	if (NiagaraSystem != nullptr)
		*NiagaraSystem = Parms.NiagaraSystem;

}


// Function BPFL_Encounters.BPFL_Encounters_C.CreateAffinityTableMap
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTag>        RowTags                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ColumnTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<struct FGameplayTag, struct FS_EncounterPresentation>AffinityMap                                                      (Parm, OutParm)
// struct FGameplayTag                RowTag                                                           (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TMap<struct FGameplayTag, struct FS_EncounterPresentation>LocalAffinityMap                                                 (Edit, BlueprintVisible)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAudio           CallFunc_GetTableCellData_OutData                                (HasGetValueTypeHash)
// struct FS_EncounterVFXPresentation CallFunc_GetTableCellData_OutData_1                              (HasGetValueTypeHash)
// struct FS_EncounterPresentation    K2Node_MakeStruct_S_EncounterPresentation                        (HasGetValueTypeHash)

void UBPFL_Encounters_C::CreateAffinityTableMap(TArray<struct FGameplayTag>& RowTags, const struct FGameplayTag& ColumnTag, class UObject* __WorldContext, TMap<struct FGameplayTag, struct FS_EncounterPresentation>* AffinityMap, const struct FGameplayTag& RowTag, TMap<struct FGameplayTag, struct FS_EncounterPresentation> LocalAffinityMap, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_EncounterAudio& CallFunc_GetTableCellData_OutData, const struct FS_EncounterVFXPresentation& CallFunc_GetTableCellData_OutData_1, const struct FS_EncounterPresentation& K2Node_MakeStruct_S_EncounterPresentation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Encounters_C", "CreateAffinityTableMap");

	Params::UBPFL_Encounters_C_CreateAffinityTableMap_Params Parms{};

	Parms.RowTags = RowTags;
	Parms.ColumnTag = ColumnTag;
	Parms.__WorldContext = __WorldContext;
	Parms.RowTag = RowTag;
	Parms.LocalAffinityMap = LocalAffinityMap;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.CallFunc_GetTableCellData_OutData_1 = CallFunc_GetTableCellData_OutData_1;
	Parms.K2Node_MakeStruct_S_EncounterPresentation = K2Node_MakeStruct_S_EncounterPresentation;

	UObject::ProcessEvent(Func, &Parms);

	if (AffinityMap != nullptr)
		*AffinityMap = Parms.AffinityMap;

}


// Function BPFL_Encounters.BPFL_Encounters_C.IsPOITagValidMatch
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagQuery           TagRequirements                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       POITags                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ValidMatch                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Encounters_C::IsPOITagValidMatch(const struct FGameplayTagQuery& TagRequirements, const struct FGameplayTagContainer& POITags, class UObject* __WorldContext, bool* ValidMatch, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Encounters_C", "IsPOITagValidMatch");

	Params::UBPFL_Encounters_C_IsPOITagValidMatch_Params Parms{};

	Parms.TagRequirements = TagRequirements;
	Parms.POITags = POITags;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidMatch != nullptr)
		*ValidMatch = Parms.ValidMatch;

}

}


