#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x81 (0x2B1 - 0x230)
// WidgetBlueprintGeneratedClass UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C
class UUI_StormMode_RunicWarning_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_FadeOut;                                      // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeIn;                                       // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Dismiss;                             // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background_Black;                            // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Dismiss;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Warning;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ConfirmButtonPressAndHold_C*       UI_Controller_Dismiss;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnWarningClosed;                                   // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  Text_Starter;                                      // 0x280(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_ChangeArea;                                   // 0x298(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsChangeArea;                                      // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUI_StormMode_RunicWarning_C* GetDefaultObj();

	void GetSelectedCharacter(enum class EArmorTypes* Character);
	void GetVerticalIndex(int32* Index);
	void Sound_OnHovered();
	void NavLeft();
	void OnCharacterHighlighted(enum class EArmorTypes Character);
	void OnWeaponHighlighted(enum class EComboTypes Weapon);
	void NavRight();
	void NavUp();
	void NavDown();
	void NavConfirm();
	void NavBack();
	void OnClose();
	void SetParentWidget(class UWidget* Widget);
	void SetSeedManager(class ABP_SeedManager_C* SeedManager);
	void OnCharacterSelected(enum class EArmorTypes Character);
	void OnSettingConfirmed(int32 Value);
	void OnWeaponSelected(enum class EComboTypes Weapon);
	void SetSaveGameRef(int32 Slot, class UServerSaveGame_C* SaveGame, const class FString& SlotName, class UMapState_C* MapStateSaveGame, const class FString& SlotName_MapState);
	void OnRiposteHighlighted(enum class ERiposteTypes Riposte);
	void OnRiposteSelected(enum class ERiposteTypes Riposte);
	void OnButtonHovered(class UUserWidget* Widget);
	void NavSpecialButton();
	void OnOpen();
	void OnFadeInEnd();
	void OnConfirm();
	void OnFadeOutEnd();
	void Construct();
	void ExecuteUbergraph_UI_StormMode_RunicWarning(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EArmorTypes K2Node_Event_Character_1, enum class EComboTypes K2Node_Event_Weapon_1, class UWidget* K2Node_Event_Widget_1, class ABP_SeedManager_C* K2Node_Event_SeedManager, enum class EArmorTypes K2Node_Event_Character, int32 K2Node_Event_Value, enum class EComboTypes K2Node_Event_Weapon, int32 K2Node_Event_Slot, class UServerSaveGame_C* K2Node_Event_SaveGame, const class FString& K2Node_Event_SlotName, class UMapState_C* K2Node_Event_MapStateSaveGame, const class FString& K2Node_Event_SlotName_MapState, enum class ERiposteTypes K2Node_Event_Riposte_1, enum class ERiposteTypes K2Node_Event_Riposte, class UUserWidget* K2Node_Event_Widget, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_3, class FText K2Node_Select_Default);
	void OnWarningClosed__DelegateSignature();
};

}


