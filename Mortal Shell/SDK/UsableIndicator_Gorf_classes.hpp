#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x94 (0x2C4 - 0x230)
// WidgetBlueprintGeneratedClass UsableIndicator_Gorf.UsableIndicator_Gorf_C
class UUsableIndicator_Gorf_C : public UUsableIndicatorWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Amount;                                       // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Hide;                                         // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Show;                                         // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background_1;                                // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background_2;                                // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_IconArt;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Indicator;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_GorfIndicator;                             // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Amount;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFrog_NPC_C*                           FrogNPC;                                           // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_ProjectToScreen;                             // 0x290(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnWidgetRemovedFromScreen;                         // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                               WidgetLocation;                                    // 0x2A8(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ADF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     ControllerReference;                               // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUsableIndicator_Gorf_C* GetDefaultObj();

	void PlayAmountAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	enum class ESlateVisibility Get_Text_Amount_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void PlayHideAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	enum class ESlateVisibility GetVisibility_UsableIndicator(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsInPhotoMode_PhotoMode_, bool CallFunc_GetHideUI_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void PlayShowAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetIconTexture(class UTexture2D* Texture);
	void SetIconArt(class AUsable_Actor_C* Local_UsableActor, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IUsableActorInterface_C> K2Node_DynamicCast_AsUsable_Actor_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetInteractionWidgetLocation_WidgetLocation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, class AUsable_Actor_C* K2Node_DynamicCast_AsUsable_Actor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetIsEnabled_ReturnValue);
	void Construct();
	void Show(class UTexture2D* Texture, int32 Amount, float InOpacity, bool JustUpdate, const struct FVector2D& Scale);
	void ProjectUsablePositionInViewport();
	void Destruct();
	void Hide();
	void OnAnimFinished();
	void ExecuteUbergraph_UsableIndicator_Gorf(int32 EntryPoint, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UTexture2D* K2Node_CustomEvent_Texture, int32 K2Node_CustomEvent_Amount, float K2Node_CustomEvent_InOpacity, bool K2Node_CustomEvent_JustUpdate, const struct FVector2D& K2Node_CustomEvent_Scale, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_UpdateIndicatorVisibility_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnWidgetRemovedFromScreen__DelegateSignature();
};

}


