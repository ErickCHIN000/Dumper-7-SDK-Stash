#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x2F8 - 0x260)
// WidgetBlueprintGeneratedClass wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C
class UWid_RoomSkillTreeConfirm_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Background;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ContentBox;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ContentSizebox;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_87;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_184;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Msg;                                               // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         No;                                                // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_3;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_0;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         Yes;                                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                            Dictionary;                                        // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  UpdateKey;                                         // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DeleteKey;                                         // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BuyRoomConfirm;                                    // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnYesClicked;                                      // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCancelClicked;                                   // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWid_RoomSkillTreeConfirm_C* GetDefaultObj();

	void GetGamepadIcon(class FName Action, enum class Enum_Buttons_PS4 InitialPS4, enum class Enum_Buttons_X1 InitialX, enum class Enum_Buttons_PS4* PS4, enum class Enum_Buttons_X1* XBox, bool Temp_bool_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, enum class Enum_Buttons_X1 Temp_byte_Variable, bool Temp_bool_Variable_1, enum class Enum_Buttons_X1 K2Node_Select_Default, enum class Enum_Buttons_PS4 Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class Enum_Buttons_PS4 K2Node_Select_Default_1, enum class Enum_Buttons_X1 Temp_byte_Variable_2, bool Temp_bool_Variable_3, enum class Enum_Buttons_X1 K2Node_Select_Default_2, enum class Enum_Buttons_PS4 Temp_byte_Variable_3, enum class Enum_Buttons_PS4 K2Node_Select_Default_3);
	void SetTextMessage(class FText& InText, class FText CallFunc_KeyToIcon_OutText);
	void SetTimeSinceLastSave(class FName SecondsString, class FName MinutesString, float TimeSinceSave, bool Temp_bool_Variable, int32 CallFunc_GetAccurateRealTime_Seconds, float CallFunc_GetAccurateRealTime_PartialSeconds, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_FFloor_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, class FName K2Node_Select_Default_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FSt_Dictionary& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class FText CallFunc_ReplaceTimeSinceLastSave_ReturnValue);
	class FText ReplaceTimeSinceLastSave(class FText Text, int32 Time, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateSize(const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
	void GetButtonName(class FText Name, class FText* Text, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_2, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_3);
	void UnhideButton();
	void CustomReplaceText(class FText Text, class FText* ParsedText, int32 CallFunc_GetAccurateRealTime_Seconds, float CallFunc_GetAccurateRealTime_PartialSeconds, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Hide_button();
	void SetButtons(class FText _Yes__Name, class FName _Yes_PC_Action, enum class Enum_Buttons_PC _Yes__PC, enum class Enum_Buttons_X1 _Yes__X1, enum class Enum_Buttons_PS4 _Yes__PS4, enum class Enum_Buttons_PC _Cancel__PC1, enum class Enum_Buttons_X1 _Cancel__X1, enum class Enum_Buttons_PS4 _Cancel__PS4, class FText _Cancel__Name, class FName _Cancel_PC_Action, enum class Enum_Buttons_PS4 CallFunc_GetGamepadIcon_PS4, enum class Enum_Buttons_X1 CallFunc_GetGamepadIcon_XBox, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetButtonName_Text, class FText CallFunc_TextToUpper_ReturnValue, enum class Enum_Buttons_PS4 CallFunc_GetGamepadIcon_PS4_1, enum class Enum_Buttons_X1 CallFunc_GetGamepadIcon_XBox_1, class FText CallFunc_GetButtonName_Text_1, class FText CallFunc_TextToUpper_ReturnValue_1);
	void SetMessage(class FName KeyName, float TimeSinceSave, bool K2Node_SwitchName_CmpSuccess, const struct FSt_Dictionary& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_CustomReplaceText_ParsedText);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Yes_K2Node_ComponentBoundEvent_0_BtnPressed__DelegateSignature();
	void BndEvt__No_K2Node_ComponentBoundEvent_1_BtnPressed__DelegateSignature();
	void ExecuteUbergraph_wid_RoomSkillTreeConfirm(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
	void OnCancelClicked__DelegateSignature();
	void OnYesClicked__DelegateSignature();
};

}


