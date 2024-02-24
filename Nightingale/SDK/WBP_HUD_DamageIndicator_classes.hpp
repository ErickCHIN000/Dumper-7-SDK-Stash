#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x348 - 0x340)
// WidgetBlueprintGeneratedClass WBP_HUD_DamageIndicator.WBP_HUD_DamageIndicator_C
class UWBP_HUD_DamageIndicator_C : public UNWXUserWidget
{
public:
	class UWBP_HUD_DMG_Marker_C*                 DamageMarkerWidget;                                // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_DamageIndicator_C* GetDefaultObj();

	void OnDMGWidgetDestroyed(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void CreateDMGMarker(struct FDamageEffectContextData& DamageContextData, double Duration, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_HUD_DMG_Marker_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void UpdateDMGMarker(const struct FDamageEffectContextData& DamageContextData, double DMGIntensity, double TimeToDisplay, const struct FLinearColor& Colour, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
};

}


