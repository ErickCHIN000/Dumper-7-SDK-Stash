#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x39C - 0x340)
// WidgetBlueprintGeneratedClass WBP_ZoomablePannable.WBP_ZoomablePannable_C
class UWBP_ZoomablePannable_C : public UNWXZoomablePannableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                            ContentSlot;                                       // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsBeingDragged;                                    // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ChildWidget;                                       // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        ZoomStep;                                          // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<double>                               ZoomSteps;                                         // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                             FrameSize;                                         // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        ZoomCount;                                         // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_47DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaxZoom;                                           // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        StartingZoomStep;                                  // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ZoomablePannable_C* GetDefaultObj();

	void SetupZoomSteps(int32 Temp_int_Variable, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double K2Node_MathExpression_ReturnValue);
	void ClampTranslation(const struct FVector2D& TargetTranslation, struct FVector2D* ClampedTranslation, double GamepadPanningOffsetY, double GamepadPanningOffsetX, const struct FVector2D& ViewportMax, const struct FVector2D& ViewportMin, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue_2, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue_2, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, bool CallFunc_IsValid_ReturnValue, const struct FVector& K2Node_MathExpression_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_GetLocalTopLeft_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X_5, double CallFunc_BreakVector2D_Y_5, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void Center_on_World_Position(const struct FVector2D& Position, bool CallFunc_IsValid_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue_1, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition_1, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_ClampTranslation_ClampedTranslation);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void Pan(const struct FVector2D& Movement, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_ClampTranslation_ClampedTranslation);
	void Zoom(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, bool InputFromGamepad, int32 ZoomINOut, const struct FVector2D& GamepadPointerPos, double ChildWidgetSize, const struct FVector2D& NormalizedPosition, double ZoomTo, double ZoomFrom, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, double CallFunc_SignOfFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_2, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_3, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_ScreenToWidgetLocal_LocalCoordinate, const struct FVector2D& CallFunc_ClampTranslation_ClampedTranslation, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue_1, double CallFunc_SignOfFloat_A_ImplicitCast);
	void EndDrag();
	void BeginDrag();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_ZoomablePannable(int32 EntryPoint, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Array_Get_Item, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_ClampTranslation_ClampedTranslation);
};

}


