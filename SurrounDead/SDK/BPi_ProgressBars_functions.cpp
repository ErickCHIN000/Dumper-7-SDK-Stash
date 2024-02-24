#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPi_ProgressBars.BPi_ProgressBars_C
// (None)

class UClass* IBPi_ProgressBars_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPi_ProgressBars_C");

	return Clss;
}


// BPi_ProgressBars_C BPi_ProgressBars.Default__BPi_ProgressBars_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPi_ProgressBars_C* IBPi_ProgressBars_C::GetDefaultObj()
{
	static class IBPi_ProgressBars_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPi_ProgressBars_C*>(IBPi_ProgressBars_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetSeparationSteps
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Steps                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetSeparationSteps(int32* Steps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetSeparationSteps");

	Params::IBPi_ProgressBars_C_PB_GetSeparationSteps_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Steps != nullptr)
		*Steps = Parms.Steps;

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_RemoveEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_RemoveEffect(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_RemoveEffect");

	Params::IBPi_ProgressBars_C_PB_RemoveEffect_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_AddEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Effects                  Effect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_AddEffect(const struct FS_Effects& Effect, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_AddEffect");

	Params::IBPi_ProgressBars_C_PB_AddEffect_Params Parms{};

	Parms.Effect = Effect;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetAllEffectsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetAllEffectsEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetAllEffectsEnabled");

	Params::IBPi_ProgressBars_C_PB_SetAllEffectsEnabled_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetEffectEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetEffectEnabled(int32 Index, bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetEffectEnabled");

	Params::IBPi_ProgressBars_C_PB_SetEffectEnabled_Params Parms{};

	Parms.Index = Index;
	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Effects>          Effects                                                          (Parm, OutParm)

void IBPi_ProgressBars_C::PB_GetEffects(TArray<struct FS_Effects>* Effects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetEffects");

	Params::IBPi_ProgressBars_C_PB_GetEffects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Effects != nullptr)
		*Effects = std::move(Parms.Effects);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Effects>          Effects                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void IBPi_ProgressBars_C::PB_SetEffects(TArray<struct FS_Effects>& Effects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetEffects");

	Params::IBPi_ProgressBars_C_PB_SetEffects_Params Parms{};

	Parms.Effects = Effects;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSeparationAbsoluteFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AbsoluteFillMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetSeparationAbsoluteFill(bool AbsoluteFillMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetSeparationAbsoluteFill");

	Params::IBPi_ProgressBars_C_PB_SetSeparationAbsoluteFill_Params Parms{};

	Parms.AbsoluteFillMethod = AbsoluteFillMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSeparationStepsSpacing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Spacing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetSeparationStepsSpacing(double Spacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetSeparationStepsSpacing");

	Params::IBPi_ProgressBars_C_PB_SetSeparationStepsSpacing_Params Parms{};

	Parms.Spacing = Spacing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSeparationSteps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Steps                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetSeparationSteps(int32 Steps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetSeparationSteps");

	Params::IBPi_ProgressBars_C_PB_SetSeparationSteps_Params Parms{};

	Parms.Steps = Steps;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetCustomMarqueeMaskType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMarqueeMask            MaskType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetCustomMarqueeMaskType(enum class EMarqueeMask MaskType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetCustomMarqueeMaskType");

	Params::IBPi_ProgressBars_C_PB_SetCustomMarqueeMaskType_Params Parms{};

	Parms.MaskType = MaskType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetMarqueeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetMarqueeImage(class UTexture2D* Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetMarqueeImage");

	Params::IBPi_ProgressBars_C_PB_SetMarqueeImage_Params Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetCustomMarqueeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetCustomMarqueeImage(class UTexture2D* Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetCustomMarqueeImage");

	Params::IBPi_ProgressBars_C_PB_SetCustomMarqueeImage_Params Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetIsMarquee
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetIsMarquee(bool* IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetIsMarquee");

	Params::IBPi_ProgressBars_C_PB_GetIsMarquee_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsMarquee != nullptr)
		*IsMarquee = Parms.IsMarquee;

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetIsMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetIsMarquee(bool IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetIsMarquee");

	Params::IBPi_ProgressBars_C_PB_SetIsMarquee_Params Parms{};

	Parms.IsMarquee = IsMarquee;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetIsCustomMarquee
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetIsCustomMarquee(bool* IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetIsCustomMarquee");

	Params::IBPi_ProgressBars_C_PB_GetIsCustomMarquee_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsMarquee != nullptr)
		*IsMarquee = Parms.IsMarquee;

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetIsCustomMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetIsCustomMarquee(bool IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetIsCustomMarquee");

	Params::IBPi_ProgressBars_C_PB_SetIsCustomMarquee_Params Parms{};

	Parms.IsMarquee = IsMarquee;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillFromCenterSpacing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Spacing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetFillFromCenterSpacing(double Spacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetFillFromCenterSpacing");

	Params::IBPi_ProgressBars_C_PB_SetFillFromCenterSpacing_Params Parms{};

	Parms.Spacing = Spacing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressBarFillType    FillType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetFillType(enum class EProgressBarFillType FillType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetFillType");

	Params::IBPi_ProgressBars_C_PB_SetFillType_Params Parms{};

	Parms.FillType = FillType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBlendMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  BlendMask                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetBlendMask(class UTexture2D* BlendMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetBlendMask");

	Params::IBPi_ProgressBars_C_PB_SetBlendMask_Params Parms{};

	Parms.BlendMask = BlendMask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorGradientType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGradientTypes          GradientType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetFillColorGradientType(enum class EGradientTypes GradientType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetFillColorGradientType");

	Params::IBPi_ProgressBars_C_PB_SetFillColorGradientType_Params Parms{};

	Parms.GradientType = GradientType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundBlurStrength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             BlurStrength                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetBackgroundBlurStrength(double BlurStrength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetBackgroundBlurStrength");

	Params::IBPi_ProgressBars_C_PB_SetBackgroundBlurStrength_Params Parms{};

	Parms.BlurStrength = BlurStrength;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundBrushTiling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetBackgroundBrushTiling(enum class ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetBackgroundBrushTiling");

	Params::IBPi_ProgressBars_C_PB_SetBackgroundBrushTiling_Params Parms{};

	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundColorMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Mask                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetBackgroundColorMask(class UTexture2D* Mask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetBackgroundColorMask");

	Params::IBPi_ProgressBars_C_PB_SetBackgroundColorMask_Params Parms{};

	Parms.Mask = Mask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Mask                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetFillColorMask(class UObject* Mask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetFillColorMask");

	Params::IBPi_ProgressBars_C_PB_SetFillColorMask_Params Parms{};

	Parms.Mask = Mask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorBrushTiling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetFillColorBrushTiling(enum class ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetFillColorBrushTiling");

	Params::IBPi_ProgressBars_C_PB_SetFillColorBrushTiling_Params Parms{};

	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorGradientPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             GradientPower                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetFillColorGradientPower(double GradientPower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetFillColorGradientPower");

	Params::IBPi_ProgressBars_C_PB_SetFillColorGradientPower_Params Parms{};

	Parms.GradientPower = GradientPower;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetBackgroundColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetBackgroundColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetBackgroundColor");

	Params::IBPi_ProgressBars_C_PB_GetBackgroundColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetBackgroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetBackgroundColor");

	Params::IBPi_ProgressBars_C_PB_SetBackgroundColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetUseGradientFillColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGradientFillColor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetUseGradientFillColor(bool* UseGradientFillColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetUseGradientFillColor");

	Params::IBPi_ProgressBars_C_PB_GetUseGradientFillColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UseGradientFillColor != nullptr)
		*UseGradientFillColor = Parms.UseGradientFillColor;

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetUseGradientFillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGradientFillColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetUseGradientFillColor(bool UseGradientFillColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetUseGradientFillColor");

	Params::IBPi_ProgressBars_C_PB_SetUseGradientFillColor_Params Parms{};

	Parms.UseGradientFillColor = UseGradientFillColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetTargetFillColor_Negative
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetTargetFillColor_Negative(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetTargetFillColor_Negative");

	Params::IBPi_ProgressBars_C_PB_GetTargetFillColor_Negative_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetTargetFillColor_Positive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetTargetFillColor_Positive(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetTargetFillColor_Positive");

	Params::IBPi_ProgressBars_C_PB_GetTargetFillColor_Positive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetTargetFillColor_Negative
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetTargetFillColor_Negative(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetTargetFillColor_Negative");

	Params::IBPi_ProgressBars_C_PB_SetTargetFillColor_Negative_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetTargetFillColor_Positive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetTargetFillColor_Positive(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetTargetFillColor_Positive");

	Params::IBPi_ProgressBars_C_PB_SetTargetFillColor_Positive_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetInterpTimeTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TargetInterpTime                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetInterpTimeTarget(double* TargetInterpTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetInterpTimeTarget");

	Params::IBPi_ProgressBars_C_PB_GetInterpTimeTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TargetInterpTime != nullptr)
		*TargetInterpTime = Parms.TargetInterpTime;

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetInterpTimeTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TargetInterpTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetInterpTimeTarget(double TargetInterpTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetInterpTimeTarget");

	Params::IBPi_ProgressBars_C_PB_SetInterpTimeTarget_Params Parms{};

	Parms.TargetInterpTime = TargetInterpTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetInterpTimeCurrent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentInterpTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetInterpTimeCurrent(double* CurrentInterpTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetInterpTimeCurrent");

	Params::IBPi_ProgressBars_C_PB_GetInterpTimeCurrent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentInterpTime != nullptr)
		*CurrentInterpTime = Parms.CurrentInterpTime;

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetInterpTimeCurrent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentInterpTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetInterpTimeCurrent(double CurrentInterpTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetInterpTimeCurrent");

	Params::IBPi_ProgressBars_C_PB_SetInterpTimeCurrent_Params Parms{};

	Parms.CurrentInterpTime = CurrentInterpTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetProgressMethod
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressMethod         EProgressMethod                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetProgressMethod(enum class EProgressMethod* EProgressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetProgressMethod");

	Params::IBPi_ProgressBars_C_PB_GetProgressMethod_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EProgressMethod != nullptr)
		*EProgressMethod = Parms.EProgressMethod;

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetProgressMethod
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressMethod         EProgressMethod                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetProgressMethod(enum class EProgressMethod EProgressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetProgressMethod");

	Params::IBPi_ProgressBars_C_PB_SetProgressMethod_Params Parms{};

	Parms.EProgressMethod = EProgressMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetUseTargetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseTargetPercent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetUseTargetPercent(bool* UseTargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetUseTargetPercent");

	Params::IBPi_ProgressBars_C_PB_GetUseTargetPercent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UseTargetPercent != nullptr)
		*UseTargetPercent = Parms.UseTargetPercent;

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetUseTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseTargetPercent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetUseTargetPercent(bool UseTargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetUseTargetPercent");

	Params::IBPi_ProgressBars_C_PB_SetUseTargetPercent_Params Parms{};

	Parms.UseTargetPercent = UseTargetPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetThickness
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Thickness                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetThickness(double* Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetThickness");

	Params::IBPi_ProgressBars_C_PB_GetThickness_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Thickness != nullptr)
		*Thickness = Parms.Thickness;

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetThickness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Thickness                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetThickness(double Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetThickness");

	Params::IBPi_ProgressBars_C_PB_SetThickness_Params Parms{};

	Parms.Thickness = Thickness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetTargetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TargetPercent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetTargetPercent(double* TargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetTargetPercent");

	Params::IBPi_ProgressBars_C_PB_GetTargetPercent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TargetPercent != nullptr)
		*TargetPercent = Parms.TargetPercent;

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TargetPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetTargetPercent(double TargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetTargetPercent");

	Params::IBPi_ProgressBars_C_PB_SetTargetPercent_Params Parms{};

	Parms.TargetPercent = TargetPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetFillColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetFillColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetFillColor");

	Params::IBPi_ProgressBars_C_PB_GetFillColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetFillColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetFillColor");

	Params::IBPi_ProgressBars_C_PB_SetFillColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetPercent(double* Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetPercent");

	Params::IBPi_ProgressBars_C_PB_GetPercent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetPercent(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetPercent");

	Params::IBPi_ProgressBars_C_PB_SetPercent_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetSize(struct FVector2D* Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_GetSize");

	Params::IBPi_ProgressBars_C_PB_GetSize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = std::move(Parms.Size);

}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetSize(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_ProgressBars_C", "PB_SetSize");

	Params::IBPi_ProgressBars_C_PB_SetSize_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}

}


