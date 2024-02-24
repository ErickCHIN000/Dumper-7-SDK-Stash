#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x32 (0x27A - 0x248)
// WidgetBlueprintGeneratedClass SelectionDotsWidget.SelectionDotsWidget_C
class USelectionDotsWidget_C : public USHUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        DotBox;                                            // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USHRadioGroup*                         DotsGroup;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<enum class EEquipmentSlot>            Slots;                                             // 0x260(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class ASHPlayerCharacter*                    Player;                                            // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CollapseEmptySlots;                                // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         HaveNotEmptySlot;                                  // 0x279(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USelectionDotsWidget_C* GetDefaultObj();

	void CheckVisibility(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class USelectionDot_C* K2Node_DynamicCast_AsSelection_Dot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, class USHInventorySlot* CallFunc_GetEquipmentSlot_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsNotEmpty_ReturnValue);
	void Select(int32 Index, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void Construct();
	void OnSynchronizeProperties();
	void OnContentChanged_Event_0(class AActor* Sender);
	void ExecuteUbergraph_SelectionDotsWidget(int32 EntryPoint, const struct FMargin& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable, class USelectionDot_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_Select_Default, enum class EEquipmentSlot CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* K2Node_CustomEvent_Sender);
};

}


