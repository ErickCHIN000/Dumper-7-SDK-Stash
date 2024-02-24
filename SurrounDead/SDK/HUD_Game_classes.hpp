#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x3F0 - 0x388)
// BlueprintGeneratedClass HUD_Game.HUD_Game_C
class AHUD_Game_C : public AHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDaysSurvivedWidget_C*                 DaysSurvivedUI;                                    // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNotificationParentWidget_C*           NotificationUI;                                    // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UZoneAreaWidget_C*                     AreaUI;                                            // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTimeUI_C*                             TimeUI;                                            // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         TimeIsOpen_;                                       // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4379[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAIHealthBarUI_C*                      AiHealthBar;                                       // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPauseScreen_C*                        PauseMenu;                                         // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UInteractionTimerUI_C*                 InteractTimerWidget;                               // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USafeZoneUI_C*                         SafeZoneUI;                                        // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractWidget_C*                  InteractWidget;                                    // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_LootContainerWidget_C*             LootContainerWidget;                               // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHUD_Game_C* GetDefaultObj();

	void RemoveInteractWidgets();
	void ShowLootContainerWidget(bool Show_, class AActor* Actor, class FText Action, class FText Container, bool Looted_, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UBP_LootContainerWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_PlayerCharacter_C* CallFunc_GetPlayerRef_Player, class ABP_PlayerCharacter_C* CallFunc_GetPlayerRef_Player_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInventoryOpen__ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void UpdateInteractWidget(class FText InText, bool CallFunc_IsValid_ReturnValue);
	void SetContextOption(int32 Index, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateStatOption(int32 Index, class FText Txt, class AActor* Actor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ShowInteractWidget(bool Visible_, class AActor* Actor, class FText Action_Name, class FText Object_Name, class UBP_InteractWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SafeZoneAreaUI(bool Show_, class USafeZoneUI_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void InteractTimerUI(bool Open_, class FText InteractionText, class UInteractionTimerUI_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateHealth(double Health, double MaxHealth, bool CallFunc_IsValid_ReturnValue);
	void ToggleAIHealthBar(bool Toggle, const class FString& Name, bool Boss_, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsVisible_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void Time(bool CallFunc_GetBoolCVar_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UTimeUI_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void BindAreaUIFinished(class UZoneAreaWidget_C* CallFunc_Create_ReturnValue);
	void Notification(const struct FS_NotificationDetails& NotificationDetails);
	void DaysSurvivedHUD(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UDaysSurvivedWidget_C* CallFunc_Create_ReturnValue);
	void ReceiveBeginPlay();
	void Client_PauseGame(bool Toggle);
	void Initialise();
	void Client_ForceUnpause(class UWidget* Target);
	void BindEnteringFinished();
	void BindLeavingFinished();
	void ZoneAreaUI(bool Entering_, class FText Area_Name, class UTexture* Texture, const struct FLinearColor& Color);
	void ExecuteUbergraph_HUD_Game(int32 EntryPoint, class UNotificationParentWidget_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_Toggle, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UPauseScreen_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, class UZoneAreaWidget_C* CallFunc_Create_ReturnValue_2, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue_1, class UWidget* K2Node_CustomEvent_Target, bool CallFunc_SetGamePaused_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UZoneAreaWidget_C* CallFunc_Create_ReturnValue_3, class UZoneAreaWidget_C* CallFunc_Create_ReturnValue_4, class UZoneAreaWidget_C* CallFunc_Create_ReturnValue_5, class UAIHealthBarUI_C* CallFunc_Create_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_Entering_, class FText K2Node_CustomEvent_Area_Name, class UTexture* K2Node_CustomEvent_Texture, const struct FLinearColor& K2Node_CustomEvent_Color, bool CallFunc_IsValid_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

}


