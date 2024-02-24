#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x310 - 0x260)
// WidgetBlueprintGeneratedClass wid_TasksPanel_List.wid_TasksPanel_List_C
class UWid_TasksPanel_List_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                          Elemets;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  TitleText;                                         // 0x270(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         Important;                                         // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_D9E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentIndex;                                      // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                           Normal;                                            // 0x290(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           GreyOut;                                           // 0x2B8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           Selected;                                          // 0x2E0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShouldShowAvatars;                                 // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_DA9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentViewportSize;                               // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_TasksPanel_List_C* GetDefaultObj();

	void UpdateAssigments(int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWid_TasksPanel_List_Entry_C* K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UpdateSizeF();
	void GetCurrentSelection(class UWid_TasksPanel_List_Entry_C** Entry, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_TasksPanel_List_Entry_C* K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry, bool K2Node_DynamicCast_bSuccess);
	bool HaveElements(int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void AddElement(class FText Text, enum class Enum_TasksPanel_Entry_Type Type, class FName EventID, int32 TextDays, bool IsImportant, const struct FDataTableRowHandle& QuestType, enum class EEventMap Map, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_TasksPanel_List_Entry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void Clear();
	void InitSelection();
	void InputUp();
	void InputDown();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_wid_TasksPanel_List(int32 EntryPoint, enum class Enum_TasksPanel_Entry_Type Temp_byte_Variable, bool K2Node_Event_IsDesignTime, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class Enum_TasksPanel_Entry_Type Temp_byte_Variable_1, bool Temp_bool_Variable, enum class Enum_TasksPanel_Entry_Type Temp_byte_Variable_2, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_TasksPanel_List_Entry_C* K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry, bool K2Node_DynamicCast_bSuccess, enum class Enum_TasksPanel_Entry_Type Temp_byte_Variable_3, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_TasksPanel_List_Entry_C* K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class Enum_TasksPanel_Entry_Type K2Node_Select_Default, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class Enum_TasksPanel_Entry_Type K2Node_Select_Default_1, enum class Enum_TasksPanel_Entry_Type K2Node_Select_Default_2);
};

}


