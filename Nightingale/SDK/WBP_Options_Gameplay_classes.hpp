#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x5B8 - 0x510)
// WidgetBlueprintGeneratedClass WBP_Options_Gameplay.WBP_Options_Gameplay_C
class UWBP_Options_Gameplay_C : public UNWXOptionTabWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_OptionSlider_C*                   DamageNumberSize;                                  // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSlider_C*                   DamageNumberSpeed;                                 // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Options_Dropdown_C*               Dropdown_ChatMode;                                 // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Options_Dropdown_C*               Dropdown_PartyInvitesMode;                         // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Options_Dropdown_C*               Dropdown_ShareMyPrivateName;                       // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Options_Dropdown_C*               Dropdown_ShowOthersPrivateNames;                   // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSlider_C*                   GamepadDeadzone;                                   // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionBool_C*                     GamepadInvertX;                                    // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionBool_C*                     GamepadInvertY;                                    // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSlider_C*                   GamepadSensitivity;                                // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionBool_C*                     MouseInvertX;                                      // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionBool_C*                     MouseInvertY;                                      // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSlider_C*                   MouseSensitivity;                                  // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionBool_C*                     Option_AutoHideHUD;                                // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionBool_C*                     ShowDamageNumbers;                                 // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionBool_C*                     ShowTutorials;                                     // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionBool_C*                     StreamerModeEnabled;                               // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWidget*>                       NavigationWidgets;                                 // 0x5A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_Options_Gameplay_C* GetDefaultObj();

	class UWidget* DoCustomNavigation(enum class EUINavigation Navigation, class UWidget* FocusedWidget, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue, class UNWXUserWidget* K2Node_DynamicCast_AsNWXUser_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsEnabled_ReturnValue, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UWidget* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue_1, class UNWXUserWidget* K2Node_DynamicCast_AsNWXUser_Widget_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsEnabled_ReturnValue_1, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void SetupNavigationWidgets(TArray<class UWidget*>& K2Node_MakeArray_Array);
	void OnValueChanged_StreamerModeEnabled(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue);
	void OnValueChanged_DamageNumberSize(float NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue);
	void OnValueChanged_DamageNumberSpeed(float NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue);
	void OnValueChanged_ShowDamageFloaties(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue);
	void InitializeWidget_StreamerModeEnabled(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetStreamerModeEnabled_ReturnValue);
	void InitializeWidget_DamageNumbers(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, float CallFunc_GetDamageFloatySize_ReturnValue, float CallFunc_GetDamageFloatySpeed_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_2, bool CallFunc_GetDamageFloatyEnabled_ReturnValue);
	void OnValueChanged_ShowTutorials(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue);
	void InitializeWidget_ShowTutorials(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetShowTutorials_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget();
	void OnValueChanged_ChatMode(int32 NewVal, const class FString& Option, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue);
	void GetTextArray_ChatModes(TArray<class FText>* TextValues, TArray<class FText>& K2Node_MakeArray_Array);
	void InitializeWidget_ChatMode(TArray<class FText>& CallFunc_GetTextArray_ChatModes_TextValues, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, enum class EChatMode CallFunc_GetChatMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void GetTextArrayOfPrivateNameOptions(TArray<class FText>* TextFields, const TArray<class FText>& ShareOptions, TArray<class FText>& K2Node_MakeArray_Array);
	void OnValueChanged_OthersPrivateName(int32 NewVal, const class FString& Option, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue);
	void OnValueChanged_MyPrivateName(int32 NewVal, const class FString& Option, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue);
	void InitializeWidget_SeeOthersPrivateNames(TArray<class FText>& CallFunc_GetTextArrayOfPrivateNameOptions_TextFields, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, enum class EPrivateNamesMode CallFunc_GetMyPrivateNameMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void InitializeWidget_ShareMyPrivateName(TArray<class FText>& CallFunc_GetTextArrayOfPrivateNameOptions_TextFields, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, enum class EPrivateNamesMode CallFunc_GetMyPrivateNameMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void InitializeWidgets(enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result, bool K2Node_SwitchEnum_CmpSuccess);
	void InitializeWidget_PartyInvitesMode(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, enum class EPartyInvitesMode CallFunc_GetPartyInvitesMode_ReturnValue, TArray<class FText>& CallFunc_GetTextArray_PartyInvites_TextValues, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void InitializeWidget_GamepadInvertY(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetGamepadInvertY_ReturnValue);
	void InitializeWidget_GamepadInvertX(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetGamepadInvertX_ReturnValue);
	void InitializeWidget_GamepadDeadzone(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, float CallFunc_GetGamepadDeadzone_ReturnValue);
	void InitializeWidget_GamepadSensitivity(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, float CallFunc_GetGamepadSensitivity_ReturnValue);
	void InitializeWidget_MouseInvertY(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetMouseInvertY_ReturnValue);
	void InitializeWidget_MouseInvertX(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetMouseInvertX_ReturnValue);
	void InitializeWidget_MouseSensitivity(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, float CallFunc_GetMouseSensitivity_ReturnValue);
	void InitializeWidget_AutoHideHUD(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetAutoHideHUD_ReturnValue);
	void OnValueChanged_PartyInvitesMode(int32 NewValue, const class FString& Option, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue);
	void OnValueChanged_GamepadInvertY(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue);
	void OnValueChanged_GamepadInvertX(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue);
	void OnValueChanged_GamepadDeadzone(float NewValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue);
	void OnValueChanged_GamepadSensitivity(float NewValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue);
	void OnValueChanged_MouseInvertY(bool NewValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue);
	void OnValueChanged_MouseInvertX(bool NewValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue);
	void OnValueChanged_MouseSensitivity(float NewValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue);
	void OnValueChanged_AutoHideHUD(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue);
	void GetTextArray_PartyInvites(TArray<class FText>* TextValues, TArray<class FText>& K2Node_MakeArray_Array);
	class UWidget* GetDefaultFocusWidget(class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_Options_Gameplay(int32 EntryPoint);
};

}


