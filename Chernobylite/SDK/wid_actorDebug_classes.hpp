#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2C8 - 0x268)
// WidgetBlueprintGeneratedClass wid_actorDebug.wid_actorDebug_C
class UWid_actorDebug_C : public UCGActorDebug
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_0;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_2;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_3;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_4;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBox;                                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                NewLineCTOR;                                       // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UWid_HorizontalBox_C*                  LastAddedHorizontalBox;                            // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_TextBlock_C*                      LastAddedTextBox;                                  // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWid_HorizontalBox_C*>          HorizontalBoxes;                                   // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWid_actorDebug_C* GetDefaultObj();

	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Refresh();
	void ExecuteUbergraph_wid_actorDebug(int32 EntryPoint, const struct FLinearColor& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, const struct FLinearColor& Temp_struct_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, const class FString& CallFunc_GetTotalDebugInformation_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, bool CallFunc_RemoveChild_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RemoveChild_ReturnValue_1, bool CallFunc_RemoveChild_ReturnValue_2, bool CallFunc_RemoveChild_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_HorizontalBox_C* CallFunc_Create_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWid_TextBlock_C* CallFunc_Create_ReturnValue_1, bool Temp_bool_Variable, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FLinearColor& K2Node_Select_Default, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Array_Index_Variable_4, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_GetTotalDebugInformation_ReturnValue_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue_2, const class FString& CallFunc_Array_Get_Item_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue_3, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UWid_HorizontalBox_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_TextBlock_C* K2Node_DynamicCast_AsWid_Text_Block, bool K2Node_DynamicCast_bSuccess, const struct FMargin& K2Node_MakeStruct_Margin, class UWid_HorizontalBox_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4);
};

}


