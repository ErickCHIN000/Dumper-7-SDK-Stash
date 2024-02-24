#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_BaseProgressBar.WB_BaseProgressBar_C
// (None)

class UClass* UWB_BaseProgressBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_BaseProgressBar_C");

	return Clss;
}


// WB_BaseProgressBar_C WB_BaseProgressBar.Default__WB_BaseProgressBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_BaseProgressBar_C* UWB_BaseProgressBar_C::GetDefaultObj()
{
	static class UWB_BaseProgressBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_BaseProgressBar_C*>(UWB_BaseProgressBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetPBsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInIsEnabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetPBsEnabled(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetPBsEnabled");

	Params::UWB_BaseProgressBar_C_SetPBsEnabled_Params Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetImgsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInIsEnabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetImgsEnabled(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetImgsEnabled");

	Params::UWB_BaseProgressBar_C_SetImgsEnabled_Params Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetInstanceBlendMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Img                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    BlendMask                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetInstanceBlendMask(class UImage* Img, class UTexture* BlendMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetInstanceBlendMask");

	Params::UWB_BaseProgressBar_C_SetInstanceBlendMask_Params Parms{};

	Parms.Img = Img;
	Parms.BlendMask = BlendMask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetImageBlendMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     BlendMask                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Mask                                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_DynamicCast_AsTexture                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetImageBlendMask(class UObject* BlendMask, class UTexture* Mask, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetImageBlendMask");

	Params::UWB_BaseProgressBar_C_SetImageBlendMask_Params Parms{};

	Parms.BlendMask = BlendMask;
	Parms.Mask = Mask;
	Parms.K2Node_DynamicCast_AsTexture = K2Node_DynamicCast_AsTexture;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetTextureParameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Img                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        ParameterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetTextureParameter(class UImage* Img, class FName ParameterName, class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetTextureParameter");

	Params::UWB_BaseProgressBar_C_SetTextureParameter_Params Parms{};

	Parms.Img = Img;
	Parms.ParameterName = ParameterName;
	Parms.Value = Value;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetInstancePercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Img                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetInstancePercent(class UImage* Img, double Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetInstancePercent");

	Params::UWB_BaseProgressBar_C_SetInstancePercent_Params Parms{};

	Parms.Img = Img;
	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetScalarParameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Img                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        ParameterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetScalarParameter(class UImage* Img, class FName ParameterName, double Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetScalarParameter");

	Params::UWB_BaseProgressBar_C_SetScalarParameter_Params Parms{};

	Parms.Img = Img;
	Parms.ParameterName = ParameterName;
	Parms.Value = Value;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetImagePercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetImagePercent(double Percent, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetImagePercent");

	Params::UWB_BaseProgressBar_C_SetImagePercent_Params Parms{};

	Parms.Percent = Percent;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.GetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_GetCurrentProgressBar_AsProgress_Bar                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Option_0_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::GetPercent(double* Percent, bool Temp_bool_Variable, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar, double K2Node_Select_Default, double K2Node_Select_Option_0_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "GetPercent");

	Params::UWB_BaseProgressBar_C_GetPercent_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCurrentProgressBar_AsProgress_Bar = CallFunc_GetCurrentProgressBar_AsProgress_Bar;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Option_0_ImplicitCast = K2Node_Select_Option_0_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.GetCurrentProgressBar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UProgressBar*                AsProgress_Bar                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                K2Node_DynamicCast_AsProgress_Bar                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::GetCurrentProgressBar(class UProgressBar** AsProgress_Bar, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UProgressBar* K2Node_DynamicCast_AsProgress_Bar, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "GetCurrentProgressBar");

	Params::UWB_BaseProgressBar_C_GetCurrentProgressBar_Params Parms{};

	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsProgress_Bar = K2Node_DynamicCast_AsProgress_Bar;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsProgress_Bar != nullptr)
		*AsProgress_Bar = Parms.AsProgress_Bar;

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetBarFillType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressBarFillType    BarFillType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseShader                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetBarFillType(enum class EProgressBarFillType BarFillType, bool bUseShader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetBarFillType");

	Params::UWB_BaseProgressBar_C_SetBarFillType_Params Parms{};

	Parms.BarFillType = BarFillType;
	Parms.bUseShader = bUseShader;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InPercent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetPercent(double InPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetPercent");

	Params::UWB_BaseProgressBar_C_SetPercent_Params Parms{};

	Parms.InPercent = InPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillColorAndOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetFillColorAndOpacity");

	Params::UWB_BaseProgressBar_C_SetFillColorAndOpacity_Params Parms{};

	Parms.InColor = InColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageTiling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetFillImageTiling(enum class ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetFillImageTiling");

	Params::UWB_BaseProgressBar_C_SetFillImageTiling_Params Parms{};

	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   FillImageSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetFillImageSize(const struct FVector2D& FillImageSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetFillImageSize");

	Params::UWB_BaseProgressBar_C_SetFillImageSize_Params Parms{};

	Parms.FillImageSize = FillImageSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     FillImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetFillImage(class UObject* FillImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetFillImage");

	Params::UWB_BaseProgressBar_C_SetFillImage_Params Parms{};

	Parms.FillImage = FillImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetIsMarquee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InbIsMarquee                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetIsMarquee(bool InbIsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetIsMarquee");

	Params::UWB_BaseProgressBar_C_SetIsMarquee_Params Parms{};

	Parms.InbIsMarquee = InbIsMarquee;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetMarqueeImage(class UObject* Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetMarqueeImage");

	Params::UWB_BaseProgressBar_C_SetMarqueeImage_Params Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeImageSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Image_Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetMarqueeImageSize(const struct FVector2D& Image_Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetMarqueeImageSize");

	Params::UWB_BaseProgressBar_C_SetMarqueeImageSize_Params Parms{};

	Parms.Image_Size = Image_Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeTint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetMarqueeTint(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetMarqueeTint");

	Params::UWB_BaseProgressBar_C_SetMarqueeTint_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeDrawAs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushDrawType     Draw_As                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetMarqueeDrawAs(enum class ESlateBrushDrawType Draw_As)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetMarqueeDrawAs");

	Params::UWB_BaseProgressBar_C_SetMarqueeDrawAs_Params Parms{};

	Parms.Draw_As = Draw_As;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeTiling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetMarqueeTiling(enum class ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetMarqueeTiling");

	Params::UWB_BaseProgressBar_C_SetMarqueeTiling_Params Parms{};

	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetBackgroundTint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Tint                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetBackgroundTint(const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetBackgroundTint");

	Params::UWB_BaseProgressBar_C_SetBackgroundTint_Params Parms{};

	Parms.Tint = Tint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageMargin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Margin                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetFillImageMargin(double Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetFillImageMargin");

	Params::UWB_BaseProgressBar_C_SetFillImageMargin_Params Parms{};

	Parms.Margin = Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageDrawAs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushDrawType     Draw_As                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::SetFillImageDrawAs(enum class ESlateBrushDrawType Draw_As)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "SetFillImageDrawAs");

	Params::UWB_BaseProgressBar_C_SetFillImageDrawAs_Params Parms{};

	Parms.Draw_As = Draw_As;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.ExecuteUbergraph_WB_BaseProgressBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    K2Node_CustomEvent_BarFillType                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUseShader                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_GetCurrentProgressBar_AsProgress_Bar                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_InPercent                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_GetCurrentProgressBar_AsProgress_Bar_1                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_InColor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     K2Node_CustomEvent_Tiling_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_GetCurrentProgressBar_AsProgress_Bar_2                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FProgressBarStyle           CallFunc_SetFillImageTiling_Output_Get                           (None)
// struct FVector2D                   K2Node_CustomEvent_FillImageSize                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_GetCurrentProgressBar_AsProgress_Bar_3                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_FillImage                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_GetCurrentProgressBar_AsProgress_Bar_4                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_GetCurrentProgressBar_AsProgress_Bar_5                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_InbIsMarquee                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Image                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_GetCurrentProgressBar_AsProgress_Bar_6                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_Image_Size                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_GetCurrentProgressBar_AsProgress_Bar_7                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_GetCurrentProgressBar_AsProgress_Bar_8                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushDrawType     K2Node_CustomEvent_Draw_As_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_GetCurrentProgressBar_AsProgress_Bar_9                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     K2Node_CustomEvent_Tiling                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_GetCurrentProgressBar_AsProgress_Bar_10                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Tint                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_GetCurrentProgressBar_AsProgress_Bar_11                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// double                             K2Node_CustomEvent_Margin                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_GetCurrentProgressBar_AsProgress_Bar_12                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushDrawType     K2Node_CustomEvent_Draw_As                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_GetCurrentProgressBar_AsProgress_Bar_13                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_15                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_16                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_17                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UProgressBar*>        K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UProgressBar*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                CallFunc_GetCurrentProgressBar_AsProgress_Bar_14                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_18                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BaseProgressBar_C::ExecuteUbergraph_WB_BaseProgressBar(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, bool Temp_bool_Variable, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable_7, enum class EProgressBarFillType K2Node_CustomEvent_BarFillType, bool K2Node_CustomEvent_bUseShader, enum class EProgressBarFillType Temp_byte_Variable, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar, double K2Node_CustomEvent_InPercent, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_1, const struct FLinearColor& K2Node_CustomEvent_InColor, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling_1, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_2, const struct FProgressBarStyle& CallFunc_SetFillImageTiling_Output_Get, const struct FVector2D& K2Node_CustomEvent_FillImageSize, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_3, class UObject* K2Node_CustomEvent_FillImage, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_4, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_5, bool K2Node_CustomEvent_InbIsMarquee, class UObject* K2Node_CustomEvent_Image, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_6, int32 Temp_int_Variable_8, const struct FVector2D& K2Node_CustomEvent_Image_Size, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_7, const struct FLinearColor& K2Node_CustomEvent_Color, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_8, enum class ESlateBrushDrawType K2Node_CustomEvent_Draw_As_1, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_9, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_10, int32 Temp_int_Variable_9, const struct FLinearColor& K2Node_CustomEvent_Tint, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_11, const struct FSlateColor& K2Node_MakeStruct_SlateColor, double K2Node_CustomEvent_Margin, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_12, enum class ESlateBrushDrawType K2Node_CustomEvent_Draw_As, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_13, int32 Temp_int_Variable_10, int32 Temp_int_Variable_11, enum class EProgressBarFillType Temp_byte_Variable_1, int32 Temp_int_Variable_12, int32 Temp_int_Variable_13, int32 Temp_int_Variable_14, int32 Temp_int_Variable_15, int32 Temp_int_Variable_16, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, int32 Temp_int_Variable_17, TArray<class UProgressBar*>& K2Node_MakeArray_Array, class UProgressBar* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_14, bool Temp_bool_Variable_2, int32 K2Node_Select_Default_1, int32 Temp_int_Variable_18, int32 K2Node_Select_Default_2, int32 K2Node_Select_Default_3, int32 K2Node_Select_Default_4, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_BaseProgressBar_C", "ExecuteUbergraph_WB_BaseProgressBar");

	Params::UWB_BaseProgressBar_C_ExecuteUbergraph_WB_BaseProgressBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.K2Node_CustomEvent_BarFillType = K2Node_CustomEvent_BarFillType;
	Parms.K2Node_CustomEvent_bUseShader = K2Node_CustomEvent_bUseShader;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetCurrentProgressBar_AsProgress_Bar = CallFunc_GetCurrentProgressBar_AsProgress_Bar;
	Parms.K2Node_CustomEvent_InPercent = K2Node_CustomEvent_InPercent;
	Parms.CallFunc_GetCurrentProgressBar_AsProgress_Bar_1 = CallFunc_GetCurrentProgressBar_AsProgress_Bar_1;
	Parms.K2Node_CustomEvent_InColor = K2Node_CustomEvent_InColor;
	Parms.K2Node_CustomEvent_Tiling_1 = K2Node_CustomEvent_Tiling_1;
	Parms.CallFunc_GetCurrentProgressBar_AsProgress_Bar_2 = CallFunc_GetCurrentProgressBar_AsProgress_Bar_2;
	Parms.CallFunc_SetFillImageTiling_Output_Get = CallFunc_SetFillImageTiling_Output_Get;
	Parms.K2Node_CustomEvent_FillImageSize = K2Node_CustomEvent_FillImageSize;
	Parms.CallFunc_GetCurrentProgressBar_AsProgress_Bar_3 = CallFunc_GetCurrentProgressBar_AsProgress_Bar_3;
	Parms.K2Node_CustomEvent_FillImage = K2Node_CustomEvent_FillImage;
	Parms.CallFunc_GetCurrentProgressBar_AsProgress_Bar_4 = CallFunc_GetCurrentProgressBar_AsProgress_Bar_4;
	Parms.CallFunc_GetCurrentProgressBar_AsProgress_Bar_5 = CallFunc_GetCurrentProgressBar_AsProgress_Bar_5;
	Parms.K2Node_CustomEvent_InbIsMarquee = K2Node_CustomEvent_InbIsMarquee;
	Parms.K2Node_CustomEvent_Image = K2Node_CustomEvent_Image;
	Parms.CallFunc_GetCurrentProgressBar_AsProgress_Bar_6 = CallFunc_GetCurrentProgressBar_AsProgress_Bar_6;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.K2Node_CustomEvent_Image_Size = K2Node_CustomEvent_Image_Size;
	Parms.CallFunc_GetCurrentProgressBar_AsProgress_Bar_7 = CallFunc_GetCurrentProgressBar_AsProgress_Bar_7;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.CallFunc_GetCurrentProgressBar_AsProgress_Bar_8 = CallFunc_GetCurrentProgressBar_AsProgress_Bar_8;
	Parms.K2Node_CustomEvent_Draw_As_1 = K2Node_CustomEvent_Draw_As_1;
	Parms.CallFunc_GetCurrentProgressBar_AsProgress_Bar_9 = CallFunc_GetCurrentProgressBar_AsProgress_Bar_9;
	Parms.K2Node_CustomEvent_Tiling = K2Node_CustomEvent_Tiling;
	Parms.CallFunc_GetCurrentProgressBar_AsProgress_Bar_10 = CallFunc_GetCurrentProgressBar_AsProgress_Bar_10;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.K2Node_CustomEvent_Tint = K2Node_CustomEvent_Tint;
	Parms.CallFunc_GetCurrentProgressBar_AsProgress_Bar_11 = CallFunc_GetCurrentProgressBar_AsProgress_Bar_11;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_CustomEvent_Margin = K2Node_CustomEvent_Margin;
	Parms.CallFunc_GetCurrentProgressBar_AsProgress_Bar_12 = CallFunc_GetCurrentProgressBar_AsProgress_Bar_12;
	Parms.K2Node_CustomEvent_Draw_As = K2Node_CustomEvent_Draw_As;
	Parms.CallFunc_GetCurrentProgressBar_AsProgress_Bar_13 = CallFunc_GetCurrentProgressBar_AsProgress_Bar_13;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.Temp_int_Variable_11 = Temp_int_Variable_11;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Variable_12 = Temp_int_Variable_12;
	Parms.Temp_int_Variable_13 = Temp_int_Variable_13;
	Parms.Temp_int_Variable_14 = Temp_int_Variable_14;
	Parms.Temp_int_Variable_15 = Temp_int_Variable_15;
	Parms.Temp_int_Variable_16 = Temp_int_Variable_16;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable_17 = Temp_int_Variable_17;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentProgressBar_AsProgress_Bar_14 = CallFunc_GetCurrentProgressBar_AsProgress_Bar_14;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_int_Variable_18 = Temp_int_Variable_18;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


