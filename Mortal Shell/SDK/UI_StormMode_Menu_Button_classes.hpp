#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAD (0x2DD - 0x230)
// WidgetBlueprintGeneratedClass UI_StormMode_Menu_Button.UI_StormMode_Menu_Button_C
class UUI_StormMode_Menu_Button_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Highlight;                                    // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Setting;                                    // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BG;                                          // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Selection;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ShellOrWeapon;                               // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ShellOrWeapon_Holdout;                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Button;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Image;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                            Image_Texture;                                     // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Image_Angle;                                       // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_Holdout;                                       // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseHoldout;                                        // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C28[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_Inactive;                                      // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Active;                                        // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ID;                                                // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       Character;                                         // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       Weapon;                                            // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C31[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Widget_Parent;                                     // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHighlighted;                                     // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSelected;                                        // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ERiposteTypes                     Riposte;                                           // 0x2C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C3F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    ButtonMat;                                         // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MyVerticalIndex;                                   // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             BG_Scale;                                          // 0x2D4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnabled;                                         // 0x2DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_StormMode_Menu_Button_C* GetDefaultObj();

	void IsButtonEnabled(bool* Enabled_);
	void OnChoiceSelected(TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchName_CmpSuccess);
	bool ForceSelected(bool Select_);
	bool SetSelected(bool Select_);
	bool SetHighlighted(bool Highlight_, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HoldoutMaterial(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void HighlightMaterial(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
	void UpdateSettingValues(TArray<class FText>& Values);
	void Value_Next();
	void Value_Previous();
	void Value_Reset();
	void UpdateSettingName(class FText Text);
	void ActivateButton();
	void DeactivateButton();
	void NavVertical(int32 Delta);
	void NavHorizontal(int32 Delta);
	void OverrideCurrentValue(int32 Index);
	void UpdateIndexes(TArray<int32>& Indexes);
	void PreConstruct(bool IsDesignTime);
	void HighlightButton(bool Highlight_);
	void SelectButton(bool Select_);
	void SetParentRef(class UWidget* Parent);
	void ForceSelectButton(bool Select);
	void EnableOrDisableButton(bool Enable);
	void BndEvt__Button_Setting_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Setting_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_UI_StormMode_Menu_Button(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetVerticalIndex_Index, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetVerticalIndex_Index_1, bool Temp_bool_Variable, float Temp_float_Variable_2, float Temp_float_Variable_3, TArray<class FText>& K2Node_Event_Values, class FText K2Node_Event_Text, int32 K2Node_Event_Delta_1, int32 K2Node_Event_Delta, int32 K2Node_Event_Index, TArray<int32>& K2Node_Event_Indexes, bool K2Node_Event_IsDesignTime, bool K2Node_Event_Highlight_, bool CallFunc_SetHighlighted_ReturnValue, bool CallFunc_SetHighlighted_ReturnValue_1, bool CallFunc_SetSelected_ReturnValue, bool K2Node_Event_Select_, bool CallFunc_SetSelected_ReturnValue_1, class UWidget* K2Node_Event_Parent, bool K2Node_SwitchName_CmpSuccess, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_2, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_Variable_1, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_3, bool K2Node_DynamicCast_bSuccess_3, float K2Node_Select_Default, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_4, bool K2Node_DynamicCast_bSuccess_4, bool K2Node_Event_Select, bool CallFunc_ForceSelected_ReturnValue, bool K2Node_Event_Enable, bool CallFunc_SetSelected_ReturnValue_2, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_5, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_Select_Default_1);
};

}


