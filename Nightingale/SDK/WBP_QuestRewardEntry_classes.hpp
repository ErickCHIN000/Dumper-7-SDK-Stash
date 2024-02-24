#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x89 (0x3C9 - 0x340)
// WidgetBlueprintGeneratedClass WBP_QuestRewardEntry.WBP_QuestRewardEntry_C
class UWBP_QuestRewardEntry_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_0;                                          // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RewardIcon;                                        // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Horizontal_AutoScrollingText_C*   RewardNameText;                                    // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RewardQuantityText;                                // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FQuestRewardPresentationData          QuestRewardData;                                   // 0x368(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	bool                                         CanAbandon;                                        // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_QuestRewardEntry_C* GetDefaultObj();

	void RefreshRewardData(bool CallFunc_IsValidSoftObjectReference_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	class UWidget* GetTooltipWidget_0(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void Construct();
	void Refresh();
	void ExecuteUbergraph_WBP_QuestRewardEntry(int32 EntryPoint);
};

}


