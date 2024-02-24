#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x388 - 0x260)
// WidgetBlueprintGeneratedClass UMG_BioLab_WireCanvas.UMG_BioLab_WireCanvas_C
class UUMG_BioLab_WireCanvas_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          ContentCanvas;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class UUMG_BioLab_UpgradeSlotSelector_C*, struct FBP_WireDetails> Wires;                                             // 0x270(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class UUMG_BioLab_UpgradeSlotSelector_C*, class UUMG_WirePin_C*> SlotsToPins;                                       // 0x2C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class UUMG_BioLab_UpgradeSlotSelector_C*, bool> CurrentBlendingWires;                              // 0x310(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        WireThickness;                                     // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        WireLerpDuration;                                  // 0x364(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          UnfocusedWireColour;                               // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          FocusedWireColour;                                 // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_BioLab_WireCanvas_C* GetDefaultObj();

	void UpdateFades(float DeltaTime, const TArray<class UUMG_BioLab_UpgradeSlotSelector_C*>& CompleteFades, float FadeDelta, float NewFade, int32 Temp_int_Array_Index_Variable, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UUMG_BioLab_UpgradeSlotSelector_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, TArray<class UUMG_BioLab_UpgradeSlotSelector_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue_1, class UUMG_BioLab_UpgradeSlotSelector_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UUMG_WirePin_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FBP_WireDetails& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FBP_WireDetails& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, const struct FBP_WireDetails& K2Node_SetFieldsInStruct_StructOut);
	void GetEdgePoint(const struct FVector2D& LineStart, const struct FVector2D& BoxPosition, const struct FVector2D& BoxSize, const struct FVector2D& ExtraInset, struct FVector2D* BoxEdgePoint, const struct FVector2D& Pen, float LineAngle, const struct FVector2D& LineDelta, const struct FVector2D& BoxMid, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_DegSin_ReturnValue, float CallFunc_DegCos_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_DegAtan2_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_2);
	void OnPaint(struct FPaintContext& Context, const struct FVector2D& CanvasCentre, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGeometry& CallFunc_GetPaintSpaceGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, const struct FVector2D& CallFunc_GetLocalTopLeft_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, TArray<class UUMG_BioLab_UpgradeSlotSelector_C*>& CallFunc_Map_Keys_Keys, class UUMG_BioLab_UpgradeSlotSelector_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FBP_WireDetails& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_2, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_3, TArray<struct FVector2D>& K2Node_MakeArray_Array);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ConnectWire(class UUMG_BioLab_UpgradeSlotSelector_C* Selector, class UUMG_WirePin_C* Pin, const struct FVector2D& Midpoint);
	void SetWireBlendTarget(class UUMG_BioLab_UpgradeSlotSelector_C* Selector, bool BlendToFocused);
	void Cleanup();
	void ExecuteUbergraph_UMG_BioLab_WireCanvas(int32 EntryPoint, class UUMG_BioLab_UpgradeSlotSelector_C* K2Node_CustomEvent_Selector, bool K2Node_CustomEvent_BlendToFocused, class UUMG_BioLab_UpgradeSlotSelector_C* K2Node_CustomEvent_Selector_1, class UUMG_WirePin_C* K2Node_CustomEvent_Pin, const struct FVector2D& K2Node_CustomEvent_MidPoint, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetPinSize_Size, const struct FVector2D& CallFunc_GetPosition_ReturnValue, const struct FVector2D& CallFunc_GetBaseMargin_BaseSize, const struct FVector2D& CallFunc_GetEdgePoint_BoxEdgePoint, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_GetBaseSize_BaseSize, const struct FVector2D& CallFunc_GetPosition_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector2D& CallFunc_GetEdgePoint_BoxEdgePoint_1, const struct FBP_WireDetails& K2Node_MakeStruct_BP_WireDetails);
};

}


