#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Telemetry_Codex.BPFL_Telemetry_Codex_C
class UBPFL_Telemetry_Codex_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Telemetry_Codex_C* GetDefaultObj();

	void Telemetry_Codex_Viewed(class APlayerState* Player_State, class UCodexBaseDataAsset* Codex_Data_Asset, class UObject* __WorldContext, const class FString& UnlockedCodices, class UCodexTrackerComponent* CodexTrackerComponent, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCodexSubentry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_GetTagName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TScriptInterface<class ICodexTrackerInterface> CallFunc_GetUnlockedSubentryTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetUnlockedSubentryTags_OutUnlockedSubentryTags, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_HasTag_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_1, TArray<struct FMetricsEventAttr>& K2Node_MakeArray_Array);
};

}


