#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x374 - 0x348)
// WidgetBlueprintGeneratedClass WBP_CommonInputActionIconSet.WBP_CommonInputActionIconSet_C
class UWBP_CommonInputActionIconSet_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        IconBox;                                           // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                             Size;                                              // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UInputAction*                          Input_Action;                                      // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Icon_Number;                                       // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CommonInputActionIconSet_C* GetDefaultObj();

	void GetChildrenCount(int32* Count, int32 ResultChildrenCount, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_CommonInputActionIcon_C* K2Node_DynamicCast_AsWBP_Common_Input_Action_Icon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasValidIcon_IsIconValid);
	void Update(int32 IconIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_CommonInputActionIcon_C* CallFunc_Create_ReturnValue, bool CallFunc_HasValidIcon_IsIconValid, bool CallFunc_IsOwningPlayerUsingGamepad_ReturnValue, TArray<class UInputTriggerChordAction*>& CallFunc_GetInputActionTriggers_OutTriggersArray, class UInputTrigger* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UInputTriggerChordAction* K2Node_DynamicCast_AsChorded_Action, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_InputKey_AND_C* CallFunc_Create_ReturnValue_1, class UWBP_CommonInputActionIcon_C* CallFunc_Create_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, bool CallFunc_HasValidIcon_IsIconValid_1, bool CallFunc_HasAnyChildren_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2);
	void Construct();
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void ExecuteUbergraph_WBP_CommonInputActionIconSet(int32 EntryPoint, enum class ECommonInputType K2Node_Event_CurrentInputType);
};

}


