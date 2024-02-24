#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x258 - 0x230)
// WidgetBlueprintGeneratedClass UI_StatusEffectContainer.UI_StatusEffectContainer_C
class UUI_StatusEffectContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_StatusEffectContainer;                 // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     UniformGridPanel_StatusEffect;                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ChildColumnID;                                     // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChildRowID;                                        // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChildUniqueID;                                     // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ColumnMax;                                         // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_StatusEffectContainer_C* GetDefaultObj();

	void AddGlow(int32 ID, bool Remove, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_StatusEffect_C* K2Node_DynamicCast_AsUI_Status_Effect, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OverrideIconStackNum(int32 IconID, int32 StackNum, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_StatusEffect_C* K2Node_DynamicCast_AsUI_Status_Effect, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void PauseStatusEffect(int32 IconID, bool UnPause, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_StatusEffect_C* K2Node_DynamicCast_AsUI_Status_Effect, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void IncreaseRowAndColumn(int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void IncreaseUniqueID(int32 CallFunc_Add_IntInt_ReturnValue);
	void OverrideIconDuration(int32 IconID, float Duration, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_StatusEffect_C* K2Node_DynamicCast_AsUI_Status_Effect, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void RemoveStatusEffect(int32 IconID, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_RemoveChildAt_ReturnValue, class UUI_StatusEffect_C* K2Node_DynamicCast_AsUI_Status_Effect, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetStatusOrderIDs(class UWidget* Local_Widget, int32 Local_ColumnID, int32 Local_RowID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUI_StatusEffect_C* K2Node_DynamicCast_AsUI_Status_Effect, bool K2Node_DynamicCast_bSuccess, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void AddStatusEffect(float Duration, class UTexture2D* Icon, int32 StackNum, int32* IconID, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_StatusEffect_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue);
	void Construct();
	void OnStatusExpired(class UUI_StatusEffect_C* Widget, int32 ColumnID, int32 RowID);
	void ExecuteUbergraph_UI_StatusEffectContainer(int32 EntryPoint, class UUI_StatusEffect_C* K2Node_CustomEvent_Widget, int32 K2Node_CustomEvent_ColumnID, int32 K2Node_CustomEvent_RowID, bool CallFunc_RemoveChild_ReturnValue);
};

}


