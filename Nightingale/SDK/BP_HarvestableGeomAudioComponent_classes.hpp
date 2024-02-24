#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x170 - 0x160)
// BlueprintGeneratedClass BP_HarvestableGeomAudioComponent.BP_HarvestableGeomAudioComponent_C
class UBP_HarvestableGeomAudioComponent_C : public UHarvestableGeomAudioComponent
{
public:
	struct FGameplayTag                          AffinityTableRow;                                  // 0x160(0x8)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AffinityTableColumn;                               // 0x168(0x8)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_HarvestableGeomAudioComponent_C* GetDefaultObj();

	void OnRep_AffinityTableRow(bool CallFunc_IsDedicatedServer_ReturnValue);
	void OnRep_AffinityTableColumn(bool CallFunc_IsDedicatedServer_ReturnValue);
	void HandleBreakAudioLoaded(class UAkAudioEvent* LoadedEvent);
	void HandleWaterDebrisAudioLoaded(class UAkAudioEvent* LoadedEvent);
	void HandleLandDebrisAudioLoaded(class UAkAudioEvent* LoadedEvent);
	void TryPreloadAudio(bool CallFunc_IsDedicatedServer_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, const struct FGameplayTagContainer& Temp_struct_Variable, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, const struct FResourceAudioChaosDebris& CallFunc_GetTableCellData_OutData, bool CallFunc_IsGameplayTagValid_ReturnValue_1, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FGameplayTagContainer& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTagContainer& Temp_struct_Variable_2, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue_2);
	void PlayDebrisAudio(class UAkAudioEvent* AudioEvent, TArray<struct FVector>& MultiPositions, float PercentageOfParticles, int32 NumDisplacedParticles, float WaterDepth, const TArray<struct FTransform>& MultipositionTransforms, class UScopedAkComponent* LocalScopedAkComponent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void PlayInitialBreakAudio(class UAkAudioEvent* AudioEvent, struct FVector& BreakPosition, int32 NumDisplacedParticles, class UScopedAkComponent* LocalScopedAkComponent, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetRTPCValue_Value_ImplicitCast);
};

}


