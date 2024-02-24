#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8D (0x2ED - 0x260)
// WidgetBlueprintGeneratedClass wid_ViewableNote_Text.wid_ViewableNote_Text_C
class UWid_ViewableNote_Text_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Background;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       BackgroundBlurImage;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_InvestigationBoardButtons_Note_C* Buttons;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               MouseMovementDetector;                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                NoteImage;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               TextBorder;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         TextVisible;                                       // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2431[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CurrentRectMax;                                    // 0x2BC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CurrentRectMin;                                    // 0x2C4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             NoteDefaultViewportSize;                           // 0x2CC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NoteScale;                                         // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Texture;                                           // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ViewportMouseMoveZone;                             // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             MouseMoveForce;                                    // 0x2E4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is3DNote;                                          // 0x2EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_ViewableNote_Text_C* GetDefaultObj();

	void SetupNote();
	float GetScaleByMouseCurrentDelta(bool CallFunc_IsPressed_ReturnValue, bool CallFunc_IsPressed_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void GetNoteOriginalSize(struct FVector2D* Size, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void GetNoteAspectRatioModifier(float* AspectRatioModifier, const struct FVector2D& ViewportToNoteRatio, const struct FVector2D& NewLocalVar_0, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetNoteOriginalSize_Size, float CallFunc_FMin_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue);
	void GetNoteMinMaxScaledByAspectRatio(struct FVector2D* Min, struct FVector2D* Max, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1);
	void SetTextVisibilityHeist(bool NewTextVisible, class FText Description, bool UpdateArrows, class FText CallFunc_FormatText_Output);
	void UpdateScroll(float B, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void SetTextVisibility(bool NewTextVisible, class FText Desc, bool UpdateArrows, class FText CallFunc_FormatText_Output);
	void Construct();
	void UpdateNoteDefaultViewportSize();
	void UpdateNoteSize();
	void SetNoteScale(float NewScale);
	void MoveNote(const struct FVector2D& Offset);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetNoteTexture(class UTexture2D* Texture);
	void SetBackgroundTexture(class UTextureRenderTarget2D* RenderTarget);
	void UpdateCursorPositionCache();
	void ExecuteUbergraph_wid_ViewableNote_Text(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetNoteAspectRatioModifier_AspectRatioModifier, const struct FVector2D& CallFunc_GetNoteOriginalSize_Size, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float K2Node_CustomEvent_NewScale, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, const struct FVector2D& K2Node_CustomEvent_Offset, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_GetViewportScale_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetPosition_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_FClamp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class UTexture2D* K2Node_CustomEvent_Texture, class UTextureRenderTarget2D* K2Node_CustomEvent_RenderTarget, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, float CallFunc_GetMousePositionScaledByDPI_LocationX, float CallFunc_GetMousePositionScaledByDPI_LocationY, bool CallFunc_GetMousePositionScaledByDPI_ReturnValue, float CallFunc_GetViewportScale_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_1, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_GetViewportScale_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_4, bool CallFunc_IsHovered_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_3, float CallFunc_Multiply_IntFloat_ReturnValue_2, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_2);
};

}


