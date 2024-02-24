#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x388 (0x5B8 - 0x230)
// WidgetBlueprintGeneratedClass UI_ShellUpgradeButton.UI_ShellUpgradeButton_C
class UUI_ShellUpgradeButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_CantBuy;                                      // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Buy;                                          // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Selection;                                    // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Filling;                                      // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_ShellUpgrade;                               // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background_ObtainedTile;                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background_Red;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Filling;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Icon;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Obtained;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Selection;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Button;                                        // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FA6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            PreviewTexture;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             FillingCircleSize;                                 // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             SelectionCircleSize;                               // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             BGObtainedSize;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             WidgetSize;                                        // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CurrentTexture;                                    // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnButtonHovered;                                   // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnButtonPressed;                                   // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnButtonReleased;                                  // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUI_ShellUpgradeMenu_C*                UI_ShellUpgradeMenu;                               // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FButtonStyle                          ButtonStyle;                                       // 0x308(0x278)(Edit, BlueprintVisible)
	bool                                         DebugButton;                                       // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CanBuy;                                            // 0x581(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FC4[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Tar;                                               // 0x584(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Glimpses;                                          // 0x588(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Locked;                                            // 0x58C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Obtained;                                          // 0x58D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShellNameKnown;                                    // 0x58E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FCE[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Upgrade;                                           // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Color_Alpha;                                       // 0x598(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AlphaTarget;                                       // 0x59C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPortrait;                                        // 0x5A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FD7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UShellDetail_C*                        UI_ShellDetail;                                    // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Equipment_ShellsTab_C*             UI_ShellTab;                                       // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_ShellUpgradeButton_C* GetDefaultObj();

	void SetObtainedBGSize(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void ButtonDebugging();
	void SetIconArtColor(float DeltaTime, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_FInterpTo_ReturnValue);
	void CreateButtonMID(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void SetSelectionMat(bool Temp_bool_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void SetObtainedFillingSize(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void SetFillingSize(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void SetPreviewTexture(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void SetObtained();
	void GetUpgradeName(class FName* Upgrade);
	void GetCost(int32* Tar, int32* Glimpses);
	void SetDetails(int32 Tar, int32 Glimpses, bool Locked, class FName Upgrade);
	void UpdateState(bool CanBuy, bool Obtained, bool ShellNameKnown);
	void PlayCantBuyAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PlayFilling(FDelegateProperty_ Event, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void ResetFilling(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_PauseAnimation_ReturnValue);
	void SetIconArtRenderOpacity(bool ShellKnown, float Local_Opacity, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void PlayBuyIconAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetSkillHighlighted(bool Highlight, bool Local_Highlight, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, float K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, float K2Node_Select_Default_2);
	void SetIconDetails(class UTexture2D* Texture, bool ShellKnown, bool Unlocked, bool SkipOuterIconOpacity, bool Local_SkipOuterIconOpacity, bool Local_Unlocked, bool Local_ShellKnown, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_ShellUpgrade_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_ShellUpgrade_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_ShellUpgrade_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_ShellUpgrade_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_ShellUpgradeButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4);
	void OnButtonReleased__DelegateSignature(int32 Index);
	void OnButtonPressed__DelegateSignature(int32 Index);
	void OnButtonHovered__DelegateSignature(int32 Index);
};

}


