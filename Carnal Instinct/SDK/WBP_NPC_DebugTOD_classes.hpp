#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass WBP_NPC_DebugTOD.WBP_NPC_DebugTOD_C
class UWBP_NPC_DebugTOD_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                BG;                                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            SB_Profiles;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_NPC_DebugTOD_C* GetDefaultObj();

	void FnSetActiveProfile(int32 Profile_Index, int32 I, class UWidget* W, int32 Index, int32 Temp_int_Array_Index_Variable, class UWBP_NPC_TODRow_C* K2Node_DynamicCast_AsWBP_NPC_TODRow, bool K2Node_DynamicCast_bSuccess, class UWBP_NPC_TODRow_C* K2Node_DynamicCast_AsWBP_NPC_TODRow_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void FnPopulateProfiles(TArray<struct FStruct_NPC_Profile>& Profile_List, class UWBP_NPC_TODRow_C* Row, const struct FStruct_NPC_Profile& ProfileStruct, const TArray<struct FStruct_NPC_Profile>& List, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWBP_NPC_TODRow_C* CallFunc_Create_ReturnValue, const struct FStruct_NPC_Profile& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ExecuteUbergraph_WBP_NPC_DebugTOD(int32 EntryPoint);
};

}


