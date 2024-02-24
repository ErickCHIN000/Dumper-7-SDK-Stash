#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x370 - 0x298)
// WidgetBlueprintGeneratedClass UMG_RewardDisplay.UMG_RewardDisplay_C
class UUMG_RewardDisplay_C : public UIcarusWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              IconSizeBox;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MetaPlaceholder;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Resources;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RewardAmountText;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RewardNameText;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  RewardName;                                        // 0x2D0(0x18)(Edit, BlueprintVisible)
	struct FSlateBrush                           RewardIcon;                                        // 0x2E8(0x88)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UUMG_RewardDisplay_C* GetDefaultObj();

	void SetRewardColor(const struct FLinearColor& Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void SetRewardIcon(TSoftObjectPtr<class UTexture2D> Icon, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void SetCoinReward(int32 Amount, class FText CallFunc_Conv_IntToText_ReturnValue);
	void SetExoticReward(const struct FMetaResource& Exotic, class FText CallFunc_Conv_IntToText_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FMetaCurrencyRowHandle& CallFunc_MakeMetaCurrency_ReturnValue, const struct FMetaCurrency& CallFunc_GetMetaCurrencyStruct_MetaCurrency, enum class EValid CallFunc_GetMetaCurrencyStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess);
	void SetItemReward(const struct FMetaItem& MetaItem, const struct FItemData& Item, const struct FItemData& CallFunc_ConvertToItem_ReturnValue, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class FText CallFunc_Conv_IntToText_ReturnValue);
	void Initialise();
	void ExecuteUbergraph_UMG_RewardDisplay(int32 EntryPoint);
};

}


