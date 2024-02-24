#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x270 - 0x230)
// WidgetBlueprintGeneratedClass UI_RuneNotifyContainer.UI_RuneNotifyContainer_C
class UUI_RuneNotifyContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              Overlay_Container;                                 // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RuneFancyNotification_C*           Widget;                                            // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_RuneFancyNotification_C*>   WidgetInQueue;                                     // 0x248(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class UUI_RuneFancyNotification_C*           Widget_Current;                                    // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_RuneFancyNotification_C*           Widget_InQueue;                                    // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStormModeNotifier_Component_C*        NotifierComponent;                                 // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_RuneNotifyContainer_C* GetDefaultObj();

	void Construct();
	void OnRuneNotify(class UUI_RuneFancyNotification_C* Widget);
	void OnEnd();
	void AddNewNotify();
	void OnSelectWindowChanged(bool ReturnValue);
	void OnEquipmentMenu(bool Close, enum class Enum_EquipmentMenuType Menu);
	void ExecuteUbergraph_UI_RuneNotifyContainer(int32 EntryPoint, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UUI_RuneFancyNotification_C* K2Node_CustomEvent_Widget, class AGameplayPC_StormMode_C* K2Node_DynamicCast_AsGameplay_PC_Storm_Mode, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyChildren_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool K2Node_CustomEvent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, class UUI_RuneFancyNotification_C* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_CustomEvent_Close, enum class Enum_EquipmentMenuType K2Node_CustomEvent_Menu, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}


