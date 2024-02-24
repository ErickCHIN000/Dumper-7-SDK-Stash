#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPL_FluidFlux.BPL_FluidFlux_C
class UBPL_FluidFlux_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPL_FluidFlux_C* GetDefaultObj();

	void SetTexture2DConfig(class UTexture2D* RenderTargetObject, enum class ETextureFilter Filter, bool SRGB, enum class ETextureAddress Address_X, enum class ETextureAddress Address_Y, enum class ETextureMipGenSettings Mip_Gen_Settings, class UObject* __WorldContext);
	void IsPointPowerOfTwo(const struct FIntPoint& Value, class UObject* __WorldContext, bool* Result, bool CallFunc_IsValuePowerOfTwo_Result, bool CallFunc_IsValuePowerOfTwo_Result_1, bool CallFunc_BooleanAND_ReturnValue);
	void IsValuePowerOfTwo(int32 Value, class UObject* __WorldContext, bool* Result, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_And_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetRectTransform2D(class UMaterialInstanceDynamic*& Target, struct FTransform& InTransform, class UObject* __WorldContext, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetForwardVector_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_MakeColor_B_ImplicitCast, float CallFunc_MakeColor_A_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float CallFunc_MakeColor_R_ImplicitCast, float CallFunc_MakeColor_G_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast);
	void SetRenderTargetConfig(class UTextureRenderTarget2D* RenderTargetObject, enum class ETextureFilter Filter, bool SRGB, enum class ETextureAddress Address_X, enum class ETextureAddress Address_Y, class UObject* __WorldContext);
	void MakeVolumeLocalTransform(const struct FVector& ExtraSize, const struct FVector& Scale, double ZOffsetScale, class UObject* __WorldContext, struct FTransform* NewParam, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void GetUndefiniedHeight(class UObject* __WorldContext, double* NewParam);
	void GetEngineVersionInt(class UObject* __WorldContext, int32* Integer, const class FString& CallFunc_GetEngineVersion_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue);
	void GetBordersVector(int32 StateAreaBorders, class UObject* __WorldContext, struct FLinearColor* LinearColor, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue_1, int32 CallFunc_And_IntInt_ReturnValue, int32 CallFunc_And_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, double CallFunc_Conv_BoolToDouble_ReturnValue, double CallFunc_Conv_BoolToDouble_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue_2, int32 CallFunc_MakeLiteralInt_ReturnValue_3, int32 CallFunc_And_IntInt_ReturnValue_2, int32 CallFunc_And_IntInt_ReturnValue_3, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue_3, double CallFunc_Conv_BoolToDouble_ReturnValue_2, double CallFunc_Conv_BoolToDouble_ReturnValue_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast);
	void CheckRenderTarget(int32 Width, int32 Height, enum class ETextureRenderTargetFormat Format, class UTextureRenderTarget2D* CurrentRenderTarget, class UObject* __WorldContext, bool* TheSame, class UTextureRenderTarget2D* TextureRenderTarget, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void RecreateRenderTarget(class UTextureRenderTarget2D* CurrentTexture, int32 Width, int32 Height, enum class ETextureRenderTargetFormat Format, const struct FLinearColor& ClearColor, uint8 LOD, bool GenerateMipmaps, class UObject* __WorldContext, class UTextureRenderTarget2D** NewTexture, int32 D, int32 H, int32 W, class UTextureRenderTarget2D* TextureRenderTarget, double CallFunc_Conv_ByteToDouble_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, bool CallFunc_CheckRenderTarget_TheSame);
};

}


