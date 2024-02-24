#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x260 - 0x230)
// WidgetBlueprintGeneratedClass SaveEditor_MonstrumTab.SaveEditor_MonstrumTab_C
class USaveEditor_MonstrumTab_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USHRadioGroup*                         GroupBox;                                          // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ItemsBox;                                          // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               MinusExpButton;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               PlusExpButton;                                     // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AGenericCharacter_C*                   Player;                                            // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USaveEditor_MonstrumTab_C* GetDefaultObj();

	void SubExp(class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class UMonstrumButton_C* K2Node_DynamicCast_AsMonstrum_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue);
	void AddExp(class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class UMonstrumButton_C* K2Node_DynamicCast_AsMonstrum_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Divide_IntInt_ReturnValue);
	void ReadMonstrum(int32 SavedSelectedWidget, int32 Temp_int_Array_Index_Variable, class UMonstrumButton_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, TArray<struct FMonstrumInfo>& CallFunc_GetAllMonstrumInfo_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FMonstrumInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void BndEvt__PlusExpButton_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MinusExpButton_K2Node_ComponentBoundEvent_283_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_SaveEditor_MonstrumTab(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess);
};

}


