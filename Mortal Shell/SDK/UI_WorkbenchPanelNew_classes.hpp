#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D8 (0x408 - 0x230)
// WidgetBlueprintGeneratedClass UI_WorkbenchPanelNew.UI_WorkbenchPanelNew_C
class UUI_WorkbenchPanelNew_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Scale_Large;                                  // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Medium;                                 // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Default;                                // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Header;                                       // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Background_Black;                            // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Item_Name_Background;                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Pixelate;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_WorkbenchGrid;                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Header;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_PreHeader;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ConfirmButtonPressAndHold_C*       UI_ControllerButton_ApplySkin;                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Close;                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ConfirmButtonPressAndHold_C*       UI_ControllerButton_RemoveSkin;                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ConfirmButtonPressAndHold_C*       UI_ControllerButton_Upgrade;                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Skin_Cat_Devil;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Skin_Char_Foundling_Corrupted;                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Skin_Lute_Clockwork_Obsidian;                   // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Skin_Weapon_Axatana_Obsidian;                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_Ballistazooka;                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_HallowedSword_Super_0;                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_HallowedSword_Super_1;                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_HammerAndChisel_Super_0;                // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_HammerAndChisel_Super_1;                // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_MartyrBlade_Super_0;                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_MartyrBlade_Super_1;                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_QuenchidAcid_Axatana_Axe;               // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_QuenchidAcid_Axatana_Katanas;           // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_QuenchidAcid_HallowedSword;             // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_QuenchidAcid_HammerAndChisel;           // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_QuenchidAcid_MartysBlade;               // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_QuenchidAcid_SmolderingMace;            // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_SmolderingMace_Super_0;                 // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_SmolderingMace_Super_1;                 // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_TarnishedSealOffering;                  // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchItemNew_C*                UI_Upgrade_TarnishedSealRune;                      // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchDescription_C*            UI_WorkbenchDescription;                           // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WorkbenchMenu_TopNav_C*            UI_WorkbenchMenu_TopNav;                           // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_WorkbenchMenu;                         // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Index_SelectedUpgrade;                             // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_WorkbenchItemNew_C*>        Buttons;                                           // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	enum class EComboTypes                       CurrentWeapon;                                     // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasSuperUpgrades;                                  // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasBallistazookaUpgrade;                           // 0x382(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2913[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_WorkbenchItemNew_C*                SelectedUpgrade_UI;                                // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Input_Consume;                                     // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_291E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  WorkBenchName;                                     // 0x398(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          Timer_Upgrade;                                     // 0x3B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUpgradeInProgress;                               // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2949[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClosed;                                          // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AUsable_Workbench_C*                   BP_Workbench;                                      // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Sound;                                             // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Sound_DualSense;                                   // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StormMode_Active;                                  // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2968[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text_Value_UpgradeFor;                             // 0x3F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUI_WorkbenchPanelNew_C* GetDefaultObj();

	void SetSkinApplyState(int32 Value, int32 CallFunc_MakeLiteralInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName CallFunc_GetSkinID_ID);
	void IsStormMode(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeIsActive_ReturnValue);
	bool ShowParryUpgrade(class FName CallFunc_GetUpgradeNameParry_UpgradeName, bool CallFunc_IsUpgradeUnlocked_bUnlocked);
	bool ShowBallistazookaUpgrade();
	bool ShowAcidUpgrade(class UUI_WorkbenchItemNew_C* Target, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool ShowSuperUpgrade(class UUI_WorkbenchItemNew_C* Target, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void HandleScale(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void StopUpgrading();
	enum class ESlateVisibility Get_UI_ControllerButton_RemoveSkin_Visibility(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSkinApplied_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	enum class ESlateVisibility Get_UI_ControllerButton_ApplySkin_Visibility(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSkinApplied_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void PlayBuyAnim(bool CallFunc_IsValid_ReturnValue);
	void StopBuySound(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void StopBuyAnim(bool CallFunc_IsValid_ReturnValue);
	void StartBuySound(bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_Spawn2DControllerSound_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
	enum class ESlateVisibility Get_UI_ControllerButton_Upgrade_Visibility(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ResetHeader();
	void Reset_Grid(bool ResetAll, bool SkipKBMCheck, class UUI_WorkbenchItemNew_C* Local_Item, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UUI_WorkbenchItemNew_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void NavClose_Listen(FDelegateProperty_ Callback);
	void OnClose(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void ResolveAcquisitionNotify(class FText CallFunc_MakeLiteralText_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void SealHealingImprovedNotify(class FText CallFunc_MakeLiteralText_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void QuenchidAcidNotify(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void ShowFancyNotify(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD, bool K2Node_DynamicCast_bSuccess);
	void SetWaitingForTutorial(bool IsWaitingForTutorialScreen, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous);
	void NavConfirmReleased_Listen(FDelegateProperty_ Callback);
	void ButtonAnimStop();
	void ButtonAnimPlay(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void NavConfirmPressed_Listen(FDelegateProperty_ Callback);
	void UpdateName();
	void UpdateHeader(enum class Enum_Skins Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool Temp_bool_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText K2Node_Select_Default_1);
	int32 GetNavDownDelta(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default);
	int32 GetNavUpDelta(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default);
	void HoverSound();
	void SetupGrid(class UUI_WorkbenchItemNew_C* Local_Widget, class UUI_WorkbenchItemNew_C* Local_Upgrade, int32 Local_Column, int32 Local_Row, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, TArray<class UUI_WorkbenchItemNew_C*>& CallFunc_GetUpgrades_Array, class UUI_WorkbenchItemNew_C* CallFunc_Array_Get_Item, class UUI_WorkbenchItemNew_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void SetupAvailableButtons(class UUI_WorkbenchItemNew_C* Local_Item, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeContentIsEnabled_Enabled_, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ShowParryUpgrade_ReturnValue, bool CallFunc_ShowBallistazookaUpgrade_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_ShowAcidUpgrade_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_ShowSuperUpgrade_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_TwitchDrop_CheckIfAvailable_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, TArray<class UUI_WorkbenchItemNew_C*>& CallFunc_GetUpgrades_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_WorkbenchItemNew_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void NavWorkbench(bool CustomIndex, bool SkipIndexCheck, bool Hovering, int32 IndexSelected, int32 Delta, bool SkipSound, bool* ItemSelected, class UUI_WorkbenchItemNew_C* Local_SelectedUpgrade, int32 Local_IndexTemp, bool Local_SkipSound, int32 Local_Delta, int32 Local_IndexSelected, bool Local_Hovering, bool Local_SkipIndexCheck, bool Local_CustomIndex, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UUI_WorkbenchItemNew_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUI_WorkbenchItemNew_C* CallFunc_Array_Get_Item_1);
	void NavRight_Listen(FDelegateProperty_ Callback);
	void NavLeft_Listen(FDelegateProperty_ Callback);
	void NavDown_Listen(FDelegateProperty_ Callback);
	void NavUp_Listen(FDelegateProperty_ Callback);
	void GetUpgrades(TArray<class UUI_WorkbenchItemNew_C*>* Array, TArray<class UUI_WorkbenchItemNew_C*>& K2Node_MakeArray_Array);
	void NavUp_Bind();
	void NavUp_Set();
	void NavDown_Bind();
	void NavDown_Set();
	void NavLeft_Bind();
	void NavLeft_Set();
	void NavRight_Bind();
	void NavRight_Set();
	void OnOpen_Event();
	void NavConfirmPressed_Set();
	void NavConfirmPressed_Bind();
	void UpgradeItemEvent();
	void UpgradeItemConfirmedEvent();
	void NavConfirmReleased_Set();
	void NavConfirmReleased_Bind();
	void ShowTutorial();
	void FillResolveAfterUpgrade();
	void CloseOnUpgrade();
	void NavClose_Set();
	void BndEvt__UI_ControllerButtonCloseHint_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void NavClose_Bind();
	void OnItemHovered(class UWidget* Widget, int32 Index);
	void OnItemUnhovered();
	void Destruct();
	void ExecuteUbergraph_UI_WorkbenchPanelNew(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsSkinApplied_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_NavWorkbench_ItemSelected, bool CallFunc_NavWorkbench_ItemSelected_1, int32 CallFunc_GetNavUpDelta_ReturnValue, int32 CallFunc_GetNavDownDelta_ReturnValue, bool CallFunc_NavWorkbench_ItemSelected_2, bool CallFunc_NavWorkbench_ItemSelected_3, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ULargeTutorial_C* CallFunc_Create_ReturnValue, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, class UWidget* K2Node_CustomEvent_Widget, int32 K2Node_CustomEvent_Index, bool CallFunc_NavWorkbench_ItemSelected_4, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NavWorkbench_ItemSelected_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnClosed__DelegateSignature();
};

}


