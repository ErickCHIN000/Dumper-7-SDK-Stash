#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass BP_RewardBehaviour_Codex.BP_RewardBehaviour_Codex_C
class UBP_RewardBehaviour_Codex_C : public UBP_RewardBehaviour_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FCodexAssetReference                  CodexAssetReference;                               // 0x38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_RewardBehaviour_Codex_C* GetDefaultObj();

	void RewardCodex(class APlayerState* PlayerState, class UObject* ContextObject, const struct FGuid& CodexId, class UCodexTrackerComponent* CodexTrackerComponent, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const struct FGuid& CallFunc_GetCodexAssetUniqueId_OutUniqueID, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FGuid& Temp_struct_Variable, bool CallFunc_IsValidCodexReference_ReturnValue, TScriptInterface<class ICodexTrackerInterface> CallFunc_GrantCodexEntry_self_CastInput);
	void GetDebugText(class FText* DebugText, const class FString& CallFunc_GetObjectNameOrNone_Name, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void ApplyReward(class APlayerState* PlayerState, class UObject* SenderContextObject);
	void ExecuteUbergraph_BP_RewardBehaviour_Codex(int32 EntryPoint, class APlayerState* K2Node_Event_PlayerState, class UObject* K2Node_Event_SenderContextObject);
};

}


