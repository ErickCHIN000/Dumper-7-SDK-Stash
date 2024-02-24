#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x98 - 0x30)
// BlueprintGeneratedClass PDA_FluxCoastlineState.PDA_FluxCoastlineState_C
class UPDA_FluxCoastlineState_C : public UPrimaryDataAsset
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FIntPoint                             WorldResolution;                                   // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WorldPixelSize;                                    // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              WorldGroundMap;                                    // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AreaLocation;                                      // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AreaSize;                                          // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              WorldCoastlineMap;                                 // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CaptureOffset;                                     // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CoastWidth;                                        // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPDA_FluxCoastlineState_C* GetDefaultObj();

	void CopyPropertiesToObject(class UObject* Destination, bool* Done, class UPDA_FluxCoastlineState_C* TargetObject, class UPDA_FluxCoastlineState_C* K2Node_DynamicCast_AsPDA_Flux_Coastline_State, bool K2Node_DynamicCast_bSuccess);
	void GetExternalReferences(TArray<class UTexture*>* Objects, const TArray<class UTexture*>& Temp, class UTexture* Temp_object_Variable, TArray<class UTexture*>& K2Node_MakeArray_Array, bool CallFunc_Array_RemoveItem_ReturnValue);
	void GetSurfaceHeight(double* SurfaceHeight, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue);
	void ApplyMaterialData(TArray<class UMaterialInstanceDynamic*>& MaterialInstances, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_6, double CallFunc_Multiply_IntFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_GetWorldToTextureUV_WorldToTextureUV, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_6, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_GetPixelSize_WorldToSimulationUV, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	void GetVolumeTransform(const struct FVector& ExtraSize, const struct FVector& Scale, double ZOffsetScale, struct FTransform* NewParam, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void GetPixelSize(struct FLinearColor* WorldToSimulationUV, const struct FVector2D& CallFunc_Conv_IntPointToVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_MakeColor_B_ImplicitCast, float CallFunc_MakeColor_A_ImplicitCast, float CallFunc_MakeColor_R_ImplicitCast, float CallFunc_MakeColor_G_ImplicitCast);
	void GetWorldToTextureUV(struct FLinearColor* WorldToTextureUV, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_MakeColor_B_ImplicitCast, float CallFunc_MakeColor_A_ImplicitCast, float CallFunc_MakeColor_R_ImplicitCast, float CallFunc_MakeColor_G_ImplicitCast);
	void GetTextureSize(struct FIntPoint* Resolution, class UTextureRenderTarget2D* K2Node_DynamicCast_AsTexture_Render_Target_2D, bool K2Node_DynamicCast_bSuccess, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, const struct FIntPoint& K2Node_MakeStruct_IntPoint, const struct FIntPoint& K2Node_MakeStruct_IntPoint_1);
	void ApplyNiagaraData(class UNiagaraComponent* NiagaraSystem, bool UseGround, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_GetSurfaceHeight_SurfaceHeight, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2);
	void SetTextures(class UTexture* WorldCoastline, class UTexture* WorldGround);
	void SetDomain(const struct FVector& Location, const struct FVector& Size, const struct FIntPoint& Resolution, double PixelSize, double CaptureOffset, double Width);
	void ClearExternalReferences();
	void ExecuteUbergraph_PDA_FluxCoastlineState(int32 EntryPoint);
};

}


