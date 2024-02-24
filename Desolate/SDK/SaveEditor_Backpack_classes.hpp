#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x271 - 0x230)
// WidgetBlueprintGeneratedClass SaveEditor_Backpack.SaveEditor_Backpack_C
class USaveEditor_Backpack_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USHButton*                             ArrowDownButton;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USHButton*                             ArrowUpButton;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventory_v2_C*                       BackpackInventory;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      CountEditBox;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RightArrow;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USaveEditor_ItemExplorer_C*            SaveEditor_ItemExplorer;                           // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AGenericCharacter_C*                   Player;                                            // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSafezoneInventory;                               // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USaveEditor_Backpack_C* GetDefaultObj();

	void Construct();
	void OnSlotUsed_Event_0(class UInventorySlot_v2_C* Slot);
	void BndEvt__ArrowDownButton_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ArrowUpButton_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_SaveEditor_Backpack(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess, class UInventorySlot_v2_C* K2Node_CustomEvent_slot, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, class ASHInventory* K2Node_Select_Default, int32 CallFunc_AddPlaceholderFromClass_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Conv_StringToInt_ReturnValue_1, class FText CallFunc_GetText_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_1);
};

}


