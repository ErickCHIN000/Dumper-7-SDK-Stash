#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x154 (0x414 - 0x2C0)
// WidgetBlueprintGeneratedClass UMG_RadialMenu.UMG_RadialMenu_C
class UUMG_RadialMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                RadialBackground;                                  // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RadiusDebug;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RootOverlay;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Segments;                                          // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1A2B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MaterialBase;                                      // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       IndexRaw;                                          // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DynaMat;                                           // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   Children;                                          // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         AllowResizing;                                     // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ItemOffsetRadius;                                  // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SelectionChanged;                                  // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class APlayerController*                     InputController;                                   // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EJoystickTypes                    JoystickToUse;                                     // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A56[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MouseDeadzone;                                     // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInDeadzone;                                       // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            EnteredDeadzone;                                   // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ExitedDeadzone;                                    // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             CurrentInput;                                      // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       JoystickDeadzone;                                  // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DefaultToMouseIfNoJoystick;                        // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A6C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DefaultPlayerIndex;                                // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         UseDeadzoneEvents;                                 // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A75[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SelectionChangedSound;                             // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoCenterMouse;                                   // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         AutoRotateForUp;                                   // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseCustomInput;                                   // 0x3AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A79[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CustomInput;                                       // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseCustomTexture;                                  // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A7D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              RadialTexture;                                     // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         UseCustomColors;                                   // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A80[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          InnterRingColor;                                   // 0x3D4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          OuterRingColor;                                    // 0x3E4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          RingMainColor;                                     // 0x3F4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UnhighlightColor;                                  // 0x404(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_RadialMenu_C* GetDefaultObj();

	void UpdateMaterialVisuals();
	void GetCustomInput(struct FVector2D* Input, bool* Valid, double CallFunc_VSize2D_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetCustomInput(const struct FVector2D& CustomInput);
	void UpdateDirectionWithCustomInput();
	void RemoveChildIndexFromRadialMenu(int32 IndexToRemove, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item);
	void RemoveChildWidgetFromRadialMenu(class UUserWidget*& ItemToFind, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	class FText DebugIndex(int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	struct FVector2D FixInputRotation(const struct FVector2D& Input, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, double CallFunc_GetSectionDegreeSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, float CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast);
	void FixMainRotation(double CallFunc_GetSectionDegreeSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
	void AutoRegisterToInput(bool Temp_bool_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* K2Node_Select_Default, bool CallFunc_RegisterPlayerInput_Success);
	void UpdateInput(double CallFunc_VSize2D_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_VSize2D_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1);
	void RegisterPlayerInput(class APlayerController* Controller, bool* Success, TScriptInterface<class IIRadialInput_C> K2Node_DynamicCast_AsIRadial_Input, bool K2Node_DynamicCast_bSuccess);
	void UpdateDirectionWithJoystick(TScriptInterface<class IIRadialInput_C> K2Node_DynamicCast_AsIRadial_Input, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_GetJoystickDirection_StickInput, double CallFunc_VSize2D_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue);
	void GetCurrentIndex(int32* Index, bool* Valid, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void GetChild(int32 Index, class UUserWidget** Output, bool* Success, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item);
	void SetIndex(int32 Index, int32 NewIndex, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetSelectedWidget_Output, class UUserWidget* CallFunc_GetSelectedWidget_Output_1, TScriptInterface<class IIRadialSlot_C> K2Node_DynamicCast_AsIRadial_Slot, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IIRadialSlot_C> K2Node_DynamicCast_AsIRadial_Slot_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void UpdateAllChildrenPositions(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateChildPosition(int32 Index, const struct FVector& Out_dir, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_GetSectionDegreeSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, double CallFunc_GetSectionDegreeSize_ReturnValue_1, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast, float CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast_1);
	void ClearChildren(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetSelectedWidget(class UUserWidget** Output, class UUserWidget* CallFunc_Array_Get_Item);
	void AddChildToRadialMenu(class UUserWidget* Content, bool* Success, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void UpdateDirectionWithMouseCursor(const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_GetViewportScale_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, float CallFunc_GetViewportScale_ReturnValue_1, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_VSize2D_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_Vector2DFloat_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
	double GetSectionDegreeSize(double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue);
	void SetInputDirection(const struct FVector2D& Direction);
	void Construct();
	void UpdateSegments(int32 Segments);
	void InDeadzone(bool InDeadzone);
	void UpdateMaterials();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_RadialMenu(int32 EntryPoint, const struct FVector2D& K2Node_CustomEvent_Direction, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FVector2D& CallFunc_FixInputRotation_ReturnValue, int32 K2Node_CustomEvent_Segments, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, double CallFunc_GetSectionDegreeSize_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool K2Node_CustomEvent_InDeadzone, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Conv_BoolToDouble_ReturnValue, double CallFunc_DegAtan2_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2);
	void ExitedDeadzone__DelegateSignature();
	void EnteredDeadzone__DelegateSignature();
	void SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelection);
};

}


