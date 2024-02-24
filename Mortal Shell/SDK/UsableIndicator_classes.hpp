#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2C0 - 0x230)
// WidgetBlueprintGeneratedClass UsableIndicator.UsableIndicator_C
class UUsableIndicator_C : public UUsableIndicatorWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowAnimation;                                     // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Transition;                                        // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Timer_IconArt;                               // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Timer_Indicator;                             // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Usage_Indicator;                             // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                UsableActor;                                       // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          SetPositionInViewportTimerHandle;                  // 0x270(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SmokeMaterial;                                     // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnWidgetRemovedFromScreen;                         // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         HudVisible;                                        // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_96[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_Timer;                                         // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CooldownOpacity_Current;                           // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CooldownOpacity_Target;                            // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WidgetLocation;                                    // 0x2A8(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnScreen;                                          // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_97[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     ControllerReference;                               // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUsableIndicator_C* GetDefaultObj();

	enum class ESlateVisibility GetVisibility_UsableIndicator(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsInPhotoMode_PhotoMode_, bool CallFunc_GetHideUI_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void PlayShowAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void MID_CreateProgressBar(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void MID_CreateSmoke(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void SetIconTexture(class AUsable_Actor_C* K2Node_DynamicCast_AsUsable_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AWorld_Actor_C* K2Node_DynamicCast_AsWorld_Actor, bool K2Node_DynamicCast_bSuccess_1);
	void SetIconArt(class AUsable_Actor_C* Local_UsableActor, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IUsableActorInterface_C> K2Node_DynamicCast_AsUsable_Actor_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetInteractionWidgetLocation_WidgetLocation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, class AUsable_Actor_C* K2Node_DynamicCast_AsUsable_Actor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetIsEnabled_ReturnValue);
	void GetDoesRespawn(bool CallFunc_IsValid_ReturnValue, class AUsable_Actor_C* K2Node_DynamicCast_AsUsable_Actor, bool K2Node_DynamicCast_bSuccess);
	void SetTimer(float DeltaTime, class AUsable_Actor_C* Local_UsableActor, bool CallFunc_GetIsEnabled_ReturnValue, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AUsable_Actor_C* K2Node_DynamicCast_AsUsable_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue);
	void SetRenderScaleBasedOnDistanceToCamera(const struct FVector& WidgetLocation, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void Construct();
	void Show(class AActor* UsableActor);
	void ProjectUsablePositionInViewport();
	void HideAndRemoveFromScreen();
	void TransitionToUsablePrompt();
	void TransitionFromusablePrompt();
	void OnHudVisibilityChanged_Event_0(bool bHudVisible);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void ExecuteUbergraph_UsableIndicator(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_UpdateIndicatorVisibility_ReturnValue, class AActor* K2Node_CustomEvent_UsableActor, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool K2Node_CustomEvent_bHudVisible, class AHUD* CallFunc_GetHUD_ReturnValue, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class AHUD* CallFunc_GetHUD_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TScriptInterface<class IUsableActorInterface_C> K2Node_DynamicCast_AsUsable_Actor_Interface, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_GetInteractionWidgetLocation_WidgetLocation, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void OnWidgetRemovedFromScreen__DelegateSignature();
};

}


