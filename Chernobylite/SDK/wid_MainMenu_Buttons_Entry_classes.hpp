#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14A (0x3AA - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C
class UWid_MainMenu_Buttons_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      FadeOutHighlight;                                  // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeOut;                                           // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_0;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DarkerHighlight;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Desc;                                              // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              HighlightSizeBox;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_ButtonIndicator_C*       Image1;                                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_ButtonIndicator_C*       Image2;                                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_ButtonIndicator_C*       Image3;                                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_ButtonIndicator_C*       Image4;                                            // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LighterHighlight;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               MainBorder;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_7;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class Enum_Buttons_PC                   PC_Image_1;                                        // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Buttons_X1                   X1_Image_1;                                        // 0x2D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Buttons_PS4                  PS4_Image_1;                                       // 0x2DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_297A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x2E0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         Active;                                            // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         NewVar_0;                                          // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DisableWhileInFight;                               // 0x2FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class Enum_Buttons_PC                   PC_Image_2;                                        // 0x2FB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Buttons_PC                   PC_Image_3;                                        // 0x2FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Buttons_PC                   PC_Image_4;                                        // 0x2FD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Buttons_X1                   X1_Image_2;                                        // 0x2FE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Buttons_X1                   X1_Image_3;                                        // 0x2FF(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Buttons_X1                   X1_Image_4;                                        // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Buttons_PS4                  PS4_Image_2;                                       // 0x301(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Buttons_PS4                  PS4_Image_3;                                       // 0x302(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Buttons_PS4                  PS4_Image_4;                                       // 0x303(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  PC_Action;                                         // 0x304(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  PC_Action_1;                                       // 0x30C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  PC_Action_2;                                       // 0x314(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  PC_Action_3;                                       // 0x31C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        NewVar_1;                                          // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasGamepad;                                        // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            BtnPressed;                                        // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWid_MainMenu_Buttons_C*               MainMenuButtons;                                   // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons2_C*              MainMenuButtons2;                                  // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons3_C*              MainMenuButtons3;                                  // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HightlightOverflow;                                // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AdjustSlotPaddingAutomatically;                    // 0x35C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IMainMenuButtonOwnerInterface_C> Owner;                                             // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DisableWhenPopupVisible;                           // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         ClickEffect;                                       // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ClickEffectEnabled;                                // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsActivated;                                       // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDisabled;                                        // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_MainMenu_Buttons_Entry_C* GetDefaultObj();

	void StopHighlightAnim(float NewLocalVar_1, bool PlayingForward, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue);
	void PlayFadeOut(enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool AnimHighlight, bool InfiniteHighlight, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void ForcePlayClickEffect(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue);
	void IsUsable(bool* IsUsable, TScriptInterface<class IMainMenuButtonOwnerInterface_C> K2Node_DynamicCast_AsMain_Menu_Button_Owner_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnyPopupVisible_Result, bool CallFunc_Not_PreBool_ReturnValue);
	void PlayClickEffect(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue);
	void UpdateText(class FText Text);
	void UpdateActivate(bool ButtonActivate);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void TriggeredByKeyboard();
	void UpdatePadding();
	void UpdateWidth();
	void Unhover();
	void DeseletForce();
	void ExecuteUbergraph_wid_MainMenu_Buttons_Entry(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class FText CallFunc_TextToUpper_ReturnValue, int32 Temp_int_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, TArray<class FName>& K2Node_MakeArray_Array, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FKey>& CallFunc_GetKeyForAction_Keys, bool CallFunc_Less_IntInt_ReturnValue, const struct FKey& CallFunc_Array_Get_Item_1, enum class Enum_Buttons_PC CallFunc_MapKeyNameToEnum_EnumValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_LastInputWasFromGamepad_Gamepad, enum class Enum_Buttons_PC K2Node_Select_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, int32 Temp_int_Variable_1, class FText CallFunc_TextToUpper_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsPressed_ReturnValue, bool CallFunc_IsHovered_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Add_FloatFloat_ReturnValue, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_IsUsable_IsUsable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void BtnPressed__DelegateSignature();
};

}


