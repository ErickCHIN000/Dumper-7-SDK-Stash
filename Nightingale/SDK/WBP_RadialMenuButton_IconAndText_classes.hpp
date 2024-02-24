#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x490 - 0x360)
// WidgetBlueprintGeneratedClass WBP_RadialMenuButton_IconAndText.WBP_RadialMenuButton_IconAndText_C
class UWBP_RadialMenuButton_IconAndText_C : public UNWXRadialMenuButtonWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_Icon;                                          // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RadialSegmentMaterial;                             // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_InteractionName;                               // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Cosmetics;                             // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Segment_Material;                                  // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           RadialBrush;                                       // 0x390(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          HoveredMaterial;                                   // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DisabledHoveredMaterial;                           // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UnHoveredMaterial;                                 // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_RadialMenuButton_IconAndText_C* GetDefaultObj();

	void OnButtonUnHovered();
	void OnButtonHovered(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FLinearColor& K2Node_Select_Default, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class IRadialMenuInterface> K2Node_DynamicCast_AsRadial_Menu_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnabled_ReturnValue);
	void SetButtonCosmetics(class FText Temp_text_Variable, class UTexture2D* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class IRadialMenuInterface> K2Node_DynamicCast_AsRadial_Menu_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_AngleToVector_ReturnValue, class UTexture2D* CallFunc_GetIconTexture_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, TScriptInterface<class IRadialMenuInterface> K2Node_DynamicCast_AsRadial_Menu_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_GetName_ReturnValue);
	void CreateButtonMaterial(class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class IRadialMenuInterface> K2Node_DynamicCast_AsRadial_Menu_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnabled_ReturnValue, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	struct FSlateBrush GetRadialMaterialBrush();
	void Construct();
	void ExecuteUbergraph_WBP_RadialMenuButton_IconAndText(int32 EntryPoint);
};

}


