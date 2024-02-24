#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCE0 (0xF10 - 0x230)
// WidgetBlueprintGeneratedClass WBP_AudioSettings.WBP_AudioSettings_C
class UWBP_AudioSettings_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_AmbientVolume;                              // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_AudioQuality;                               // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_BossSoundtrack;                             // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_DialogueVolume;                             // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_EffectsVolume;                              // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Left_AmbientVolume;                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Left_AudioQuality;                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Left_BossSoundtrack;                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Left_DialogueVolume;                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Left_EffectsVolume;                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Left_MasterVolume;                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Left_MusicVolume;                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Left_UIVolume;                              // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_MasterVolume;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_MusicVolume;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Right_AmbientVolume;                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Right_AudioQuality;                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Right_BossSoundtrack;                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Right_DialogueVolume;                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Right_EffectsVolume;                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Right_MasterVolume;                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Right_MusicVolume;                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Right_UIVolume;                             // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_UIVolume;                                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_Audio;                                   // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              SpinBox_AmbientVolume;                             // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              SpinBox_DialogueVolume;                            // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              SpinBox_EffectsVolume;                             // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              SpinBox_MasterVolume;                              // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              SpinBox_MusicVolume;                               // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              SpinBox_UIVolume;                                  // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_AmbientVolume;                                // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_AmbientVolume_Value;                          // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_AudioQuality;                                 // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_AudioQuality_Value;                           // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_BossSoundtrack;                               // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_BossSoundtrack_Value;                         // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_DialogueVolume;                               // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_DialogueVolume_Value;                         // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_EffectsVolume;                                // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_EffectsVolume_Value;                          // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_MasterVolume;                                 // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_MasterVolume_Value;                           // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_MusicVolume;                                  // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_MusicVolume_Value;                            // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_UIVolume;                                     // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_UIVolume_Value;                               // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UButton*>                       ButtonArray;                                       // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UTextBlock*>                    CurrentSettingsArray;                              // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UTextBlock*>                    OptionTitleArray;                                  // 0x3D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Index_Current;                                     // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A71[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           TextColor_Normal;                                  // 0x3E8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TextColor_Highlighted;                             // 0x410(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          ButtonStyle_Hovered;                               // 0x438(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          ButtonStyle_Normal;                                // 0x6B0(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameInfoInstance_C*                   GameInstanceRef;                                   // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpinBoxStyle                         SpinBoxStyle_Normal;                               // 0x930(0x2E8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSpinBoxStyle                         SpinBoxStyle_Hovered;                              // 0xC18(0x2E8)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Index_Temp;                                        // 0xF00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A87[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       Sound_BossSoundtrack;                              // 0xF08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_AudioSettings_C* GetDefaultObj();

	void SetBossSoundtrack(class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack, bool K2Node_SwitchEnum_CmpSuccess);
	void SetBossSoundtrack_Text(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetBossSoundtrackAvailability(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, bool CallFunc_IsMusicDLCAvailable_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetMusicDLCEnabled_ReturnValue);
	void GetTexts(TArray<class UTextBlock*>* Array, TArray<class UTextBlock*>& K2Node_MakeArray_Array);
	void ResetSpinBoxes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array, int32 CallFunc_Array_Length_ReturnValue, class USpinBox* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetSpinBoxes(TArray<class USpinBox*>* Array, TArray<class USpinBox*>& K2Node_MakeArray_Array);
	float ApplySpinBoxValue(float SpinBoxValue, float UseNavigation, bool UseSpinBox, bool Temp_bool_Variable, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Select_Default);
	bool CanChangeVolume(enum class Enum_AudioVolumes Volume, int32 Index, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	float AddVolume(float Target, float Delta, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void SetSliderTextValue(class UTextBlock* TextValue, float Value, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void SetSliderVolumeDetails(class USpinBox* SpinBox, class UTextBlock* TextValue, float Value, float CallFunc_MapRangeClamped_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void SetGameInstance(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance);
	enum class Enum_AudioVolumes GetCurrentSlider(int32 Temp_int_Variable, enum class Enum_AudioVolumes Temp_byte_Variable, enum class Enum_AudioVolumes Temp_byte_Variable_1, enum class Enum_AudioVolumes Temp_byte_Variable_2, enum class Enum_AudioVolumes Temp_byte_Variable_3, enum class Enum_AudioVolumes Temp_byte_Variable_4, enum class Enum_AudioVolumes Temp_byte_Variable_5, enum class Enum_AudioVolumes K2Node_Select_Default);
	void SetArrays(TArray<class UButton*>& K2Node_MakeArray_Array, TArray<class UTextBlock*>& K2Node_MakeArray_Array_1, TArray<class UTextBlock*>& K2Node_MakeArray_Array_2);
	void VolumeAdjust(enum class Enum_AudioVolumes Select, float Delta, bool UseSpinBox, bool Local_UseSpinBox, float Local_Delta, const struct FStruct_Volumes& Local_AudioVolumes, enum class Enum_AudioVolumes Local_Select, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool CallFunc_CanChangeVolume_ReturnValue, bool CallFunc_CanChangeVolume_ReturnValue_1, float CallFunc_AddVolume_ReturnValue, float CallFunc_ApplySpinBoxValue_ReturnValue, bool CallFunc_CanChangeVolume_ReturnValue_2, float CallFunc_AddVolume_ReturnValue_1, float CallFunc_ApplySpinBoxValue_ReturnValue_1, bool CallFunc_CanChangeVolume_ReturnValue_3, float CallFunc_AddVolume_ReturnValue_2, float CallFunc_ApplySpinBoxValue_ReturnValue_2, float K2Node_Select_Default, bool CallFunc_CanChangeVolume_ReturnValue_4, float CallFunc_AddVolume_ReturnValue_3, float CallFunc_ApplySpinBoxValue_ReturnValue_3, float K2Node_Select_Default_1, bool CallFunc_CanChangeVolume_ReturnValue_5, float CallFunc_AddVolume_ReturnValue_4, float CallFunc_ApplySpinBoxValue_ReturnValue_4, float K2Node_Select_Default_2, bool Temp_bool_Variable_4, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Select_Default_3, bool Temp_bool_Variable_5, float K2Node_Select_Default_4, float CallFunc_AddVolume_ReturnValue_5, float CallFunc_ApplySpinBoxValue_ReturnValue_5, float K2Node_Select_Default_5);
	void SetVolumes(int32 Local_Index, class USpinBox* Local_SpinBox, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UTextBlock*>& CallFunc_GetTexts_Array, class UTextBlock* CallFunc_Array_Get_Item, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array, class USpinBox* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable, float K2Node_Select_Default);
	void SetAudioQuality(int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAudioQualityLevel_ReturnValue, class FText K2Node_Select_Default);
	void UI_Sound_Navigate();
	void ResetButtons(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UTextBlock* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, class UTextBlock* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, class UButton* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2);
	struct FSlateColor GetTextColor(int32 Index, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FSlateColor& K2Node_Select_Default);
	void AudioQuality_Right(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAudioQualityLevel_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void AudioQuality_Left(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAudioQualityLevel_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	int32 GetIndex(int32 Delta, int32 SelectedIndex, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void Set_Navigation(bool Hovering, bool CustomIndex, int32 Index, int32 Delta, int32 Local_Delta, int32 Local_SelectedIndex, bool Local_CustomIndex, bool Local_Hovering, int32 Local_Index, class UButton* Local_Button, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array, int32 CallFunc_Subtract_IntInt_ReturnValue, class USpinBox* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array_1, class USpinBox* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateColor& CallFunc_GetTextColor_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, class UButton* CallFunc_Array_Get_Item_2, class UTextBlock* CallFunc_Array_Get_Item_3, class UTextBlock* CallFunc_Array_Get_Item_4, class UButton* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void LoadValues();
	void PreConstruct(bool IsDesignTime);
	void ChangeValueLeft();
	void ChangeValueRight();
	void Construct();
	void Navigate(bool CustomIndex, int32 Index, int32 Delta);
	void OnInitialized();
	void BndEvt__SpinBox_MasterVolume_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void BndEvt__SpinBox_EffectsVolume_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void BndEvt__SpinBox_MusicVolume_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void BndEvt__SpinBox_DialogueVolume_K2Node_ComponentBoundEvent_7_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void BndEvt__SpinBox_AmbientVolume_K2Node_ComponentBoundEvent_8_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void BndEvt__SpinBox_UIVolume_K2Node_ComponentBoundEvent_9_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnOpen_Event();
	void BndEvt__Button_Right_BossSoundtrack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Left_BossSoundtrack_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Right_DialogueVolume_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Left_DialogueVolume_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HandleRight_Audio_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HandleLeft_Audio_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Right_MusicVolume_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Left_MusicVolume_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Right_EffectsVolume_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Left_EffectsVolume_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_5_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_4_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Right_MasterVolume_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Left_MasterVolume_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_BossSoundtrack_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_DialogueVolume_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_UIVolume_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_AmbientVolume_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_MusicVolume_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_EffectsVolume_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_MasterVolume_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Audio_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_BossSoundtrack_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_DialogueVolume_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_UIVolume_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_AmbientVolume_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_MusicVolume_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_EffectsVolume_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_MasterVolume_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Audio_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_AudioSettings(int32 EntryPoint, float K2Node_ComponentBoundEvent_InValue_5, enum class Enum_AudioVolumes CallFunc_GetCurrentSlider_ReturnValue, float K2Node_ComponentBoundEvent_InValue_4, enum class Enum_AudioVolumes CallFunc_GetCurrentSlider_ReturnValue_1, float K2Node_ComponentBoundEvent_InValue_3, float K2Node_ComponentBoundEvent_InValue_2, float K2Node_ComponentBoundEvent_InValue_1, float K2Node_ComponentBoundEvent_InValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue_1, bool CallFunc_HasAnyUserFocus_ReturnValue_2, bool CallFunc_HasAnyUserFocus_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_1, bool CallFunc_HasAnyUserFocus_ReturnValue_4, bool K2Node_Event_IsDesignTime, bool CallFunc_HasAnyUserFocus_ReturnValue_5, bool K2Node_CustomEvent_CustomIndex, int32 K2Node_CustomEvent_Index, int32 K2Node_CustomEvent_Delta);
};

}


