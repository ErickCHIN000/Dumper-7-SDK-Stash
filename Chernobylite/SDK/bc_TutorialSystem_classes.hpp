#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xC8 - 0xB0)
// BlueprintGeneratedClass bc_TutorialSystem.bc_TutorialSystem_C
class Ubc_TutorialSystem_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCanvasRenderTarget2D*                 RenderTarget;                                      // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DynamicTutorial;                                   // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Ubc_TutorialSystem_C* GetDefaultObj();

	void Clear();
	void Draw(const struct FVector2D& Min, const struct FVector2D& Max);
	void Begin(class URetainerBox* RB);
	void ReceiveBeginPlay();
	void End(class URetainerBox* RB);
	void DrawWidget(TArray<class UWidget*>& Widget);
	void ExecuteUbergraph_bc_TutorialSystem(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector2D& K2Node_CustomEvent_Min, const struct FVector2D& K2Node_CustomEvent_Max, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, int32 CallFunc_GetSize_Width, int32 CallFunc_GetSize_Height, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class URetainerBox* K2Node_CustomEvent_RB_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class URetainerBox* K2Node_CustomEvent_RB, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue_1, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1, TArray<class UWidget*>& K2Node_CustomEvent_Widget, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetAbsoluteSize_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue);
};

}


