#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x238 (0x468 - 0x230)
// WidgetBlueprintGeneratedClass UI_ControllerButton.UI_ControllerButton_C
class UUI_ControllerButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HB_Controller;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_DynamicIcon_2;                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Icon_Gamepad;                                // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Icon_Gamepad_2;                              // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Icon_KBM_1;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Icon_NonDynamic;                             // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Icon_Dynamic_1;                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Icon_Dynamic_2;                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Icon_Dynamic_KBM_1;                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RTB_PromptText_Left;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RTB_PromptText_Right;                              // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Key_KBM_1;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EControllerButton                 ButtonType;                                        // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EHintKBBehaviour                  KBBehaviour;                                       // 0x299(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class ESlateVisibility                  BeforeTextVisibility;                              // 0x29A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PrintDebug;                                        // 0x29B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         EditorShowKBVersion;                               // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         KeyboardMode;                                      // 0x29D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A53[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayText_Right;                                 // 0x2A0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  DisplayText_Left;                                  // 0x2B8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                           TextColor_Color;                                   // 0x2E0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TextColor_Normal;                                  // 0x308(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TextColor_Pressed;                                 // 0x330(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                            Image_KeyboardMouse;                               // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsDynamicPrompt;                                  // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bKeyboardHasOwnActionName;                         // 0x361(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2A6C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputAction>                  AllActions;                                        // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                ActionName;                                        // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                ActionName_2;                                      // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                ActionName_Keyboard;                               // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FKey                                  Key_Gamepad;                                       // 0x3A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FKey                                  Key_KBM;                                           // 0x3C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                Key_Gamepad_String;                                // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                Key_KBM_String;                                    // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FKey                                  Key_Gamepad_2;                                     // 0x3F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FKey                                  Key_KBM_2;                                         // 0x410(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                Key_Gamepad_String_2;                              // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                Key_KBM_String_2;                                  // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FMargin                               PaddingText_Left;                                  // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                               PaddingText_Right;                                 // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_ControllerButton_C* GetDefaultObj();

	void SetTextCustomPadding(class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1);
	void SetGamepadPrompt_2(class UTexture2D* CallFunc_GetKeyAsIcon_Icon, bool CallFunc_GetKeyAsIcon_Found);
	void SetDynamicPrompt(const class FString& Local_KeyAsString, const struct FKey& Local_Key, const class FString& Local_ActionName, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue_1, bool CallFunc_Key_IsGamepadKey_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, TArray<struct FInputAction>& CallFunc_GetAllRebindableInputActions_Actions, const struct FInputAction& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_3);
	void SetGamepadPrompt(class UTexture2D* CallFunc_GetKeyAsIcon_Icon, bool CallFunc_GetKeyAsIcon_Found);
	void SetKBMPrompt(bool CallFunc_Not_PreBool_ReturnValue, class UTexture2D* CallFunc_GetKeyAsIcon_Icon, bool CallFunc_GetKeyAsIcon_Found, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UTexture2D* CallFunc_GetKeyAsIcon_Icon_1, bool CallFunc_GetKeyAsIcon_Found_1);
	void Debug(class UObject* Object, bool InBool, bool InBool2, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4);
	void SetText(class URichTextBlock* RichText, class FText& InText, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void GetIcon(class UTexture2D** Texture, class UTexture2D* CallFunc_GetButtonIcon_Texture);
	void UpdateImg(bool bKeyboardVersion);
	void RefreshInputType();
	void OnKeyboardModeChanged_Set(bool KeyboardMode);
	void ManualPreConstruct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void UpdateHintText(class FText DisplayTextRight, class FText DisplayTextLeft);
	void OnKeyboardModeChanged_Bind();
	void OnChangeForcePS4Icons_Bind();
	void OnChangeForcePS4Icons_Set();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void DynamicPrompt();
	void DynamicManualPreConstruct();
	void ExecuteUbergraph_UI_ControllerButton(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_CustomEvent_bKeyboardVersion, bool K2Node_CustomEvent_KeyboardMode, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, class FText K2Node_CustomEvent_DisplayTextRight, class FText K2Node_CustomEvent_DisplayTextLeft, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, class UTexture2D* CallFunc_GetIcon_Texture, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool K2Node_Event_IsDesignTime, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInKeyboardMode_InKeyboardMode, class UTexture2D* CallFunc_GetIcon_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
};

}


