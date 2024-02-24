#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x80 - 0x78)
// BlueprintGeneratedClass BP_MenuDataEntry_Codex.BP_MenuDataEntry_Codex_C
class UBP_MenuDataEntry_Codex_C : public UNWXMenuDataEntry
{
public:
	class UCodexBaseDataAsset*                   CodexDataAsset;                                    // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_MenuDataEntry_Codex_C* GetDefaultObj();

	struct FGuid GetID(class UCodexBaseDataAsset* CallFunc_GetCodexDataAsset_CodexDataAsset, const struct FGuid& CallFunc_GetCodexAssetUniqueId_OutUniqueID);
	class FText GetDescription(class UCodexBaseDataAsset* CallFunc_GetCodexDataAsset_CodexDataAsset, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FCodexSubentry& CallFunc_Array_Get_Item);
	bool IsUnlocked(class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class ICodexTrackerInterface> CallFunc_HasUnlockedAnySubentry_self_CastInput, bool CallFunc_HasUnlockedAnySubentry_OutUnlocked, bool CallFunc_IsValid_ReturnValue);
	void GetImage(bool* IsValidReference, TSoftObjectPtr<class UTexture2D>* EntryImage, class UCodexBaseDataAsset* CallFunc_GetCodexDataAsset_CodexDataAsset, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	class FText GetDisplayName(class UCodexBaseDataAsset* CallFunc_GetCodexDataAsset_CodexDataAsset);
	struct FGameplayTagContainer GetSortingGroups(class UCodexBaseDataAsset* CallFunc_GetCodexDataAsset_CodexDataAsset);
	class UWidget* GetTooltipWidget(class FText Tooltip_Subentry, class UWBP_Tooltip_CodexEntry_C* CallFunc_Create_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetDescription_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, int32 CallFunc_Len_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_GetImage_IsValidReference, TSoftObjectPtr<class UTexture2D> CallFunc_GetImage_EntryImage, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue);
	void GetCodexDataAsset(class UCodexBaseDataAsset** CodexDataAsset);
	void SetCodexDataAsset(class UCodexBaseDataAsset* CodexDataAsset);
};

}


