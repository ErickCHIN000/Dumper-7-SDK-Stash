#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0x4A8 - 0x360)
// WidgetBlueprintGeneratedClass WBP_RadialButton_Ammo.WBP_RadialButton_Ammo_C
class UWBP_RadialButton_Ammo_C : public UNWXRadialMenuButtonWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_TooltipBox;                                 // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              GridEntryBox;                                      // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RadialSegmentMaterial;                             // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Segment_Material;                                  // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           RadialBrush;                                       // 0x390(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_sw_GridEntryItem_C*               GridEntry;                                         // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAmmoRadialMenuEntry*                  AmmoEntry;                                         // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UnHoveredMaterial;                                 // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DisabledHoveredMaterial;                           // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HoveredMaterial;                                   // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemTooltip_C*                    ItemTooltip;                                       // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_RadialButton_Ammo_C* GetDefaultObj();

	void InitializeDesignerPreview(class UWBP_ItemTooltip_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnButtonUnHovered();
	void OnButtonHovered(bool Temp_bool_Variable, const struct FGameplayTag& CallFunc_HoverStartEventTag_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& K2Node_Select_Default, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class IRadialMenuInterface> K2Node_DynamicCast_AsRadial_Menu_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnabled_ReturnValue);
	void CreateTooltip(class UWBP_ItemTooltip_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void CreateAmmoGridEntry(class UWBP_sw_GridEntryItem_C* CallFunc_Create_ReturnValue, const struct FVector2D& CallFunc_AngleToVector_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UAmmoRadialMenuEntry* K2Node_DynamicCast_AsAmmo_Radial_Menu_Entry, bool K2Node_DynamicCast_bSuccess);
	void CreateButtonMaterial(const struct FSlateColor& NewLocalVar, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_RadialButton_Ammo(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


