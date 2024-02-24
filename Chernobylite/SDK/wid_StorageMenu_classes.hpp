#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass wid_StorageMenu.wid_StorageMenu_C
class UWid_StorageMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                               Remove;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RemoveText;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Use;                                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            UseText;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Storage_Grid_C*                   Parent;                                            // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_ResourceTransfer_C*               RMBMenu;                                           // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_StorageMenu_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void BndEvt__Use_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Remove_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Remove_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Use_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Use_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Remove_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_wid_StorageMenu(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1);
};

}


