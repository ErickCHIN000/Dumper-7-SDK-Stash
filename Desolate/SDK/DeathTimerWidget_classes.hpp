#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x64 (0x2E9 - 0x285)
// WidgetBlueprintGeneratedClass DeathTimerWidget.DeathTimerWidget_C
class UDeathTimerWidget_C : public UBaseAutoHideWidget_C
{
public:
	uint8                                        Pad_1C89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          TimersBox;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class ASHPlayerState*, class UPlayerDeathTimer_C*> SpawnedWidgets;                                    // 0x298(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         bFound;                                            // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UDeathTimerWidget_C* GetDefaultObj();

	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CheckUpdate();
	void ExecuteUbergraph_DeathTimerWidget(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UPlayerDeathTimer_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ASHMapManager* CallFunc_GetMapManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPlayerDeathStateTimer& CallFunc_Array_Get_Item, const struct FPlayerDeathStateTimer& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, class UPlayerDeathTimer_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<class ASHPlayerState*>& CallFunc_Map_Keys_Keys, class ASHPlayerState* CallFunc_Array_Get_Item_2, bool CallFunc_Not_PreBool_ReturnValue, class UPlayerDeathTimer_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
};

}


