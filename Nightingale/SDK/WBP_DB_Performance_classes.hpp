#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x4E0 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_DB_Performance.WBP_DB_Performance_C
class UWBP_DB_Performance_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                       Switcher_List;                                     // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DB_Performance_General_C*         WBP_DB_Performance_General;                        // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DB_Performance_Sampling_C*        WBP_DB_Performance_Sampling;                       // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UIK_MenuTabs_C*                   WBP_UIK_MenuTabs;                                  // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DB_Performance_C* GetDefaultObj();

	void BndEvt__WBP_DB_Performance_WBP_UIK_MenuTabs_1_K2Node_ComponentBoundEvent_0_TabSelected__DelegateSignature(class FText SelectedTabName, int32 ActiveTab);
	void ExecuteUbergraph_WBP_DB_Performance(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_SelectedTabName, int32 K2Node_ComponentBoundEvent_ActiveTab);
};

}


