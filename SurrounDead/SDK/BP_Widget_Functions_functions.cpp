#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Widget_Functions.BP_Widget_Functions_C
// (None)

class UClass* UBP_Widget_Functions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Widget_Functions_C");

	return Clss;
}


// BP_Widget_Functions_C BP_Widget_Functions.Default__BP_Widget_Functions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Widget_Functions_C* UBP_Widget_Functions_C::GetDefaultObj()
{
	static class UBP_Widget_Functions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Widget_Functions_C*>(UBP_Widget_Functions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.RandomizePositiveNegativeFloat
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UBP_Widget_Functions_C::RandomizePositiveNegativeFloat(double Value, class UObject* __WorldContext, bool Temp_bool_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_RandomBool_ReturnValue, double K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "RandomizePositiveNegativeFloat");

	Params::UBP_Widget_Functions_C_RandomizePositiveNegativeFloat_Params Parms{};

	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetBorderBrushTiling
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBorder*                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UBP_Widget_Functions_C::SetBorderBrushTiling(class UBorder* Target, enum class ESlateBrushTileType Tiling, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetBorderBrushTiling");

	Params::UBP_Widget_Functions_C_SetBorderBrushTiling_Params Parms{};

	Parms.Target = Target;
	Parms.Tiling = Tiling;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetBorderBrushSize
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBorder*                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FDeprecateSlateVector2D     K2Node_MakeStruct_ImageSize_ImplicitCast                         (NoDestructor, HasGetValueTypeHash)

void UBP_Widget_Functions_C::SetBorderBrushSize(class UBorder* Target, const struct FVector2D& Size, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetBorderBrushSize");

	Params::UBP_Widget_Functions_C_SetBorderBrushSize_Params Parms{};

	Parms.Target = Target;
	Parms.Size = Size;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_ImageSize_ImplicitCast = K2Node_MakeStruct_ImageSize_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetBorderBrush
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBorder*                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Brush                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UBP_Widget_Functions_C::SetBorderBrush(class UBorder* Target, class UObject* Brush, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetBorderBrush");

	Params::UBP_Widget_Functions_C_SetBorderBrush_Params Parms{};

	Parms.Target = Target;
	Parms.Brush = Brush;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetImageBrushSize
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FDeprecateSlateVector2D     K2Node_MakeStruct_ImageSize_ImplicitCast                         (NoDestructor, HasGetValueTypeHash)

void UBP_Widget_Functions_C::SetImageBrushSize(class UImage* Target, const struct FVector2D& Size, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetImageBrushSize");

	Params::UBP_Widget_Functions_C_SetImageBrushSize_Params Parms{};

	Parms.Target = Target;
	Parms.Size = Size;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_ImageSize_ImplicitCast = K2Node_MakeStruct_ImageSize_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetImageBrushTiling
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UBP_Widget_Functions_C::SetImageBrushTiling(class UImage* Target, enum class ESlateBrushTileType Tiling, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetImageBrushTiling");

	Params::UBP_Widget_Functions_C_SetImageBrushTiling_Params Parms{};

	Parms.Target = Target;
	Parms.Tiling = Tiling;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetImageBrush
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Brush                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UBP_Widget_Functions_C::SetImageBrush(class UImage* Target, class UObject* Brush, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetImageBrush");

	Params::UBP_Widget_Functions_C_SetImageBrush_Params Parms{};

	Parms.Target = Target;
	Parms.Brush = Brush;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImageDrawAs
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushDrawType     DrawAs                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)

void UBP_Widget_Functions_C::SetFillImageDrawAs(class UProgressBar* Target, enum class ESlateBrushDrawType DrawAs, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetFillImageDrawAs");

	Params::UBP_Widget_Functions_C_SetFillImageDrawAs_Params Parms{};

	Parms.Target = Target;
	Parms.DrawAs = DrawAs;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImageMargin
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Margin                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)
// float                              K2Node_MakeStruct_Left_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Top_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Right_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Bottom_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Widget_Functions_C::SetFillImageMargin(class UProgressBar* Target, double Margin, class UObject* __WorldContext, double CallFunc_MakeLiteralDouble_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle, float K2Node_MakeStruct_Left_ImplicitCast, float K2Node_MakeStruct_Top_ImplicitCast, float K2Node_MakeStruct_Right_ImplicitCast, float K2Node_MakeStruct_Bottom_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetFillImageMargin");

	Params::UBP_Widget_Functions_C_SetFillImageMargin_Params Parms{};

	Parms.Target = Target;
	Parms.Margin = Margin;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;
	Parms.K2Node_MakeStruct_Left_ImplicitCast = K2Node_MakeStruct_Left_ImplicitCast;
	Parms.K2Node_MakeStruct_Top_ImplicitCast = K2Node_MakeStruct_Top_ImplicitCast;
	Parms.K2Node_MakeStruct_Right_ImplicitCast = K2Node_MakeStruct_Right_ImplicitCast;
	Parms.K2Node_MakeStruct_Bottom_ImplicitCast = K2Node_MakeStruct_Bottom_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetBackgroundTint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 Tint                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)

void UBP_Widget_Functions_C::SetBackgroundTint(class UProgressBar* Target, const struct FSlateColor& Tint, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetBackgroundTint");

	Params::UBP_Widget_Functions_C_SetBackgroundTint_Params Parms{};

	Parms.Target = Target;
	Parms.Tint = Tint;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeMirroring
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushMirrorType   Mirroring                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)

void UBP_Widget_Functions_C::SetMarqueeMirroring(class UProgressBar* Target, enum class ESlateBrushMirrorType Mirroring, class UObject* __WorldContext, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetMarqueeMirroring");

	Params::UBP_Widget_Functions_C_SetMarqueeMirroring_Params Parms{};

	Parms.Target = Target;
	Parms.Mirroring = Mirroring;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeTiling
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)

void UBP_Widget_Functions_C::SetMarqueeTiling(class UProgressBar* Target, enum class ESlateBrushTileType Tiling, class UObject* __WorldContext, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetMarqueeTiling");

	Params::UBP_Widget_Functions_C_SetMarqueeTiling_Params Parms{};

	Parms.Target = Target;
	Parms.Tiling = Tiling;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeDrawAs
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushDrawType     Draw_As                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)

void UBP_Widget_Functions_C::SetMarqueeDrawAs(class UProgressBar* Target, enum class ESlateBrushDrawType Draw_As, class UObject* __WorldContext, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetMarqueeDrawAs");

	Params::UBP_Widget_Functions_C_SetMarqueeDrawAs_Params Parms{};

	Parms.Target = Target;
	Parms.Draw_As = Draw_As;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeTint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Tint                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)

void UBP_Widget_Functions_C::SetMarqueeTint(class UProgressBar* Target, const struct FLinearColor& Tint, class UObject* __WorldContext, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetMarqueeTint");

	Params::UBP_Widget_Functions_C_SetMarqueeTint_Params Parms{};

	Parms.Target = Target;
	Parms.Tint = Tint;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeMargin
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     Margin                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)

void UBP_Widget_Functions_C::SetMarqueeMargin(class UProgressBar* Target, const struct FMargin& Margin, class UObject* __WorldContext, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetMarqueeMargin");

	Params::UBP_Widget_Functions_C_SetMarqueeMargin_Params Parms{};

	Parms.Target = Target;
	Parms.Margin = Margin;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeImageSize
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Image_Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)
// struct FDeprecateSlateVector2D     K2Node_SetFieldsInStruct_ImageSize_ImplicitCast                  (NoDestructor, HasGetValueTypeHash)

void UBP_Widget_Functions_C::SetMarqueeImageSize(class UProgressBar* Target, const struct FVector2D& Image_Size, class UObject* __WorldContext, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle, const struct FDeprecateSlateVector2D& K2Node_SetFieldsInStruct_ImageSize_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetMarqueeImageSize");

	Params::UBP_Widget_Functions_C_SetMarqueeImageSize_Params Parms{};

	Parms.Target = Target;
	Parms.Image_Size = Image_Size;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;
	Parms.K2Node_SetFieldsInStruct_ImageSize_ImplicitCast = K2Node_SetFieldsInStruct_ImageSize_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeImage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)

void UBP_Widget_Functions_C::SetMarqueeImage(class UProgressBar* Target, class UObject* Image, class UObject* __WorldContext, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetMarqueeImage");

	Params::UBP_Widget_Functions_C_SetMarqueeImage_Params Parms{};

	Parms.Target = Target;
	Parms.Image = Image;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.GetFillImage
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     FillImage                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Widget_Functions_C::GetFillImage(class UProgressBar* Target, class UObject* __WorldContext, class UObject** FillImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "GetFillImage");

	Params::UBP_Widget_Functions_C_GetFillImage_Params Parms{};

	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FillImage != nullptr)
		*FillImage = Parms.FillImage;

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImageTiling
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FProgressBarStyle           Output_Get                                                       (Parm, OutParm)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)

void UBP_Widget_Functions_C::SetFillImageTiling(class UProgressBar* Target, enum class ESlateBrushTileType Tiling, class UObject* __WorldContext, struct FProgressBarStyle* Output_Get, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetFillImageTiling");

	Params::UBP_Widget_Functions_C_SetFillImageTiling_Params Parms{};

	Parms.Target = Target;
	Parms.Tiling = Tiling;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = std::move(Parms.Output_Get);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImageSize
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   FillImageSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)
// struct FDeprecateSlateVector2D     K2Node_MakeStruct_ImageSize_ImplicitCast                         (NoDestructor, HasGetValueTypeHash)

void UBP_Widget_Functions_C::SetFillImageSize(class UProgressBar* Target, const struct FVector2D& FillImageSize, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetFillImageSize");

	Params::UBP_Widget_Functions_C_SetFillImageSize_Params Parms{};

	Parms.Target = Target;
	Parms.FillImageSize = FillImageSize;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;
	Parms.K2Node_MakeStruct_ImageSize_ImplicitCast = K2Node_MakeStruct_ImageSize_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     FillImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)

void UBP_Widget_Functions_C::SetFillImage(class UProgressBar* Target, class UObject* FillImage, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetFillImage");

	Params::UBP_Widget_Functions_C_SetFillImage_Params Parms{};

	Parms.Target = Target;
	Parms.FillImage = FillImage;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SubtractBrightnessValue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                InColor                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_H                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_S                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_V                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_A                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_HSVToRGB_V_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UBP_Widget_Functions_C::SubtractBrightnessValue(const struct FLinearColor& InColor, double Value, class UObject* __WorldContext, bool Temp_bool_Variable, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, double Temp_real_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double K2Node_Select_Default, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_HSVToRGB_V_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SubtractBrightnessValue");

	Params::UBP_Widget_Functions_C_SubtractBrightnessValue_Params Parms{};

	Parms.InColor = InColor;
	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_RGBToHSV_H = CallFunc_RGBToHSV_H;
	Parms.CallFunc_RGBToHSV_S = CallFunc_RGBToHSV_S;
	Parms.CallFunc_RGBToHSV_V = CallFunc_RGBToHSV_V;
	Parms.CallFunc_RGBToHSV_A = CallFunc_RGBToHSV_A;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_HSVToRGB_ReturnValue = CallFunc_HSVToRGB_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_HSVToRGB_V_ImplicitCast = CallFunc_HSVToRGB_V_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SubtractFromColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                InColor                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_G_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_B_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UBP_Widget_Functions_C::SubtractFromColor(const struct FLinearColor& InColor, double Value, class UObject* __WorldContext, bool Temp_bool_Variable, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, double Temp_real_Variable, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, bool Temp_bool_Variable_1, double K2Node_Select_Default, double Temp_real_Variable_1, double Temp_real_Variable_2, double K2Node_Select_Default_1, bool Temp_bool_Variable_2, double K2Node_Select_Default_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SubtractFromColor");

	Params::UBP_Widget_Functions_C_SubtractFromColor_Params Parms{};

	Parms.InColor = InColor;
	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_2 = CallFunc_LessEqual_DoubleDouble_ReturnValue_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2 = CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2;
	Parms.K2Node_MakeStruct_G_ImplicitCast = K2Node_MakeStruct_G_ImplicitCast;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;
	Parms.K2Node_MakeStruct_B_ImplicitCast = K2Node_MakeStruct_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.GetSize
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USizeBox*                    SizeBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Option_1_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Option_1_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Widget_Functions_C::GetSize(class USizeBox* SizeBox, class UObject* __WorldContext, double* Width, double* Height, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, double Temp_real_Variable, bool Temp_bool_Variable_1, double K2Node_Select_Default, double Temp_real_Variable_1, double K2Node_Select_Default_1, double K2Node_Select_Option_1_ImplicitCast, double K2Node_Select_Option_1_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "GetSize");

	Params::UBP_Widget_Functions_C_GetSize_Params Parms{};

	Parms.SizeBox = SizeBox;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Option_1_ImplicitCast = K2Node_Select_Option_1_ImplicitCast;
	Parms.K2Node_Select_Option_1_ImplicitCast_1 = K2Node_Select_Option_1_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetSize
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                    SizeBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Width                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Widget_Functions_C::SetSize(class USizeBox* SizeBox, double Width, double Height, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetSize");

	Params::UBP_Widget_Functions_C_SetSize_Params Parms{};

	Parms.SizeBox = SizeBox;
	Parms.Width = Width;
	Parms.Height = Height;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.GetTexture2DSizeClamped
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                  Texture2D                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Clamp                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeY_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeX_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UBP_Widget_Functions_C::GetTexture2DSizeClamped(class UTexture2D* Texture2D, const struct FVector2D& Clamp, class UObject* __WorldContext, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "GetTexture2DSizeClamped");

	Params::UBP_Widget_Functions_C_GetTexture2DSizeClamped_Params Parms{};

	Parms.Texture2D = Texture2D;
	Parms.Clamp = Clamp;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Blueprint_GetSizeY_ReturnValue = CallFunc_Blueprint_GetSizeY_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Blueprint_GetSizeX_ReturnValue = CallFunc_Blueprint_GetSizeX_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.GetTexture2DSize
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                  Texture2D                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeY_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeX_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UBP_Widget_Functions_C::GetTexture2DSize(class UTexture2D* Texture2D, class UObject* __WorldContext, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "GetTexture2DSize");

	Params::UBP_Widget_Functions_C_GetTexture2DSize_Params Parms{};

	Parms.Texture2D = Texture2D;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Blueprint_GetSizeY_ReturnValue = CallFunc_Blueprint_GetSizeY_ReturnValue;
	Parms.CallFunc_Blueprint_GetSizeX_ReturnValue = CallFunc_Blueprint_GetSizeX_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


