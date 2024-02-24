#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x4E8 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_DB_Gameplay.WBP_DB_Gameplay_C
class UWBP_DB_Gameplay_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               TabContents;                                       // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UIK_MenuTabs_C*                   Tabs;                                              // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UClass*>                        TagWidgetClasses;                                  // 0x4D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_DebugModeComponent_C*              DebugModeComponent;                                // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DB_Gameplay_C* GetDefaultObj();

	void OnChildTabClosedHandler(class UNWXCommonWindowWidget* Window);
	void OnPlacementHandler();
	void TabSelected(int32 Index, class UUserWidget* LWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_DB_Gameplay_Structures_C* K2Node_DynamicCast_AsWBP_DB_Gameplay_Structures, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UNWXCommonWindowWidget* K2Node_DynamicCast_AsNWXCommon_Window_Widget, bool K2Node_DynamicCast_bSuccess_1, class UClass* CallFunc_Array_Get_Item, class UUserWidget* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void BndEvt__WBP_DB_Gameplay_Tabs_K2Node_ComponentBoundEvent_0_TabSelected__DelegateSignature(class FText SelectedTabName, int32 ActiveTab);
	void Construct();
	void ExecuteUbergraph_WBP_DB_Gameplay(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_SelectedTabName, int32 K2Node_ComponentBoundEvent_ActiveTab, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UBP_DebugModeComponent_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetGameplayTab_GameplayTab);
};

}


