#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x310 - 0x308)
// WidgetBlueprintGeneratedClass CF_DebugFlammable.CF_DebugFlammable_C
class UCF_DebugFlammable_C : public UCF_BaseComboBool_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_DebugFlammable_C* GetDefaultObj();

	void Construct();
	void HandleOnCheckboxStateChanged(class UUserWidget* SelectedWidget, bool IsChecked);
	void HandleOnItemSet(class UUserWidget* Widget);
	void ExecuteUbergraph_CF_DebugFlammable(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, enum class ECheckBoxState Temp_byte_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ECheckBoxState Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, class UFlammableComponentClassRow_C* CallFunc_Create_ReturnValue, TArray<class UClass*>& CallFunc_GetAllFlammableComponentClasses_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsFlammable_Component, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class UUserWidget* K2Node_Event_SelectedWidget, bool K2Node_Event_IsChecked, class ADisasterController* CallFunc_GetDisasterController_ReturnValue, class UFlammableComponentClassRow_C* K2Node_DynamicCast_AsFlammable_Component_Class_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UUserWidget* K2Node_Event_Widget, class UFlammableComponentClassRow_C* K2Node_DynamicCast_AsFlammable_Component_Class_Row_1, bool K2Node_DynamicCast_bSuccess_1, class ADisasterController* CallFunc_GetDisasterController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetDebugFlammableState_ReturnValue, enum class ECheckBoxState K2Node_Select_Default);
};

}


