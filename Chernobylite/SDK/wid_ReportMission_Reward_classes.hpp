#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass wid_ReportMission_Reward.wid_ReportMission_Reward_C
class UWid_ReportMission_Reward_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UHorizontalBox*                        Rewards;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ReportMission_Reward_Entry_Item_C* CurrentSelectedReward;                             // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_ReportMission_Reward_C* GetDefaultObj();

	void SelectEntry(class UWid_ReportMission_Reward_Entry_Item_C* Entry, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void ChangeTitle(class FText Title);
	void AddEntry(class UWidget* Content, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_ReportMission_Reward(int32 EntryPoint, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_ReportMission_Reward_Entry_Item_C* CallFunc_Create_ReturnValue);
};

}


