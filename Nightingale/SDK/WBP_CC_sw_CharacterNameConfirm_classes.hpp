#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x558 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C
class UWBP_CC_sw_CharacterNameConfirm_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CC_Name_FadeIN;                                    // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_1;                                          // 0x4C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_NameCancel;                                    // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_NameConfirm;                                   // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_RandomName;                                    // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       TextBlur;                                          // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_ERROR;                                         // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNWXEditableText*                      Txt_Name_Private;                                  // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            NameConfirmed;                                     // 0x500(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FDataTableRowHandle>           NameRowHandles;                                    // 0x510(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        PlayerNameCharacterMax;                            // 0x520(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasConfirmed;                                      // 0x524(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5212[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            JoinGameAsNewProfile;                              // 0x528(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGuid                                 TelemetrySessionID;                                // 0x538(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int64                                        TimeStarted;                                       // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ACameraActor*                          Camera_Scene;                                      // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_sw_CharacterNameConfirm_C* GetDefaultObj();

	void OnUILoginStateChangeHandleCreateProfileFailure(enum class E_UILoginState UILoginState, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void DisplayNameValidationMessageAndResetConfirmationUI(TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Send_Telemetry_End(bool bCancelled, bool CallFunc_IsValid_Guid_ReturnValue, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue, const struct FDateTime& CallFunc_UtcNow_ReturnValue, int64 CallFunc_DateTimeToUnixTimestamp_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget();
	void GetPrivateName(class FString* PrivateName, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	class UWidget* Get_dropdown_ToolTipWidget(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void RandomizeTitle();
	void NameConfirm(const class FString& SelectedItem, enum class ESelectInfo SelectionType, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	class FString GetPublicSelectedName(class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	class UWidget* GetTooltipWidget(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetupDropDownName(const TArray<class FString>& Names);
	class UWidget* Get_BU_RandomName_ToolTipWidget_0(class FText RandomText, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void BndEvt__WBP_CC_sw_CharacterNameConfirm_txt_Name_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void OnValidateProfileName(bool bNameIsValid, TArray<class FString>& ValidationErrors);
	void Construct();
	void BndEvt__WBP_CC_sw_CharacterNameConfirm_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CC_sw_CharacterNameConfirm_CBU_NameCancel_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CC_sw_CharacterNameConfirm_CBU_NameConfirm_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnActivated();
	void Destruct();
	void OnFadeOutFinished();
	void ExecuteUbergraph_WBP_CC_sw_CharacterNameConfirm(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles_1, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, const struct FS_NPCVictorianName& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetPublicSelectedName_ReturnValue, class FText CallFunc_GetText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool K2Node_CustomEvent_bNameIsValid, TArray<class FString>& K2Node_CustomEvent_ValidationErrors, const class FString& CallFunc_GetPrivateName_PrivateName, const struct FCreateProfile& K2Node_MakeStruct_CreateProfile, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void JoinGameAsNewProfile__DelegateSignature(const struct FCreateProfile& Profile);
	void NameConfirmed__DelegateSignature(bool Confirmed);
};

}


