#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x251 (0x481 - 0x230)
// WidgetBlueprintGeneratedClass UI_FastTravel.UI_FastTravel_C
class UUI_FastTravel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Scale_Large;                                  // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Medium;                                 // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Default;                                // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompts;                             // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Art_FastTravelPoint;                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Art_Locked;                                // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichText_Description_FastTravel;                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_FastTravelPoints;                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_CryptOfMartyrs;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Fallgrim;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_SeatOfInfinity;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_TempleOfAsh;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Title_FastTravelPoint;                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Tutorials;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Close;                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Navigate;                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Travel;                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_TravelPoints_CryptOfMartyrs;           // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_TravelPoints_Fallgrim;                 // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_TravelPoints_SeatOfInfinity;           // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_TravelPoints_TempleOfAsh;              // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Input_Consume;                                     // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          NavDown_Timer;                                     // 0x2E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          NavUp_Timer;                                       // 0x2F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Current;                                     // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         GameplayPCRef;                                     // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ShellUpgradeMenu_C*                UI_ShellUpgradeMenu;                               // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Max;                                         // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStruct_FastTravelPoint>       FastTravelPoints;                                  // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UUI_FastTravel_Entry_C*>        Entries;                                           // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class AGamePlayGameState_C*                  GameStateRef;                                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Fallgrim_Unlocked;                                 // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShrineOfAsh_Unlocked;                              // 0x341(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SeatOfInfinity_Unlocked;                           // 0x342(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CryptOfMartyrs_Unlocked;                           // 0x343(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2405[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        Item_Mask_Ornate;                                  // 0x348(0x132)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_240A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Debug;                                             // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_FastTravel_C* GetDefaultObj();

	void HandleScale(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ApplyOrnateMaskEffect(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue);
	void AddOrnateMaskFamiliarity(const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo);
	bool IsCurrentWaifu(class FName WaifuID, class FName Temp_name_Variable, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void SetAreaName(bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable_2, bool Temp_bool_Variable_3, class FText Temp_text_Variable_3, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_TextToUpper_ReturnValue_3, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3);
	bool GetIsUnlocked(class FName WaifuID, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool K2Node_Select_Default);
	void ConfirmFastTravel(class UUI_FastTravel_Entry_C* CallFunc_Array_Get_Item);
	void UI_Sound_Hover();
	void SetGameState(class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState);
	void GetMaxIndex(int32 CallFunc_Array_LastIndex_ReturnValue);
	void PopulateFastTravel(int32 Local_Index, class FName Local_WaifuID, class FName Local_LevelID, class FText Local_LocationName, class UUI_FastTravel_Entry_C* Local_Widget, class UUI_FastTravel_Entry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsCurrentWaifu_ReturnValue, bool CallFunc_GetIsUnlocked_ReturnValue, bool K2Node_SwitchName_CmpSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUI_FastTravel_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, const struct FStruct_FastTravelPoint& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void GetFastTravelPoints(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FStruct_FastTravelPoint& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void StartFastTravel(int32 Index, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, const struct FStruct_FastTravelPoint& CallFunc_Array_Get_Item);
	void UpdateFastTravelDetails(int32 Index, class UUI_FastTravel_Entry_C* Entry, bool Local_Unlocked, int32 Local_Index, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default, const struct FStruct_FastTravelPoint& CallFunc_Array_Get_Item, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2);
	void SetGameplayPC(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void NavSoundHover();
	void OnOpen();
	class FText GetItemDescription(class FName ID, class FText Description, int32 TimesUsedToUnlockEffectDescription, class FText& EffectDescription, class FText& ExtendedDescription, class FText& EffectDescriptionWithFamiliarity, int32* Familiarity, int32 Local_Familiarity, class FText Local_DescWithFami, class FText Local_ExtDesc, class FText Local_EffectDesc, int32 Local_TimesUsed, class FText Local_Description, class FName Local_ID, int32 CallFunc_GetItemMaxFamiliarity_MaxFamiliarity, const class FString& CallFunc_CreateExtendedDescription_ReturnValue, bool CallFunc_CreateExtendedDescription_OutputPin, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_GetItemFamiliarity_Value, const class FString& CallFunc_CreateItemEffectDescription_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue);
	void NavUp(int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void NavSet(bool CustomIndex, bool IsHovering, bool SkipSound, int32 Index, const TArray<class UUI_Compendium_Entry_C*>& Local_Entries, bool Local_SkipSound, bool Local_IsHovering, int32 Local_Index, bool Local_CustomIndex, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UUI_FastTravel_Entry_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, class UUI_FastTravel_Entry_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier);
	void NavDown(int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void UI_Sound_TabSwitch();
	void OnButtonHovered(int32 Index);
	void OnOpenEvent();
	void OnInitialized();
	void BndEvt__UI_ControllerButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void OnConfirmTravel();
	void NavUp_Released();
	void NavUp_Set();
	void NavUp_Bind();
	void NavDown_Released();
	void NavDown_Set();
	void NavDown_Bind();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UI_FastTravel(int32 EntryPoint, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 K2Node_CustomEvent_Index, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue_1);
};

}


