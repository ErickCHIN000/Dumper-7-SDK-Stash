#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2C0 - 0x270)
// WidgetBlueprintGeneratedClass WBP_ForeSight.WBP_ForeSight_C
class UWBP_ForeSight_C : public UForesightController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              SizeBox_0;                                         // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ForeSightBar_C*                   WBP_ForeSightBar;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ForeSightBar_C*                   WBP_ForeSightBar_1;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ForeSightBar_C*                   WBP_ForeSightBar_2;                                // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ForeSightBar_C*                   WBP_ForeSightBar_3;                                // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ForeSightBar_C*                   WBP_ForeSightBar_4;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ForeSightBar_C*                   WBP_ForeSightBar_5;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_ForeSightBar_C*>           ForesightBars;                                     // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_ForeSight_C* GetDefaultObj();

	void Construct();
	void BP_UpdateHints(int32 HintCount, float ChargeProgress, int32 MaxHints);
	void BP_Init();
	void BP_ShowBorderAnim(int32 Index);
	void BP_HideBorderAnim(int32 Index);
	void BP_ShowSparkleAnim(int32 Index);
	void ExecuteUbergraph_WBP_ForeSight(int32 EntryPoint, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 K2Node_Event_hintCount, float K2Node_Event_chargeProgress, int32 K2Node_Event_maxHints, class UWBP_ForeSightBar_C* CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32 Temp_int_Loop_Counter_Variable_1, class UWBP_ForeSightBar_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, int32 K2Node_Event_Index_2, int32 K2Node_Event_Index_1, class UWBP_ForeSightBar_C* CallFunc_Array_Get_Item_2, class UWBP_ForeSightBar_C* CallFunc_Array_Get_Item_3, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 K2Node_Event_Index, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UWBP_ForeSightBar_C* CallFunc_Array_Get_Item_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


