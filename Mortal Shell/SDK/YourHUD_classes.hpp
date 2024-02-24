#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x358 - 0x310)
// BlueprintGeneratedClass YourHUD.YourHUD_C
class AYourHUD_C : public AHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNewHUDLayout_C*                       HUDReference;                                      // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Crosshair;                                         // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCrosshairHidden;                                 // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_291D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URiposteWIndowIndicator_C*             RiposteWIndowIndicator;                            // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnHudVisibilityChanged;                            // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USkipCutscene_C*                       SkipCutsceneRef;                                   // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AYourHUD_C* GetDefaultObj();

	void SimpleCrosshair(int32 X, int32 Y, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_2, int32 CallFunc_Divide_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3);
	void FadeInHud(bool NoHideNotifies);
	void FadeOutHud(bool NoHideNotifies);
	void ShowBossHealt_Bar();
	void HideBossHealthBar();
	void ShowFancyNotificationWidget(class FName RowName);
	void Show_Center_Notificiation(const struct FDHCenterNotification& NotificationData);
	void SetHudVisibility(bool bShowHUD, bool bImmediate, bool NoHideNotifies);
	void SkipCutscene_Show(enum class Enum_Cutscene_SkipType SkipType);
	void SkipCutscene_Hide();
	void SkipCutscene_CreateWidget();
	void ReceiveBeginPlay();
	void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
	void OnRiposteWindowExpired_Event_0();
	void OnRipostePossible_Event_0(const struct FTimerHandle& RiposteWindowExpirationTimer, class ABaseCharacter_C* ParriedEnemy);
	void ExecuteUbergraph_YourHUD(int32 EntryPoint, bool K2Node_CustomEvent_NoHideNotifies_1, bool K2Node_CustomEvent_NoHideNotifies_2, class FName K2Node_CustomEvent_RowName, class USkipCutscene_C* CallFunc_Create_ReturnValue, const struct FUpgradeDisplayInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FDHCenterNotification& K2Node_CustomEvent_NotificationData, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool K2Node_CustomEvent_bShowHUD, bool K2Node_CustomEvent_bImmediate, bool K2Node_CustomEvent_NoHideNotifies, class ABP_FancyNotification_C* CallFunc_FinishSpawningActor_ReturnValue, enum class Enum_Cutscene_SkipType K2Node_CustomEvent_SkipType, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_IsInViewport_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, int32 K2Node_Event_SizeX, int32 K2Node_Event_SizeY, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UNewHUDLayout_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& K2Node_CustomEvent_RiposteWindowExpirationTimer, class ABaseCharacter_C* K2Node_CustomEvent_ParriedEnemy, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class URiposteWIndowIndicator_C* CallFunc_Create_ReturnValue_2, class APawn* CallFunc_GetOwningPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnHudVisibilityChanged__DelegateSignature(bool bHudVisible);
};

}


