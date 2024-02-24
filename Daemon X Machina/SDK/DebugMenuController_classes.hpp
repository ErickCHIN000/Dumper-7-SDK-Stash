#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x430 - 0x3F0)
// BlueprintGeneratedClass DebugMenuController.DebugMenuController_C
class ADebugMenuController_C : public ATTLDebugMenuController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UDebugMenuListBox_C*>           DebugMenu;                                         // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnMenuOpened;                                      // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnMenuClosed;                                      // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ADebugMenuController_C* GetDefaultObj();

	void GetCurrentMenu(class UDebugMenuListBox_C** NewParam, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UDebugMenuListBox_C* CallFunc_Array_Get_Item);
	void CreateFolderByDataTable(class UDataTable* DataTable, const class FString& Name, struct FTTLDebugMenuFolder* NewFolder, const TArray<int32>& LinkTo, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_NamesToStrings_Strings, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FTTLDebugMenuFolder& K2Node_MakeStruct_TTLDebugMenuFolder, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Add_ReturnValue);
	void SelectPageDown(class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam, bool CallFunc_IsValid_ReturnValue);
	void SelectPageUp(class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam, bool CallFunc_IsValid_ReturnValue);
	void SelectDown(int32 RepeatCount, class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam, bool CallFunc_IsValid_ReturnValue);
	void SelectUp(int32 RepeatCount, class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam, bool CallFunc_IsValid_ReturnValue);
	void CloseMenu(class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void OpenMenu(const struct FTTLDebugMenuFolder& Folder, class UDebugMenuListBox_C** Menu, class UDebugMenuListBox_C* CallFunc_AddMenu_Menu);
	void AddMenuByDataTable(class UDataTable* DataTable, int32 Index, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class UDebugMenuListBox_C* CallFunc_AddMenu_Menu, TArray<class FString>& CallFunc_NamesToStrings_Strings);
	void NamesToStrings(TArray<class FName>& Names, TArray<class FString>* Strings, const TArray<class FString>& Values, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void AddMenu(const struct FTTLDebugMenuFolder& Folder, int32 Index, class UDebugMenuListBox_C** Menu, class UDebugMenuListBox_C* NewWidget, class UDebugMenuListBox_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UDebugMenuListBox_C* CallFunc_Array_Get_Item, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, int32 CallFunc_Subtract_IntInt_ReturnValue2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_IntFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void UserConstructionScript();
	void InpActEvt_Enter_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_BackSpace_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_Up_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_Up_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_Down_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_Down_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Left_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Right_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnMenuUpRepeat(int32 RepeatCount);
	void OnMenuDownRepeat(int32 RepeatCount);
	void ExecuteUbergraph_DebugMenuController(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key5, const struct FKey& K2Node_InputKeyEvent_Key4, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputKeyEvent_Key3, const struct FKey& K2Node_InputKeyEvent_Key2, const struct FKey& K2Node_InputKeyEvent_Key1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputKeyEvent_Key6, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FKey& K2Node_InputKeyEvent_Key7, const struct FKey& K2Node_InputKeyEvent_Key8, const struct FKey& K2Node_InputKeyEvent_Key9, const struct FKey& Temp_struct_Variable1, const struct FKey& K2Node_InputKeyEvent_Key10, const struct FKey& K2Node_InputKeyEvent_Key11, const struct FKey& Temp_struct_Variable2, const struct FKey& K2Node_InputKeyEvent_Key12, const struct FKey& Temp_struct_Variable3, class UDebugMenuListBox_C* CallFunc_OpenMenu_Menu, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam1, int32 CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue1, class UDebugMenuListBox_C* CallFunc_OpenMenu_Menu1, bool CallFunc_Greater_IntInt_ReturnValue, class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam2, class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam3, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam4, enum class EEndPlayReason K2Node_Event_EndPlayReason, int32 K2Node_Event_RepeatCount1, class UDebugMenuListBox_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, int32 K2Node_Event_RepeatCount, bool CallFunc_Less_IntInt_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key13, const struct FKey& K2Node_InputKeyEvent_Key14, const struct FKey& K2Node_InputKeyEvent_Key15);
	void OnMenuClosed__DelegateSignature(class UDebugMenuListBox_C* CurrentMenu);
	void OnMenuOpened__DelegateSignature(class UDebugMenuListBox_C* Menu);
};

}


