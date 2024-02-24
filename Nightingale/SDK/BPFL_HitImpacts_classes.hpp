#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_HitImpacts.BPFL_HitImpacts_C
class UBPFL_HitImpacts_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_HitImpacts_C* GetDefaultObj();

	void Get_All_Hit_Impact_SFX_for_Source(struct FGameplayTag& SourceTag, class UObject* __WorldContext, TArray<TSoftObjectPtr<class UObject>>* OutSoftObjectsArray, const TArray<TSoftObjectPtr<class UObject>>& SoftObjectsArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_AudioHitResponses& CallFunc_GetTableCellData_OutData, TArray<struct FS_HitAudio>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, const struct FS_HitAudio& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4);
	void Select_Hit_Impact_SFX(struct FS_HitAudio& AudioEvents, bool IsInstigatorLocallyControlled, bool IsReceiverLocallyControlled, bool IsBlocked, class UObject* __WorldContext, TSoftObjectPtr<class UAkAudioEvent>* HitImpactSFX);
};

}


