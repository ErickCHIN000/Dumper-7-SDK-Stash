#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x280 - 0x270)
// WidgetBlueprintGeneratedClass UMG_OnProspectNotification_ExoticsBanked.UMG_OnProspectNotification_ExoticsBanked_C
class UUMG_OnProspectNotification_ExoticsBanked_C : public UUMG_OnProspectNotificationBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          RewardsBox;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_OnProspectNotification_ExoticsBanked_C* GetDefaultObj();

	void SetExoticsCount(int32 Amount, const struct FMetaCurrencyRowHandle& Currency, class UUMG_WorkshopCostLarge_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_OnProspectNotification_ExoticsBanked(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


