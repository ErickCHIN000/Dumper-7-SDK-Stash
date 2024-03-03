#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Base.WB_Base_C
// (None)

class UClass* UWB_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Base_C");

	return Clss;
}


// WB_Base_C WB_Base.Default__WB_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Base_C* UWB_Base_C::GetDefaultObj()
{
	static class UWB_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Base_C*>(UWB_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Base.WB_Base_C.PB_GetSeparationSteps
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Steps                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_GetSeparationSteps(int32* Steps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetSeparationSteps");

	Params::UWB_Base_C_PB_GetSeparationSteps_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Steps != nullptr)
		*Steps = Parms.Steps;

}


// Function WB_Base.WB_Base_C.PB_AddEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Effects                  Effect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_AddEffect(const struct FS_Effects& Effect, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_AddEffect");

	Params::UWB_Base_C_PB_AddEffect_Params Parms{};

	Parms.Effect = Effect;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function WB_Base.WB_Base_C.PB_GetEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Effects>          Effects                                                          (Parm, OutParm)

void UWB_Base_C::PB_GetEffects(TArray<struct FS_Effects>* Effects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetEffects");

	Params::UWB_Base_C_PB_GetEffects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Effects != nullptr)
		*Effects = std::move(Parms.Effects);

}


// Function WB_Base.WB_Base_C.PB_GetIsMarquee
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Base_C::PB_GetIsMarquee(bool* IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetIsMarquee");

	Params::UWB_Base_C_PB_GetIsMarquee_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsMarquee != nullptr)
		*IsMarquee = Parms.IsMarquee;

}


// Function WB_Base.WB_Base_C.PB_GetIsCustomMarquee
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Base_C::PB_GetIsCustomMarquee(bool* IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetIsCustomMarquee");

	Params::UWB_Base_C_PB_GetIsCustomMarquee_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsMarquee != nullptr)
		*IsMarquee = Parms.IsMarquee;

}


// Function WB_Base.WB_Base_C.PB_GetThickness
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Thickness                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_GetThickness(float* Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetThickness");

	Params::UWB_Base_C_PB_GetThickness_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Thickness != nullptr)
		*Thickness = Parms.Thickness;

}


// Function WB_Base.WB_Base_C.PB_GetBackgroundColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_GetBackgroundColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetBackgroundColor");

	Params::UWB_Base_C_PB_GetBackgroundColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function WB_Base.WB_Base_C.PB_GetUseGradientFillColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGradientFillColor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Base_C::PB_GetUseGradientFillColor(bool* UseGradientFillColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetUseGradientFillColor");

	Params::UWB_Base_C_PB_GetUseGradientFillColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UseGradientFillColor != nullptr)
		*UseGradientFillColor = Parms.UseGradientFillColor;

}


// Function WB_Base.WB_Base_C.PB_GetTargetFillColor_Negative
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_GetTargetFillColor_Negative(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetTargetFillColor_Negative");

	Params::UWB_Base_C_PB_GetTargetFillColor_Negative_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function WB_Base.WB_Base_C.PB_GetTargetFillColor_Positive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_GetTargetFillColor_Positive(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetTargetFillColor_Positive");

	Params::UWB_Base_C_PB_GetTargetFillColor_Positive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function WB_Base.WB_Base_C.PB_GetInterpTimeTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TargetInterpTime                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_GetInterpTimeTarget(float* TargetInterpTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetInterpTimeTarget");

	Params::UWB_Base_C_PB_GetInterpTimeTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TargetInterpTime != nullptr)
		*TargetInterpTime = Parms.TargetInterpTime;

}


// Function WB_Base.WB_Base_C.PB_GetInterpTimeCurrent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentInterpTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_GetInterpTimeCurrent(float* CurrentInterpTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetInterpTimeCurrent");

	Params::UWB_Base_C_PB_GetInterpTimeCurrent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentInterpTime != nullptr)
		*CurrentInterpTime = Parms.CurrentInterpTime;

}


// Function WB_Base.WB_Base_C.PB_GetProgressMethod
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressMethod         EProgressMethod                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_GetProgressMethod(enum class EProgressMethod* EProgressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetProgressMethod");

	Params::UWB_Base_C_PB_GetProgressMethod_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EProgressMethod != nullptr)
		*EProgressMethod = Parms.EProgressMethod;

}


// Function WB_Base.WB_Base_C.PB_GetUseTargetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseTargetPercent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Base_C::PB_GetUseTargetPercent(bool* UseTargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetUseTargetPercent");

	Params::UWB_Base_C_PB_GetUseTargetPercent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UseTargetPercent != nullptr)
		*UseTargetPercent = Parms.UseTargetPercent;

}


