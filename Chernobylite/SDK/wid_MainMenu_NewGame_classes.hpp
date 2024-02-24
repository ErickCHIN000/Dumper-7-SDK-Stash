#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0x3A8 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_NewGame.wid_MainMenu_NewGame_C
class UWid_MainMenu_NewGame_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_AvatarSubtitleEntry_C*            AvatarSubtitleMode;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       BaseManagementDifficulty;                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_C*               Buttons;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       CharacterPortraits;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               CombatDescription;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       CombatDifficulty;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CombatTextDefault;                                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CombatTextGateOfMadness;                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       DaysToPlay;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               DaysToPlayDescription;                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_RoomSkillTreeConfirm_C*           GamePopup;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               IntroductionDescription;                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Label;                                             // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ManagementDescription;                             // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ManagementTextDefault;                             // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ManagementTextGateOfMadness;                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Subtitle_C*                       NormalSubtitleMode;                                // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               PortraitsDescripon;                                // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SelectableManager_C*              SelectableManager;                                 // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       SkipIntoduction;                                   // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Subtitles;                                         // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SurvivalDescription;                               // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       SurvivalDifficulty;                                // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SurvivalTextDefault;                               // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SurvivalTextGateOfMadness;                         // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_02_C*                    MainMenu;                                          // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            NewGame;                                           // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UBorder*>                       DescriptionsArray;                                 // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         IsNewGamePending;                                  // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ENewGameMenuPopupType             PopupType;                                         // 0x361(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27D5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          GateOfMadnessDescription_Any;                      // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                          GateOfMadnessDescription_Survival;                 // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                          GateOfMadnessDescription_Combat;                   // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                          GateOfMadnessDescription_Management;               // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWid_MainMenu_NewGame_C* GetDefaultObj();

	void IsAnyPopupVisible(bool* Result, bool CallFunc_IsPopupVisible_ReturnValue);
	bool IsAnyGateOfMadnessSelected(bool CallFunc_IsGateOfMadnessDifficulty_ReturnValue, bool CallFunc_IsGateOfMadnessDifficulty_ReturnValue_1, bool CallFunc_IsGateOfMadnessDifficulty_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void MakeTextFromArrays(TArray<class FText>& All, TArray<class FText>& Difficulty, class FText* Text, const TArray<class FText>& Texts, class FText LocalText, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
	void SetupGateOfMadnessDescription(enum class EDifficultyType Difficulty, enum class EDifficultyType Temp_byte_Variable, enum class EDifficultyType Temp_byte_Variable_1, class UTextBlock* K2Node_Select_Default, TArray<class FText>& K2Node_Select_Default_1, class FText CallFunc_MakeTextFromArrays_Text);
	bool IsGateOfMadnessDifficulty(class UWid_MainMenu_graphics_Option_C* Target, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_GetIsGateOfMadnessModeAvailable_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void StartGameOrShowSavePopup(bool Temp_bool_Variable, bool CallFunc_IsAnyGateOfMadnessSelected_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName K2Node_Select_Default, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void SetDescriptionVisibilityForGateOfMadness(class UTextBlock* NormalText, class UTextBlock* GateOfMadnessText, bool IsGateOfMadness, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void PrepeareGateOfMadnessDifficulty(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_GetIsGateOfMadnessModeAvailable_ReturnValue);
	void SaveAllSelectedDifficulties(int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2);
	void On_Character_Portraits_Changed(enum class ESubtitlesMode CallFunc_GetCharacterPortraitsValue_SubtitleMode, bool K2Node_SwitchEnum_CmpSuccess);
	void GetCharacterPortraitsValue(enum class ESubtitlesMode* SubtitleMode, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool K2Node_SwitchInteger_CmpSuccess);
	void PopupDeclined();
	void PopupAccepted(bool K2Node_SwitchEnum_CmpSuccess);
	void BackPressed();
	void StartGamePressed(bool CallFunc_IsAnyGateOfMadnessSelected_ReturnValue);
	void Close_New_Game_Menu();
	bool IsPopupVisible(bool CallFunc_IsVisible_ReturnValue);
	void HidePopup(bool EnableInput);
	void ShowPopup(enum class ENewGameMenuPopupType Type, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void Capitalize_Label(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void Start_New_Game(int32 Dto, bool SkipIntro, uint8 BaseVal, uint8 CombatVal, uint8 SurvValue, uint8 NewLocalVar_2, uint8 NewLocalVar_1, uint8 NewLocalVar_0, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_IsAnyGateOfMadnessSelected_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, bool CallFunc_IsGateOfMadnessDifficulty_ReturnValue, bool CallFunc_IsGateOfMadnessDifficulty_ReturnValue_1, bool CallFunc_IsGateOfMadnessDifficulty_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, enum class ESubtitlesMode CallFunc_GetCharacterPortraitsValue_SubtitleMode, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_6);
	void Get_Selected_Days_To_Play(int32* Output, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, int32 CallFunc_Array_Get_Item);
	void Save_Difficulty(int32 Value, enum class EDifficultyType Type, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Setup_Days_To_Play_Values(const TArray<class FText>& DaysToPlayValues, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Load_Values(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EDifficultyValue CallFunc_GetDifficultyValue_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class EDifficultyValue CallFunc_GetDifficultyValue_ReturnValue_1, enum class EDifficultyValue CallFunc_GetDifficultyValue_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2);
	void On_Skip_Introduction_Changed(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_Conv_IntToBool_ReturnValue);
	void On_Combat_Difficulty_Changed(bool CallFunc_IsGateOfMadnessDifficulty_ReturnValue);
	void On_Base_Management_Value_Changed(bool CallFunc_IsGateOfMadnessDifficulty_ReturnValue);
	void On_Survival_Difficulty_Value_Changed(bool CallFunc_IsGateOfMadnessDifficulty_ReturnValue);
	void Setup_Descriptions_Array(TArray<class UBorder*>& K2Node_MakeArray_Array);
	void On_Selected_Entry_Changed(int32 EntryIndex, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UBorder* CallFunc_Array_Get_Item, enum class ESlateVisibility K2Node_Select_Default);
	void Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IMainMenuButtonOwnerInterface_C> CallFunc_SetButtonsOwner_Owner_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9);
	void Setup_Selectable_Manager(TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array);
	void Dim_Descriptions(bool Dim);
	void Hide_Descriptions();
	void Accept();
	void Right();
	void GoBack();
	void Left();
	void Down();
	void PreConstruct(bool IsDesignTime);
	void Up();
	void Construct();
	void OnButtonPressed();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_wid_MainMenu_NewGame(int32 EntryPoint, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsPopupVisible_ReturnValue, bool CallFunc_IsPopupVisible_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex);
	void NewGame__DelegateSignature();
};

}


