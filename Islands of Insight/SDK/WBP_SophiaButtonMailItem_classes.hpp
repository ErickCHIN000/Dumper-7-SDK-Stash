#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x198 (0x400 - 0x268)
// WidgetBlueprintGeneratedClass WBP_SophiaButtonMailItem.WBP_SophiaButtonMailItem_C
class UWBP_SophiaButtonMailItem_C : public UStyledButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BGImage;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BorderImage;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                InnerGlowImage;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               MainButton;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            NamedSlot_43;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OuterGlowImage;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bHasBorder;                                        // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_FA3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            BGTexture;                                         // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstance*                     BGMat;                                             // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                           BGColorAndOpacity;                                 // 0x2C0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FLinearColor                          BorderEdgeOffset;                                  // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                           BorderColorAndOpacity;                             // 0x2F8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FMargin                               BorderMargin;                                      // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class UTexture2D*                            BorderTexture;                                     // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EButtonState                      OuterGlowButtonState;                              // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_FB4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OuterGlowOffset;                                   // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                           OuterGlowColorAndOpacity;                          // 0x340(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                            OuterGlowTexture;                                  // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EButtonState                      InnerGlowButtonState;                              // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_FBC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           InnerGlowColorAndOpacity;                          // 0x378(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                            InnerGlowTexture;                                  // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EButtonState                      ExpandButtonState;                                 // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_FBF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x3B0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector2D                             HoverSize;                                         // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstance*                     BorderMat;                                         // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class ESlateBrushDrawType               BorderImageType;                                   // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_FC7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     OuterGlowMat;                                      // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstance*                     InnerGlowMat;                                      // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SophiaButtonMailItem_C* GetDefaultObj();

	struct FSlateBrush Get_BGImage_Brush_0(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_SophiaButton_MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_SophiaButton_MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_SophiaButton_MainButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_SophiaButton_MainButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__WBP_SophiaButton_MainButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void OnBindingCalled();
	void Reinit();
	void ExecuteUbergraph_WBP_SophiaButtonMailItem(int32 EntryPoint, enum class EButtonState Temp_byte_Variable, bool CallFunc_IsHovered_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class EButtonState Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class EButtonState Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, enum class ESlateVisibility Temp_byte_Variable_14, enum class ESlateVisibility Temp_byte_Variable_15, enum class ESlateVisibility Temp_byte_Variable_16, enum class EButtonState Temp_byte_Variable_17, enum class ESlateVisibility Temp_byte_Variable_18, enum class ESlateVisibility Temp_byte_Variable_19, enum class ESlateVisibility Temp_byte_Variable_20, enum class ESlateVisibility Temp_byte_Variable_21, enum class EButtonState Temp_byte_Variable_22, enum class ESlateVisibility Temp_byte_Variable_23, enum class ESlateVisibility Temp_byte_Variable_24, enum class ESlateVisibility Temp_byte_Variable_25, enum class ESlateVisibility Temp_byte_Variable_26, enum class EButtonState Temp_byte_Variable_27, enum class ESlateVisibility Temp_byte_Variable_28, enum class ESlateVisibility Temp_byte_Variable_29, enum class ESlateVisibility Temp_byte_Variable_30, enum class ESlateVisibility Temp_byte_Variable_31, enum class EButtonState Temp_byte_Variable_32, enum class ESlateVisibility Temp_byte_Variable_33, enum class ESlateVisibility Temp_byte_Variable_34, enum class ESlateVisibility Temp_byte_Variable_35, enum class ESlateVisibility Temp_byte_Variable_36, enum class EButtonState Temp_byte_Variable_37, enum class ESlateVisibility Temp_byte_Variable_38, enum class ESlateVisibility Temp_byte_Variable_39, enum class ESlateVisibility Temp_byte_Variable_40, enum class ESlateVisibility Temp_byte_Variable_41, enum class EButtonState Temp_byte_Variable_42, enum class ESlateVisibility Temp_byte_Variable_43, enum class ESlateVisibility Temp_byte_Variable_44, enum class ESlateVisibility Temp_byte_Variable_45, enum class EButtonState Temp_byte_Variable_46, enum class ESlateVisibility Temp_byte_Variable_47, enum class ESlateVisibility Temp_byte_Variable_48, enum class ESlateVisibility Temp_byte_Variable_49, enum class EButtonState Temp_byte_Variable_50, const struct FWidgetTransform& Temp_struct_Variable, const struct FWidgetTransform& Temp_struct_Variable_1, enum class EButtonState Temp_byte_Variable_51, const struct FWidgetTransform& Temp_struct_Variable_2, const struct FWidgetTransform& Temp_struct_Variable_3, const struct FWidgetTransform& Temp_struct_Variable_4, const struct FWidgetTransform& Temp_struct_Variable_5, enum class EButtonState Temp_byte_Variable_52, const struct FWidgetTransform& Temp_struct_Variable_6, const struct FWidgetTransform& Temp_struct_Variable_7, enum class EButtonState Temp_byte_Variable_53, const struct FWidgetTransform& Temp_struct_Variable_8, const struct FWidgetTransform& Temp_struct_Variable_9, const struct FWidgetTransform& Temp_struct_Variable_10, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, enum class ESlateVisibility Temp_byte_Variable_54, enum class ESlateVisibility Temp_byte_Variable_55, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, enum class ESlateVisibility K2Node_Select_Default_5, enum class ESlateVisibility K2Node_Select_Default_6, enum class ESlateVisibility K2Node_Select_Default_7, enum class ESlateVisibility K2Node_Select_Default_8, enum class ESlateVisibility K2Node_Select_Default_9, enum class ESlateVisibility K2Node_Select_Default_10, enum class ESlateVisibility K2Node_Select_Default_11, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, const struct FWidgetTransform& K2Node_Select_Default_12, const struct FWidgetTransform& K2Node_Select_Default_13, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform_1, const struct FWidgetTransform& K2Node_Select_Default_14, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform_2, const struct FWidgetTransform& K2Node_Select_Default_15, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin_1, bool CallFunc_IsValid_ReturnValue, class UObject* K2Node_Select_Default_16, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UObject* K2Node_Select_Default_17, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool CallFunc_IsValid_ReturnValue_2, class UObject* K2Node_Select_Default_18, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, bool CallFunc_IsValid_ReturnValue_3, class UObject* K2Node_Select_Default_19, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3);
	void OnClicked__DelegateSignature();
};

}