// Function WB_Base.WB_Base_C.PB_GetTargetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TargetPercent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_GetTargetPercent(float* TargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetTargetPercent");

	Params::UWB_Base_C_PB_GetTargetPercent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TargetPercent != nullptr)
		*TargetPercent = Parms.TargetPercent;

}


// Function WB_Base.WB_Base_C.PB_GetFillColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_GetFillColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetFillColor");

	Params::UWB_Base_C_PB_GetFillColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function WB_Base.WB_Base_C.PB_GetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_GetPercent(float* Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetPercent");

	Params::UWB_Base_C_PB_GetPercent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

}


// Function WB_Base.WB_Base_C.PB_GetSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_GetSize(struct FVector2D* Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_GetSize");

	Params::UWB_Base_C_PB_GetSize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = std::move(Parms.Size);

}


// Function WB_Base.WB_Base_C.PB_SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetSize(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetSize");

	Params::UWB_Base_C_PB_SetSize_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetPercent(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetPercent");

	Params::UWB_Base_C_PB_SetPercent_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetFillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetFillColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetFillColor");

	Params::UWB_Base_C_PB_SetFillColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TargetPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetTargetPercent(float TargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetTargetPercent");

	Params::UWB_Base_C_PB_SetTargetPercent_Params Parms{};

	Parms.TargetPercent = TargetPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetThickness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Thickness                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetThickness(float Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetThickness");

	Params::UWB_Base_C_PB_SetThickness_Params Parms{};

	Parms.Thickness = Thickness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetUseTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseTargetPercent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Base_C::PB_SetUseTargetPercent(bool UseTargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetUseTargetPercent");

	Params::UWB_Base_C_PB_SetUseTargetPercent_Params Parms{};

	Parms.UseTargetPercent = UseTargetPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetProgressMethod
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressMethod         EProgressMethod                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetProgressMethod(enum class EProgressMethod EProgressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetProgressMethod");

	Params::UWB_Base_C_PB_SetProgressMethod_Params Parms{};

	Parms.EProgressMethod = EProgressMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetInterpTimeCurrent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentInterpTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetInterpTimeCurrent(float CurrentInterpTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetInterpTimeCurrent");

	Params::UWB_Base_C_PB_SetInterpTimeCurrent_Params Parms{};

	Parms.CurrentInterpTime = CurrentInterpTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetInterpTimeTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TargetInterpTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetInterpTimeTarget(float TargetInterpTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetInterpTimeTarget");

	Params::UWB_Base_C_PB_SetInterpTimeTarget_Params Parms{};

	Parms.TargetInterpTime = TargetInterpTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetTargetFillColor_Positive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetTargetFillColor_Positive(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetTargetFillColor_Positive");

	Params::UWB_Base_C_PB_SetTargetFillColor_Positive_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetTargetFillColor_Negative
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetTargetFillColor_Negative(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetTargetFillColor_Negative");

	Params::UWB_Base_C_PB_SetTargetFillColor_Negative_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetUseGradientFillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGradientFillColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Base_C::PB_SetUseGradientFillColor(bool UseGradientFillColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetUseGradientFillColor");

	Params::UWB_Base_C_PB_SetUseGradientFillColor_Params Parms{};

	Parms.UseGradientFillColor = UseGradientFillColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetBackgroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetBackgroundColor");

	Params::UWB_Base_C_PB_SetBackgroundColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetFillColorGradientPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              GradientPower                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetFillColorGradientPower(float GradientPower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetFillColorGradientPower");

	Params::UWB_Base_C_PB_SetFillColorGradientPower_Params Parms{};

	Parms.GradientPower = GradientPower;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetFillColorBrushTiling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetFillColorBrushTiling(enum class ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetFillColorBrushTiling");

	Params::UWB_Base_C_PB_SetFillColorBrushTiling_Params Parms{};

	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetFillColorMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Mask                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetFillColorMask(class UObject* Mask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetFillColorMask");

	Params::UWB_Base_C_PB_SetFillColorMask_Params Parms{};

	Parms.Mask = Mask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetBackgroundColorMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Mask                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetBackgroundColorMask(class UTexture2D* Mask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetBackgroundColorMask");

	Params::UWB_Base_C_PB_SetBackgroundColorMask_Params Parms{};

	Parms.Mask = Mask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetBackgroundBrushTiling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetBackgroundBrushTiling(enum class ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetBackgroundBrushTiling");

	Params::UWB_Base_C_PB_SetBackgroundBrushTiling_Params Parms{};

	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetBackgroundBlurStrength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              BlurStrength                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetBackgroundBlurStrength(float BlurStrength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetBackgroundBlurStrength");

	Params::UWB_Base_C_PB_SetBackgroundBlurStrength_Params Parms{};

	Parms.BlurStrength = BlurStrength;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetFillColorGradientType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGradientTypes          GradientType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetFillColorGradientType(enum class EGradientTypes GradientType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetFillColorGradientType");

	Params::UWB_Base_C_PB_SetFillColorGradientType_Params Parms{};

	Parms.GradientType = GradientType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetBlendMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  BlendMask                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetBlendMask(class UTexture2D* BlendMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetBlendMask");

	Params::UWB_Base_C_PB_SetBlendMask_Params Parms{};

	Parms.BlendMask = BlendMask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetFillType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressBarFillType    FillType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetFillType(enum class EProgressBarFillType FillType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetFillType");

	Params::UWB_Base_C_PB_SetFillType_Params Parms{};

	Parms.FillType = FillType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetFillFromCenterSpacing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Spacing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetFillFromCenterSpacing(float Spacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetFillFromCenterSpacing");

	Params::UWB_Base_C_PB_SetFillFromCenterSpacing_Params Parms{};

	Parms.Spacing = Spacing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetIsCustomMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Base_C::PB_SetIsCustomMarquee(bool IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetIsCustomMarquee");

	Params::UWB_Base_C_PB_SetIsCustomMarquee_Params Parms{};

	Parms.IsMarquee = IsMarquee;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetIsMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Base_C::PB_SetIsMarquee(bool IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetIsMarquee");

	Params::UWB_Base_C_PB_SetIsMarquee_Params Parms{};

	Parms.IsMarquee = IsMarquee;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetCustomMarqueeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetCustomMarqueeImage(class UTexture2D* Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetCustomMarqueeImage");

	Params::UWB_Base_C_PB_SetCustomMarqueeImage_Params Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetMarqueeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetMarqueeImage(class UTexture2D* Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetMarqueeImage");

	Params::UWB_Base_C_PB_SetMarqueeImage_Params Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetCustomMarqueeMaskType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMarqueeMask            MaskType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetCustomMarqueeMaskType(enum class EMarqueeMask MaskType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetCustomMarqueeMaskType");

	Params::UWB_Base_C_PB_SetCustomMarqueeMaskType_Params Parms{};

	Parms.MaskType = MaskType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetSeparationSteps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Steps                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetSeparationSteps(int32 Steps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetSeparationSteps");

	Params::UWB_Base_C_PB_SetSeparationSteps_Params Parms{};

	Parms.Steps = Steps;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetSeparationStepsSpacing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Spacing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_SetSeparationStepsSpacing(float Spacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetSeparationStepsSpacing");

	Params::UWB_Base_C_PB_SetSeparationStepsSpacing_Params Parms{};

	Parms.Spacing = Spacing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetSeparationAbsoluteFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AbsoluteFillMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Base_C::PB_SetSeparationAbsoluteFill(bool AbsoluteFillMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetSeparationAbsoluteFill");

	Params::UWB_Base_C_PB_SetSeparationAbsoluteFill_Params Parms{};

	Parms.AbsoluteFillMethod = AbsoluteFillMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Effects>          Effects                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_Base_C::PB_SetEffects(TArray<struct FS_Effects>& Effects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetEffects");

	Params::UWB_Base_C_PB_SetEffects_Params Parms{};

	Parms.Effects = Effects;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetEffectEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Base_C::PB_SetEffectEnabled(int32 Index, bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetEffectEnabled");

	Params::UWB_Base_C_PB_SetEffectEnabled_Params Parms{};

	Parms.Index = Index;
	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_SetAllEffectsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Base_C::PB_SetAllEffectsEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_SetAllEffectsEnabled");

	Params::UWB_Base_C_PB_SetAllEffectsEnabled_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.PB_RemoveEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Base_C::PB_RemoveEffect(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "PB_RemoveEffect");

	Params::UWB_Base_C_PB_RemoveEffect_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Base.WB_Base_C.ExecuteUbergraph_WB_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Event_Size                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_TargetPercent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Thickness                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_UseTargetPercent                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EProgressMethod         K2Node_Event_EProgressMethod                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_CurrentInterpTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_TargetInterpTime                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_UseGradientFillColor                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Event_Color                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_GradientPower                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     K2Node_Event_Tiling_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_Mask_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_Mask                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     K2Node_Event_Tiling                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_BlurStrength                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGradientTypes          K2Node_Event_GradientType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_BlendMask                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    K2Node_Event_FillType                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Spacing_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsMarquee_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsMarquee                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Event_Image_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_Image                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMarqueeMask            K2Node_Event_MaskType                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Steps                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Spacing                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_AbsoluteFillMethod                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FS_Effects>          K2Node_Event_Effects                                             (ConstParm, ReferenceParm)
// int32                              K2Node_Event_Index_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsEnabled_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsEnabled                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Base_C::ExecuteUbergraph_WB_Base(int32 EntryPoint, int32 K2Node_Event_Index, const struct FVector2D& K2Node_Event_Size, float K2Node_Event_Value, const struct FLinearColor& K2Node_Event_Color_3, float K2Node_Event_TargetPercent, float K2Node_Event_Thickness, bool K2Node_Event_UseTargetPercent, enum class EProgressMethod K2Node_Event_EProgressMethod, float K2Node_Event_CurrentInterpTime, float K2Node_Event_TargetInterpTime, const struct FLinearColor& K2Node_Event_Color_2, const struct FLinearColor& K2Node_Event_Color_1, bool K2Node_Event_UseGradientFillColor, const struct FLinearColor& K2Node_Event_Color, float K2Node_Event_GradientPower, enum class ESlateBrushTileType K2Node_Event_Tiling_1, class UObject* K2Node_Event_Mask_1, class UTexture2D* K2Node_Event_Mask, enum class ESlateBrushTileType K2Node_Event_Tiling, float K2Node_Event_BlurStrength, enum class EGradientTypes K2Node_Event_GradientType, class UTexture2D* K2Node_Event_BlendMask, enum class EProgressBarFillType K2Node_Event_FillType, float K2Node_Event_Spacing_1, bool K2Node_Event_IsMarquee_1, bool K2Node_Event_IsMarquee, class UTexture2D* K2Node_Event_Image_1, class UTexture2D* K2Node_Event_Image, enum class EMarqueeMask K2Node_Event_MaskType, int32 K2Node_Event_Steps, float K2Node_Event_Spacing, bool K2Node_Event_AbsoluteFillMethod, TArray<struct FS_Effects>& K2Node_Event_Effects, int32 K2Node_Event_Index_1, bool K2Node_Event_IsEnabled_1, bool K2Node_Event_IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Base_C", "ExecuteUbergraph_WB_Base");

	Params::UWB_Base_C_ExecuteUbergraph_WB_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.K2Node_Event_Size = K2Node_Event_Size;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_Event_Color_3 = K2Node_Event_Color_3;
	Parms.K2Node_Event_TargetPercent = K2Node_Event_TargetPercent;
	Parms.K2Node_Event_Thickness = K2Node_Event_Thickness;
	Parms.K2Node_Event_UseTargetPercent = K2Node_Event_UseTargetPercent;
	Parms.K2Node_Event_EProgressMethod = K2Node_Event_EProgressMethod;
	Parms.K2Node_Event_CurrentInterpTime = K2Node_Event_CurrentInterpTime;
	Parms.K2Node_Event_TargetInterpTime = K2Node_Event_TargetInterpTime;
	Parms.K2Node_Event_Color_2 = K2Node_Event_Color_2;
	Parms.K2Node_Event_Color_1 = K2Node_Event_Color_1;
	Parms.K2Node_Event_UseGradientFillColor = K2Node_Event_UseGradientFillColor;
	Parms.K2Node_Event_Color = K2Node_Event_Color;
	Parms.K2Node_Event_GradientPower = K2Node_Event_GradientPower;
	Parms.K2Node_Event_Tiling_1 = K2Node_Event_Tiling_1;
	Parms.K2Node_Event_Mask_1 = K2Node_Event_Mask_1;
	Parms.K2Node_Event_Mask = K2Node_Event_Mask;
	Parms.K2Node_Event_Tiling = K2Node_Event_Tiling;
	Parms.K2Node_Event_BlurStrength = K2Node_Event_BlurStrength;
	Parms.K2Node_Event_GradientType = K2Node_Event_GradientType;
	Parms.K2Node_Event_BlendMask = K2Node_Event_BlendMask;
	Parms.K2Node_Event_FillType = K2Node_Event_FillType;
	Parms.K2Node_Event_Spacing_1 = K2Node_Event_Spacing_1;
	Parms.K2Node_Event_IsMarquee_1 = K2Node_Event_IsMarquee_1;
	Parms.K2Node_Event_IsMarquee = K2Node_Event_IsMarquee;
	Parms.K2Node_Event_Image_1 = K2Node_Event_Image_1;
	Parms.K2Node_Event_Image = K2Node_Event_Image;
	Parms.K2Node_Event_MaskType = K2Node_Event_MaskType;
	Parms.K2Node_Event_Steps = K2Node_Event_Steps;
	Parms.K2Node_Event_Spacing = K2Node_Event_Spacing;
	Parms.K2Node_Event_AbsoluteFillMethod = K2Node_Event_AbsoluteFillMethod;
	Parms.K2Node_Event_Effects = K2Node_Event_Effects;
	Parms.K2Node_Event_Index_1 = K2Node_Event_Index_1;
	Parms.K2Node_Event_IsEnabled_1 = K2Node_Event_IsEnabled_1;
	Parms.K2Node_Event_IsEnabled = K2Node_Event_IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}

}


