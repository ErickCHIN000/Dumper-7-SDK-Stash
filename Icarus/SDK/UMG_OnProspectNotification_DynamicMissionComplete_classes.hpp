#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x298 - 0x270)
// WidgetBlueprintGeneratedClass UMG_OnProspectNotification_DynamicMissionComplete.UMG_OnProspectNotification_DynamicMissionComplete_C
class UUMG_OnProspectNotification_DynamicMissionComplete_C : public UUMG_OnProspectNotificationBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            NotificationTitle;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               RewardBorder;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RewardsBox;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RewardsText;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_OnProspectNotification_DynamicMissionComplete_C* GetDefaultObj();

	void SetMissionReward(int32 Credits, int32 Experience, class UUMG_WorkshopCostLarge_C* CallFunc_Create_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, const struct FMetaCurrencyRowHandle& Temp_struct_Variable, bool CallFunc_Greater_IntInt_ReturnValue_3, class UUMG_ExpRewardLarge_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_OnProspectNotification_DynamicMissionComplete(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


