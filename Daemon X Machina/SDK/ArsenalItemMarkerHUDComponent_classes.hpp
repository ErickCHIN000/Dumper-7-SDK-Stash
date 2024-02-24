#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1A0 - 0x198)
// BlueprintGeneratedClass ArsenalItemMarkerHUDComponent.ArsenalItemMarkerHUDComponent_C
class UArsenalItemMarkerHUDComponent_C : public UTTLArsenalItemMarkerHUDComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UArsenalItemMarkerHUDComponent_C* GetDefaultObj();

	class UWidgetAnimation* GetHUDWidgetDescriptionInAnim(class UUserWidget* HUD, class UMsn_fielditem_top00_C* K2Node_DynamicCast_AsMsn_Fielditem_Top_00, bool K2Node_DynamicCast_bSuccess);
	class UWidgetAnimation* GetHUDWidgetNoAccessAnim(class UUserWidget* HUD, class UMsn_fielditem_top00_C* K2Node_DynamicCast_AsMsn_Fielditem_Top_00, bool K2Node_DynamicCast_bSuccess);
	class UWidgetAnimation* GetHUDWidgetAccessAnim(class UUserWidget* HUD, class UMsn_fielditem_top00_C* K2Node_DynamicCast_AsMsn_Fielditem_Top_00, bool K2Node_DynamicCast_bSuccess);
	void PlayStartAnimation(class UUserWidget* HUD);
	void UpdateHUDBP(float DeltaSeconds);
	void PlayDisableAnimation(class UUserWidget* HUD);
	void ExecuteUbergraph_ArsenalItemMarkerHUDComponent(int32 EntryPoint, class UUserWidget* K2Node_Event_hud, class UUserWidget* K2Node_Event_hud1, class UMsn_fielditem_top00_C* K2Node_DynamicCast_AsMsn_Fielditem_Top_00, bool K2Node_DynamicCast_bSuccess, class UMsn_fielditem_top00_C* K2Node_DynamicCast_AsMsn_Fielditem_Top_001, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue1, float K2Node_Event_DeltaSeconds);
};

}


