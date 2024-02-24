#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11E0 (0x1410 - 0x230)
// WidgetBlueprintGeneratedClass UI_StartupCalibration.UI_StartupCalibration_C
class UUI_StartupCalibration_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_FadeIn;                                       // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeOut;                                      // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_AutoLockOn;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Brightness;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_DamageNumbers;                              // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_EnemyHP_Opacity;                            // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_EnemyHP_Visibility;                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_HoldToDismiss;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Left_AutoLockOn;                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Left_DamageNumbers;                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Left_EnemyHP_Opacity;                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Left_EnemyHP_Visibility;                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Left_HoldToDismiss;                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Left_SubtitlesScale;                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Right_AutoLockOn;                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Right_DamageNumbers;                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Right_EnemyHP_Opacity;                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Right_EnemyHP_Visibility;                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Right_HoldToDismiss;                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Right_SubtitlesScale;                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_SubtitlesScale;                             // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CurrentSetting_Brightness;                         // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HandleLeft_Brightness;                             // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HandleRight_Brightness;                            // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Adjust;                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Confirm;                             // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Navigate;                            // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_Language;                                // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              SpinBox_Brightness;                                // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              SpinBox_SubtitlesScale;                            // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_AutoLockOn;                                   // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_AutoLockOn_English;                           // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_AutoLockOn_Value;                             // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_DamageNumbers;                                // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_DamageNumbers_Value;                          // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_EnemyHP_Opacity;                              // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_EnemyHP_Opacity_Value;                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_EnemyHP_Visibility;                           // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_EnemyHP_Visibility_Value;                     // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_HoldToDismiss;                                // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_HoldToDismiss_Value;                          // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_SubtitlesScale;                               // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_SubtitlesScale_Value;                         // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_AdjustSetting;                 // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Confirm;                       // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Navigate;                      // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Select;                        // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Brightness;                            // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_GameSettings;                          // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Language;                              // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_LanguageEntries;                       // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ConsumeInput;                                      // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A9B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                BP_MainMenu;                                       // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Index_Language;                                    // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_GameSettings;                                // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FButtonStyle                          ButtonStyle_Normal;                                // 0x3F0(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          ButtonStyle_Hovered;                               // 0x668(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameInfoInstance_C*                   GameInfoInstance;                                  // 0x8E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_CurrentOptionScreen;                         // 0x8E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LanguageSelectionDisabled;                         // 0x8EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_LanguageOption_C*                  UI_SelectedLanguage;                               // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FButtonStyle                          ButtonStyle_Normal_GameSettings;                   // 0x8F8(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          ButtonStyle_Hovered_GameSettings;                  // 0xB70(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSpinBoxStyle                         SpinBoxStyle_Normal;                               // 0xDE8(0x2E8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSpinBoxStyle                         SpinBoxStyle_Hovered;                              // 0x10D0(0x2E8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TextColorNormal_GameSettings;                      // 0x13B8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TextColorHighlighted_GameSettings;                 // 0x13E0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsConsole;                                         // 0x1408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseEngLockOnText;                                  // 0x1409(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AC8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index_GameSettings_Temp;                           // 0x140C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_StartupCalibration_C* GetDefaultObj();

	void SetHoldToDismiss(bool CallFunc_GetHoldToDismiss_Hold, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess);
	void Text_SetHoldToDismiss(bool Hold, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default);
	void GetHoldToDismiss(bool* Hold, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetHoldToDismiss_Hold);
	void SetDamageNumbers(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_GetDamageNumbers_Show, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
	void GetDamageNumbers(bool* Show, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDamageNumbers_Show);
	void Text_SetDamageNumbers(bool Show, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default);
	void SpinBox_Highlight(int32 Index, bool Highlight, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array, class USpinBox* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, const struct FSpinBoxStyle& K2Node_Select_Default);
	void TextAutoLockOnUpdate(class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void GetCurrentSettings(bool CallFunc_GetHoldToDismiss_Hold, bool CallFunc_GetDamageNumbers_Show);
	void ResetSpinBoxes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array, int32 CallFunc_Array_Length_ReturnValue, class USpinBox* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ButtonReset(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, TArray<class UTextBlock*>& CallFunc_GetTexts_GameSettings_Array, TArray<class UTextBlock*>& CallFunc_GetTextsValue_GameSettings_Array, class UTextBlock* CallFunc_Array_Get_Item, class UTextBlock* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_GetSettingsButtons_Array, class UButton* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2);
	void SetEnemyHPOpacity_Right(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_EnemyHPOpacity CallFunc_GetEnemyHPOpa_Opacity, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4);
	void SetEnemyHPOpacity_Left(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_EnemyHPOpacity CallFunc_GetEnemyHPOpa_Opacity, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4);
	void SetEnemyHPVisibility_Right(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4);
	void SetEnemyHPVisibility_Left(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4);
	void AdjustSubtitlesScale(float Delta, bool CustomValue, float Value, bool Temp_bool_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_FClamp_ReturnValue);
	void SetAutoLockOn(bool CallFunc_Not_PreBool_ReturnValue);
	void SetHPOpacityAvailability(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility, bool K2Node_SwitchEnum_CmpSuccess);
	void Text_EnemyHPOpacity(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_EnemyHPOpacity CallFunc_GetEnemyHPOpa_Opacity, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue);
	void Text_EnemyHPVisibility(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetSubtitlesScaleDetails(bool Custom, float Value, bool Temp_bool_Variable, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Text_SetAutoLockOn(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default);
	void GetIfLanguageSelectionIsDisabled(enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void SetGameInstanceRef(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance);
	void Sound_SelectedLanguage();
	void GetTextsValue_GameSettings(TArray<class UTextBlock*>* Array, TArray<class UTextBlock*>& K2Node_MakeArray_Array);
	struct FSlateColor GetTextColor(int32 Index, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FSlateColor& K2Node_Select_Default);
	void GetTexts_GameSettings(TArray<class UTextBlock*>* Array, bool Temp_bool_Variable, class UTextBlock* K2Node_Select_Default, TArray<class UTextBlock*>& K2Node_MakeArray_Array);
	void GetSpinBoxes(TArray<class USpinBox*>* Array, TArray<class USpinBox*>& K2Node_MakeArray_Array);
	int32 GetIndex_GameSettings(int32 SelectedIndex, int32 Delta, TArray<class UButton*>& CallFunc_GetSettingsButtons_Array, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void Nav_UpDown_GameSettings_Set(bool UseWidget, bool SkipIndexCheck, bool Hovering, bool CustomIndex, bool SkipSound, int32 Index, int32 Delta, class UButton* Button, bool Local_UseWidget, int32 Local_ArrayIndex, int32 Local_Index_Temp, bool Local_SkipIndexCheck, bool Local_SkipSound, bool Local_CustomIndex, int32 Local_Delta, bool Local_Hovering, class UButton* Local_Button, int32 Local_Index_Selected, int32 CallFunc_GetIndex_GameSettings_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_GetSettingsButtons_Array, int32 Temp_int_Array_Index_Variable, TArray<class UButton*>& CallFunc_GetSettingsButtons_Array_1, int32 CallFunc_Array_Find_ReturnValue, TArray<class UTextBlock*>& CallFunc_GetTextsValue_GameSettings_Array, const struct FSlateColor& CallFunc_GetTextColor_ReturnValue, class UTextBlock* CallFunc_Array_Get_Item, const struct FSlateColor& CallFunc_GetTextColor_ReturnValue_1, TArray<class UTextBlock*>& CallFunc_GetTexts_GameSettings_Array, int32 Temp_int_Loop_Counter_Variable, class UTextBlock* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_GetSettingsButtons_Array_2, class UButton* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, TArray<class UButton*>& CallFunc_GetSettingsButtons_Array_3, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, class UButton* CallFunc_Array_Get_Item_3);
	void UpdateLanguageOnClicked();
	void GetSettingsButtons(TArray<class UButton*>* Array, TArray<class UButton*>& K2Node_MakeArray_Array);
	void GetCurrentKeyboardMode(class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier);
	void ResetMousePosition(bool KeyboardMode, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void HideLanguageSelectionScreen();
	void DebugConfirm(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void DebugState(int32 Temp_int_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void Sound_Hover();
	void PlayFadeOut(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PlayFadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Sound_Confirm();
	int32 GetIndex_Language(int32 Delta, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void Nav_UpDown_Language_Set(bool SkipIndexCheck, bool Hovering, bool CustomIndex, bool SkipSound, int32 Index, int32 Delta, int32 Local_ArrayIndex, int32 Local_Index_Temp, bool Local_SkipIndexCheck, bool Local_SkipSound, bool Local_CustomIndex, int32 Local_Delta, bool Local_Hovering, class UWidget* Local_Widget, int32 Local_SelectedIndex, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_GetIndex_Language_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, int32 CallFunc_Subtract_IntInt_ReturnValue, class UUI_LanguageOption_C* K2Node_DynamicCast_AsUI_Language_Option, bool K2Node_DynamicCast_bSuccess, class UUI_LanguageOption_C* K2Node_DynamicCast_AsUI_Language_Option_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void NavUp_Listen(FDelegateProperty_ Callback);
	void NavDown_Listen(FDelegateProperty_ Callback);
	void CreateLanguageEntries(const TArray<class FText>& Local_Text, const TArray<enum class Enum_Language>& Local_Keys, TMap<enum class Enum_Language, class FText> Text_Languages, class UUI_LanguageOption_C* CallFunc_Create_ReturnValue, TMap<enum class Enum_Language, class FText> K2Node_MakeVariable_MakeVariableOutput, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item, enum class Enum_Language CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class FText>& CallFunc_Map_Values_Values, TArray<enum class Enum_Language>& CallFunc_Map_Keys_Keys, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void GetMainMenuPC(class AMainMenuPC_C** AsMain_Menu_PC, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AMainMenuPC_C* K2Node_DynamicCast_AsMain_Menu_PC, bool K2Node_DynamicCast_bSuccess);
	void Sound_Navigate();
	void Brightness_SpinBox(float Value, bool CallFunc_HasAnyUserFocus_ReturnValue, class AMainMenuPC_C* CallFunc_GetMainMenuPC_AsMain_Menu_PC);
	void Brightness_Right(class AMainMenuPC_C* CallFunc_GetMainMenuPC_AsMain_Menu_PC, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetBrightnessRange_ReturnValue);
	void Brightness_SetText(float Value, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void Brightness_Get();
	void Brightness_Left(class AMainMenuPC_C* CallFunc_GetMainMenuPC_AsMain_Menu_PC, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetBrightnessRange_ReturnValue);
	void Brightness_Set(float Brightness);
	void NavConfirm_Listen(FDelegateProperty_ Callback);
	void NavRight_Listen(FDelegateProperty_ Callback);
	void NavLeft_Listen(FDelegateProperty_ Callback);
	void OnOpen();
	void NavLeft_Bind();
	void NavLeft_Set();
	void NavRight_Bind();
	void NavRight_Set();
	void NavConfirm_Bind();
	void NavConfirm_Set();
	void OnEnabled_Language();
	void OnLanguageConfirm_Mid();
	void BndEvt__HandleLeft_Brightness_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HandleRight_Brightness_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SpinBox_Brightness_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void BndEvt__UI_ControllerButton_Select_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void NavUp_Bind();
	void NavUp_Set();
	void NavDown_Bind();
	void NavDown_Set();
	void OnInitialized();
	void OnLanguageButtonHovered(int32 Index);
	void OnLanguageConfirm_End();
	void OnLanguageConfirm_Start();
	void OnGameplayConfirmed_Start();
	void OnGameplayConfirmed_End();
	void OnLanguageButtonClicked();
	void OnKeyboardModeChanged_Set(bool KeyboardMode);
	void OnKeyboardModeChanged_Bind();
	void OnBrightnessConfirm_Mid();
	void OnBrightnessConfirm_End();
	void OnBrightnessConfirm_Start();
	void BndEvt__Button_Right_AutoLockOn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Left_AutoLockOn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_AutoLockOn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_AutoLockOn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_SubtitlesScale_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_SubtitlesScale_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Left_SubtitlesScale_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Right_SubtitlesScale_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_EnemyHP_Visibility_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_EnemyHP_Visibility_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Left_EnemyHP_Visibility_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Right_EnemyHP_Visibility_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_EnemyHP_Opacity_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_EnemyHP_Opacity_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Left_EnemyHP_Opacity_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Right_EnemyHP_Opacity_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_DamageNumbers_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_DamageNumbers_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Left_DamageNumbers_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Right_DamageNumbers_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_HoldToDismiss_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_HoldToDismiss_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Left_HoldToDismiss_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Right_HoldToDismiss_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_StartupCalibration(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IMainMenuInterface_C> K2Node_DynamicCast_AsMain_Menu_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess_2, bool K2Node_SwitchInteger_CmpSuccess_3, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_ComponentBoundEvent_InValue, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_Event_IsDesignTime, bool Temp_bool_Has_Been_Initd_Variable_1, int32 K2Node_CustomEvent_Index, bool K2Node_SwitchInteger_CmpSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool Temp_bool_IsClosed_Variable_1, bool K2Node_SwitchInteger_CmpSuccess_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool K2Node_CustomEvent_KeyboardMode, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, bool K2Node_SwitchInteger_CmpSuccess_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool Temp_bool_IsClosed_Variable_2, bool K2Node_SwitchInteger_CmpSuccess_7, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool Temp_bool_Has_Been_Initd_Variable_2);
};

}


