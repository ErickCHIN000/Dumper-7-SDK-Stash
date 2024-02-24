#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x300 - 0x260)
// WidgetBlueprintGeneratedClass wi_tutorialwidget.wi_tutorialwidget_C
class UWi_tutorialwidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               Border_57;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ButtonProgress;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MainPanel;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          QuadContentWidgetAnchor;                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_39;                                      // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWi_quadcontentwidget_C*               Wi_quadcontentwidget;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ButtonIndicator_C*                Wid_ButtonIndicator;                               // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  TextToDisplay;                                     // 0x2A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCanvasPanelSlot*                      BoxSlot;                                           // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          TutorialNames;                                     // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSt_TutorialContentSlotSet>    TutorialsToDisplay;                                // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          Filtered_tutorial_names;                           // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        PressTime;                                         // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         USeButtonPrressed;                                 // 0x2F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1316[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PressDelay;                                        // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastPlayedPitch;                                   // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWi_tutorialwidget_C* GetDefaultObj();

	void PlayProgressSound(float A, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_FTrunc_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void InputTutorialContent(const struct FSt_TutorialContentSlotSet& ContentSlotDataSet, class UWi_quadcontentwidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	class FText GetText_0();
	void InputBackPressed();
	void InputAccept();
	void Show_Tutorial_Automatically();
	void InitiateTutorial(TArray<class FName>& Names);
	void InputAcceptPressed();
	void InputAcceptReleased();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UnlockInput();
	void Lock_Input();
	void ExecuteUbergraph_wi_tutorialwidget(int32 EntryPoint, float CallFunc_GetRealTimeSeconds_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FSt_TutorialTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue_2, const struct FSt_TutorialContentSlotSet& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Variable_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_ArraySubtractionFName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<class FName>& K2Node_CustomEvent_Names, int32 CallFunc_Array_AddUnique_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1);
};

}


