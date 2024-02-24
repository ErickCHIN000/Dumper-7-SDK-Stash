#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2E0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_Crosshair.UMG_Crosshair_C
class UUMG_Crosshair_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Bottom_1;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Centre_1;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Left_1;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_44;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Right_1;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Top_1;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        MinSize;                                           // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxSize;                                           // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scale;                                             // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_296F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CentreTexture;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CentreTextureFocused;                              // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            OutsideTexture;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            OutsideTextureFocused;                             // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Focused;                                           // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_297D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentAlpha;                                      // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BowMode;                                           // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2986[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActorComponent*                       CrosshairProvider;                                 // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_Crosshair_C* GetDefaultObj();

	bool GetCrosshairVisibility(TScriptInterface<class IBP_CrosshairInterface_C> K2Node_DynamicCast_AsBP_Crosshair_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBP_CrosshairInterface_C> K2Node_DynamicCast_AsBP_Crosshair_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_WantsShowCrosshair_bShowCrosshair, bool CallFunc_WantsShowCrosshair_bShowCrosshair_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ToggleBowMode(bool On, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateBowMode(TScriptInterface<class IBP_CrosshairInterface_C> K2Node_DynamicCast_AsBP_Crosshair_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_WantsBowMode_bWantsBowMode, TScriptInterface<class IBP_CrosshairInterface_C> K2Node_DynamicCast_AsBP_Crosshair_Interface_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetCrosshairAimAlpha_AimAlpha, bool CallFunc_GetCrosshairVisibility_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess_2, class AIcarusItem* CallFunc_GetFocusedItem_ReturnValue, TArray<class UActorComponent*>& CallFunc_GetComponentsByInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void UpdateTextures(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UTexture2D* K2Node_Select_Default, class UTexture2D* K2Node_Select_Default_1);
	void SetInteractionFocus(bool Focusing, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void UpdateCrosshair(float Alpha, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin);
	void Construct();
	void ExecuteUbergraph_UMG_Crosshair(int32 EntryPoint);
};

}


