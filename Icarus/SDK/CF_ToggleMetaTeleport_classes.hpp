#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x328 - 0x2F0)
// WidgetBlueprintGeneratedClass CF_ToggleMetaTeleport.CF_ToggleMetaTeleport_C
class UCF_ToggleMetaTeleport_C : public UCF_BaseButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Spawn;                                             // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AActor>                  MetaDepositSoftClass;                              // 0x300(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCF_ToggleMetaTeleport_C* GetDefaultObj();

	void OnLoaded_5DC9A3934F59D45C92931986C319EDAB(TSubclassOf<class UObject> Loaded);
	void Execute();
	void ExecuteUbergraph_CF_ToggleMetaTeleport(int32 EntryPoint, const struct FModifier& K2Node_MakeStruct_Modifier, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BoolStatCheck_HasStat, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_AddModifierState_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item_2, bool CallFunc_RemoveModifierState_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
};

}


