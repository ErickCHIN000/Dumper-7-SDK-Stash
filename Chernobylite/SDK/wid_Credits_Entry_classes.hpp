#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x45 (0x2A5 - 0x260)
// WidgetBlueprintGeneratedClass wid_Credits_Entry.wid_Credits_Entry_C
class UWid_Credits_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                          Entries;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Group;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  GroupName;                                         // 0x278(0x18)(Edit, BlueprintVisible)
	TArray<struct FSt_Credits_ListEntry>         People;                                            // 0x290(0x10)(Edit, BlueprintVisible)
	float                                        Spacer;                                            // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RightIsPerson;                                     // 0x2A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_Credits_Entry_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_Credits_Entry(int32 EntryPoint, class UWid_Credits_Person_Entry_C* CallFunc_Create_ReturnValue, bool K2Node_Event_IsDesignTime, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_TextToUpper_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSt_Credits_ListEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_GetChildrenCount_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1);
};

}


