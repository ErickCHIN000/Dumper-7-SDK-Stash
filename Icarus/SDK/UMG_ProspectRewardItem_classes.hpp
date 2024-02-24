#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x2D4 - 0x298)
// WidgetBlueprintGeneratedClass UMG_ProspectRewardItem.UMG_ProspectRewardItem_C
class UUMG_ProspectRewardItem_C : public UIcarusWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              IconSizeBox;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ResourceCount;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ResourceIcon;                                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FWorkshopCost                         Reward;                                            // 0x2B8(0x1C)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_ProspectRewardItem_C* GetDefaultObj();

	void Set_Reward(const struct FWorkshopCost& Reward, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FMetaCurrency& CallFunc_GetMetaCurrencyStruct_MetaCurrency, enum class EValid CallFunc_GetMetaCurrencyStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_ProspectRewardItem(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


