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
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_Widget_Functions_C::RandomizePositiveNegativeFloat(float Value, class UObject* __WorldContext, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_RandomBool_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "RandomizePositiveNegativeFloat");

	Params::UBP_Widget_Functions_C_RandomizePositiveNegativeFloat_Params Parms{};

	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetBorderBrushTiling
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBorder*                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class UBorder*                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UBP_Widget_Functions_C::SetBorderBrushSize(class UBorder* Target, const struct FVector2D& Size, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetBorderBrushSize");

	Params::UBP_Widget_Functions_C_SetBorderBrushSize_Params Parms{};

	Parms.Target = Target;
	Parms.Size = Size;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetBorderBrush
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBorder*                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Brush                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class UImage*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UBP_Widget_Functions_C::SetImageBrushSize(class UImage* Target, const struct FVector2D& Size, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetImageBrushSize");

	Params::UBP_Widget_Functions_C_SetImageBrushSize_Params Parms{};

	Parms.Target = Target;
	Parms.Size = Size;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetImageBrushTiling
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class UImage*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Brush                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushDrawType     DrawAs                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Margin                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)

void UBP_Widget_Functions_C::SetFillImageMargin(class UProgressBar* Target, float Margin, class UObject* __WorldContext, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetFillImageMargin");

	Params::UBP_Widget_Functions_C_SetFillImageMargin_Params Parms{};

	Parms.Target = Target;
	Parms.Margin = Margin;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetBackgroundTint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 Tint                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushMirrorType   Mirroring                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushDrawType     Draw_As                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Tint                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     Margin                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Image_Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)

void UBP_Widget_Functions_C::SetMarqueeImageSize(class UProgressBar* Target, const struct FVector2D& Image_Size, class UObject* __WorldContext, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "SetMarqueeImageSize");

	Params::UBP_Widget_Functions_C_SetMarqueeImageSize_Params Parms{};

	Parms.Target = Target;
	Parms.Image_Size = Image_Size;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeImage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     FillImage                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

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
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   FillImageSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)

void UBP_Widget_Functions_C::SetFillImageSize(class UProgressBar* Target, const struct FVector2D& FillImageSize, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle)
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

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     FillImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RGBToHSV_H                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_S                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_V                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_A                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UBP_Widget_Functions_C::SubtractBrightnessValue(const struct FLinearColor& InColor, float Value, class UObject* __WorldContext, bool Temp_bool_Variable, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, float Temp_float_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue)
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
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_HSVToRGB_ReturnValue = CallFunc_HSVToRGB_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SubtractFromColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                InColor                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UBP_Widget_Functions_C::SubtractFromColor(const struct FLinearColor& InColor, float Value, class UObject* __WorldContext, bool Temp_bool_Variable, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float Temp_float_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool Temp_bool_Variable_1, float K2Node_Select_Default, float Temp_float_Variable_1, float Temp_float_Variable_2, float K2Node_Select_Default_1, bool Temp_bool_Variable_2, float K2Node_Select_Default_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
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
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.GetSize
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USizeBox*                    SizeBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Widget_Functions_C::GetSize(class USizeBox* SizeBox, class UObject* __WorldContext, float* Width, float* Height, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, float Temp_float_Variable, bool Temp_bool_Variable_1, float K2Node_Select_Default, float Temp_float_Variable_1, float K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "GetSize");

	Params::UBP_Widget_Functions_C_GetSize_Params Parms{};

	Parms.SizeBox = SizeBox;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetSize
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                    SizeBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Width                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Height                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Widget_Functions_C::SetSize(class USizeBox* SizeBox, float Width, float Height, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue)
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

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.GetTexture2DSizeClamped
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                  Texture2D                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Clamp                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeY_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeX_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UBP_Widget_Functions_C::GetTexture2DSizeClamped(class UTexture2D* Texture2D, const struct FVector2D& Clamp, class UObject* __WorldContext, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
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
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Blueprint_GetSizeX_ReturnValue = CallFunc_Blueprint_GetSizeX_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Widget_Functions.BP_Widget_Functions_C.GetTexture2DSize
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                  Texture2D                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeY_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeX_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UBP_Widget_Functions_C::GetTexture2DSize(class UTexture2D* Texture2D, class UObject* __WorldContext, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Widget_Functions_C", "GetTexture2DSize");

	Params::UBP_Widget_Functions_C_GetTexture2DSize_Params Parms{};

	Parms.Texture2D = Texture2D;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Blueprint_GetSizeY_ReturnValue = CallFunc_Blueprint_GetSizeY_ReturnValue;
	Parms.CallFunc_Blueprint_GetSizeX_ReturnValue = CallFunc_Blueprint_GetSizeX_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


