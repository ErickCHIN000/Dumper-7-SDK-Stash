#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E8 (0x418 - 0x230)
// WidgetBlueprintGeneratedClass UI_Options_Controls.UI_Options_Controls_C
class UUI_Options_Controls_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_Controls_Header;                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_ControllerScheme;                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_Controls;                                // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Controller;                                   // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_ControllerScheme;                             // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerScheme_C*                UI_ControllerScheme;                               // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Controls;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Index_Current;                                     // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Max;                                         // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class FText>               InputNames;                                        // 0x278(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          InputList;                                         // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UUI_InputDetector_C*                   UI_InputDetector;                                  // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_KeyBind_New_C*>            KeyBindArray;                                      // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TMap<class FString, struct FInputAction>     ActionsKBM;                                        // 0x2F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, struct FInputAction>     ActionsController;                                 // 0x340(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EPlatform                         Platform;                                          // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsConsole;                                         // 0x391(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FD3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_C*                        UI_MainMenu;                                       // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputAction>                  InputActionsKBM_Default;                           // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FInputAction>                  InputActionsController_Default;                    // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FInputAction>                  AllInputActions;                                   // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         ForceIsConsole;                                    // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FE9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputAxis>                    AxisKBM;                                           // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FInputAction>                  Actions;                                           // 0x3E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FInputAxis>                    AllInputAxis;                                      // 0x3F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FInputAxis>                    InputAxisKBM_Default;                              // 0x408(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Options_Controls_C* GetDefaultObj();

	void ResetInputActions(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, TArray<struct FInputAction>& CallFunc_GetAllRebindableInputActions_Actions, const struct FInputAction& CallFunc_Array_Get_Item, bool CallFunc_RemoveActionBinding_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FInputAction& CallFunc_Array_Get_Item_1, const struct FInputAction& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2);
	void ResetInputAxis(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInputAxis& CallFunc_Array_Get_Item, const struct FInputAxis& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FInputAxis>& CallFunc_GetInputAxis_Array);
	class FText Get_Text_ControllerScheme(enum class EPlatform Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText K2Node_Select_Default);
	void StopListen_ResetToDefault_KeyBindings();
	void ResetControllerButtons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_KeyBind_New_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void SetVisibilityBasedOnPlatform(bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	class FText Get_Text_Controller(enum class EPlatform Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText K2Node_Select_Default);
	void GetPlatform(bool CallFunc_IsConsole_ReturnValue);
	void ConfirmSound();
	void ClickSound();
	void SetWaitingForKey(bool IsWaitingForKey_, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance);
	void Get_Current_Key_Bind(class UWBP_KeyBind_New_C** AsWBP_Key_Bind_New, class UWBP_KeyBind_New_C* CallFunc_Array_Get_Item);
	void CreateInputDetector(const class FString& Rebind_KeyType, const class FString& Rebind_InputType, class UWBP_KeyBind_New_C* UI_KeyBind, class UUI_InputDetector_C* CallFunc_Create_ReturnValue, TArray<struct FInputAction>& CallFunc_GetAllRebindableInputActions_Actions, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
	void ChangeControllerKey(class UWBP_KeyBind_New_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	int32 GetIndex(int32 Index, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void Nav_Set_UpDown(bool IsHovering, bool UseWidget, class UWBP_KeyBind_New_C* Widget, bool CustomIndex, int32 Index, int32 Delta, bool Local_Hovering, int32 Local_Delta, int32 Local_SelectedIndex, bool Local_CustomIndex, class UWBP_KeyBind_New_C* Local_SelectedWidget, bool Local_UseWidget, int32 Local_Index, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetIndex_ReturnValue, class UWBP_KeyBind_New_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void SetIndexMax(int32 CallFunc_Array_LastIndex_ReturnValue);
	void CreateControls(class FName Local_InputName, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class FText Temp_text_Variable_3, int32 Temp_int_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Select_Default, bool CallFunc_GetPhotoModeEnabled_Enabled, class FName Temp_name_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FInputAxis& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWBP_KeyBind_New_C* CallFunc_Create_ReturnValue, class UWBP_KeyBind_New_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FInputAxis>& CallFunc_GetInputAxis_Array, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TMap<class FString, struct FInputAction> CallFunc_GetInputActions_InputActionsKBM, TMap<class FString, struct FInputAction> CallFunc_GetInputActions_InputActionController, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_Array_Add_ReturnValue, class FName Temp_name_Variable_3, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FInputAction& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FInputAction& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, int32 Temp_int_Variable_1, class FName K2Node_Select_Default_1);
	void PreConstruct(bool IsDesignTime);
	void Navigate_UpDown(bool CustomIndex, int32 Index, int32 Delta);
	void OnControllerButtonPressed();
	void OnControllerKeyChanged();
	void OnKeyboardButtonClicked(const class FString& InputType, class UWBP_KeyBind_New_C* KeyBind);
	void OnKBMKeyChanged();
	void OnOpen();
	void InterruptKeyChange();
	void OnControllerButtonClicked(class UWBP_KeyBind_New_C* KeyBind);
	void OnControllerButtonHovered(class UWBP_KeyBind_New_C* KeyBind);
	void OnControllerButtonUnhovered();
	void OnResetToDefault_Set();
	void OnResetToDefault_Bind();
	void ExecuteUbergraph_UI_Options_Controls(int32 EntryPoint, bool K2Node_CustomEvent_CustomIndex, int32 K2Node_CustomEvent_Index, int32 K2Node_CustomEvent_Delta, class UWBP_KeyBind_New_C* CallFunc_Get_Current_Key_Bind_AsWBP_Key_Bind_New, const class FString& K2Node_CustomEvent_InputType, class UWBP_KeyBind_New_C* K2Node_CustomEvent_KeyBind_2, bool K2Node_Event_IsDesignTime, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class UWBP_KeyBind_New_C* K2Node_CustomEvent_KeyBind_1, class UWBP_KeyBind_New_C* K2Node_CustomEvent_KeyBind, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsGamepadAttached_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_2, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_3, bool K2Node_DynamicCast_bSuccess_3);
};

}


