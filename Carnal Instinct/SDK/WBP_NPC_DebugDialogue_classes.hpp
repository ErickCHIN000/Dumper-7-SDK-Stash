#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2B0 - 0x260)
// WidgetBlueprintGeneratedClass WBP_NPC_DebugDialogue.WBP_NPC_DebugDialogue_C
class UWBP_NPC_DebugDialogue_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                BG;                                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            SB_Lines;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TxtCategory;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TxtID;                                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TxtName;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TxtState;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TxtSubCat;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TxtText;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TxtType;                                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_NPC_DebugDialogue_C* GetDefaultObj();

	void FnAddLine(class FText NPC_Name, const struct FStruct_DT_NPC_Dialogue& Current_Line, enum class Enum_NPC_Dialogue_State Line_State, enum class Enum_NPC_Dialogue_State State, class UWBP_NPC_DialogueLine_C* Widget, class FText Name, const struct FStruct_DT_NPC_Dialogue& Line, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWBP_NPC_DialogueLine_C* CallFunc_Create_ReturnValue);
	void FnSetActiveProfile(int32 Profile_Index, int32 I, class UWidget* W, int32 Index, int32 Temp_int_Array_Index_Variable, class UWBP_NPC_TODRow_C* K2Node_DynamicCast_AsWBP_NPC_TODRow, bool K2Node_DynamicCast_bSuccess, class UWBP_NPC_TODRow_C* K2Node_DynamicCast_AsWBP_NPC_TODRow_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void FnPopulateProfiles(TArray<struct FStruct_NPC_Profile>& Profile_List, class UWBP_NPC_TODRow_C* Row, const struct FStruct_NPC_Profile& ProfileStruct, const TArray<struct FStruct_NPC_Profile>& List, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWBP_NPC_TODRow_C* CallFunc_Create_ReturnValue, const struct FStruct_NPC_Profile& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ExecuteUbergraph_WBP_NPC_DebugDialogue(int32 EntryPoint);
};

}


