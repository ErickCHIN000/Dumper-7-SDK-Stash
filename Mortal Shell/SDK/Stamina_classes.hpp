#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x278 - 0x230)
// WidgetBlueprintGeneratedClass Stamina.Stamina_C
class UStamina_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_NoStamina;                                    // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Frame;                                             // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FrameCap;                                          // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Highlight;                                         // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Ready_Sheen;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Shadow;                                            // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          Stamina;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCurveFloat*                           StaminaScaleCurve;                                 // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStamina_C* GetDefaultObj();

	void PlayNoStaminaAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void SetCapPosition(float CapOffset, class UCanvasPanelSlot* LocFrameCapSlot, class UCanvasPanelSlot* LocStaminaBarSlot, const struct FVector2D& CallFunc_GetPosition_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue_1, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void SetBarElementBasedOnStamina(class UObject* Object, float MaxStamina, class UCanvasPanelSlot* LocSlot, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_FInterpTo_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void SetMaxStamina(float MaxStamina, class UCanvasPanelSlot* LocSlot);
	void UpdateHighlight(class UCanvasPanelSlot* LocHighlightSlot, class UCanvasPanelSlot* LocStaminaBarSlot, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue);
	void SetPercent(float NewPercent);
	void ExecuteUbergraph_Stamina(int32 EntryPoint, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float K2Node_CustomEvent_NewPercent);
};

}


