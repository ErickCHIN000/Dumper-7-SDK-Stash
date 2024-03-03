#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ProgressBarCircular.ProgressBarCircular_C
// (None)

class UClass* UProgressBarCircular_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProgressBarCircular_C");

	return Clss;
}


// ProgressBarCircular_C ProgressBarCircular.Default__ProgressBarCircular_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProgressBarCircular_C* UProgressBarCircular_C::GetDefaultObj()
{
	static class UProgressBarCircular_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProgressBarCircular_C*>(UProgressBarCircular_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ProgressBarCircular.ProgressBarCircular_C.Count_TargetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::Count_TargetPercent(float Time, float* Value, bool Temp_bool_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, float Temp_float_Variable, bool Temp_bool_Variable_2, float K2Node_Select_Default, float Temp_float_Variable_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float K2Node_Select_Default_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "Count_TargetPercent");

	Params::UProgressBarCircular_C_Count_TargetPercent_Params Parms{};

	Parms.Time = Time;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ProgressBarCircular.ProgressBarCircular_C.RemoveEntryIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IndexToRemove                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::RemoveEntryIndex(int32 IndexToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "RemoveEntryIndex");

	Params::UProgressBarCircular_C_RemoveEntryIndex_Params Parms{};

	Parms.IndexToRemove = IndexToRemove;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.IsValidEntryIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              IndexToTest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UProgressBarCircular_C::IsValidEntryIndex(int32 IndexToTest, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "IsValidEntryIndex");

	Params::UProgressBarCircular_C_IsValidEntryIndex_Params Parms{};

	Parms.IndexToTest = IndexToTest;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarCircular.ProgressBarCircular_C.GetEntryIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::GetEntryIndex(int32 Index, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "GetEntryIndex");

	Params::UProgressBarCircular_C_GetEntryIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ProgressBarCircular.ProgressBarCircular_C.IsEffectProgressChangeColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_Effects                  Effect                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UProgressBarCircular_C::IsEffectProgressChangeColor(struct FS_Effects& Effect, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "IsEffectProgressChangeColor");

	Params::UProgressBarCircular_C_IsEffectProgressChangeColor_Params Parms{};

	Parms.Effect = Effect;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_GetSeparationSteps
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Steps                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_GetSeparationSteps(int32* Steps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_GetSeparationSteps");

	Params::UProgressBarCircular_C_PB_GetSeparationSteps_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Steps != nullptr)
		*Steps = Parms.Steps;

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_AddEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Effects                  Effect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_AddEffect(const struct FS_Effects& Effect, int32* Index, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_AddEffect");

	Params::UProgressBarCircular_C_PB_AddEffect_Params Parms{};

	Parms.Effect = Effect;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_GetEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Effects>          Effects                                                          (Parm, OutParm)

void UProgressBarCircular_C::PB_GetEffects(TArray<struct FS_Effects>* Effects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_GetEffects");

	Params::UProgressBarCircular_C_PB_GetEffects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Effects != nullptr)
		*Effects = std::move(Parms.Effects);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_GetIsMarquee
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressBarCircular_C::PB_GetIsMarquee(bool* IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_GetIsMarquee");

	Params::UProgressBarCircular_C_PB_GetIsMarquee_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsMarquee != nullptr)
		*IsMarquee = Parms.IsMarquee;

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_GetUseGradientFillColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGradientFillColor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressBarCircular_C::PB_GetUseGradientFillColor(bool* UseGradientFillColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_GetUseGradientFillColor");

	Params::UProgressBarCircular_C_PB_GetUseGradientFillColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UseGradientFillColor != nullptr)
		*UseGradientFillColor = Parms.UseGradientFillColor;

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_GetFillColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_GetFillColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_GetFillColor");

	Params::UProgressBarCircular_C_PB_GetFillColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_GetTargetFillColor_Negative
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_GetTargetFillColor_Negative(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_GetTargetFillColor_Negative");

	Params::UProgressBarCircular_C_PB_GetTargetFillColor_Negative_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_GetTargetFillColor_Positive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_GetTargetFillColor_Positive(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_GetTargetFillColor_Positive");

	Params::UProgressBarCircular_C_PB_GetTargetFillColor_Positive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_GetInterpTimeTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TargetInterpTime                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_GetInterpTimeTarget(float* TargetInterpTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_GetInterpTimeTarget");

	Params::UProgressBarCircular_C_PB_GetInterpTimeTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TargetInterpTime != nullptr)
		*TargetInterpTime = Parms.TargetInterpTime;

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_GetInterpTimeCurrent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentInterpTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_GetInterpTimeCurrent(float* CurrentInterpTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_GetInterpTimeCurrent");

	Params::UProgressBarCircular_C_PB_GetInterpTimeCurrent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentInterpTime != nullptr)
		*CurrentInterpTime = Parms.CurrentInterpTime;

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_GetProgressMethod
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressMethod         EProgressMethod                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_GetProgressMethod(enum class EProgressMethod* EProgressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_GetProgressMethod");

	Params::UProgressBarCircular_C_PB_GetProgressMethod_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EProgressMethod != nullptr)
		*EProgressMethod = Parms.EProgressMethod;

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_GetUseTargetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseTargetPercent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressBarCircular_C::PB_GetUseTargetPercent(bool* UseTargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_GetUseTargetPercent");

	Params::UProgressBarCircular_C_PB_GetUseTargetPercent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UseTargetPercent != nullptr)
		*UseTargetPercent = Parms.UseTargetPercent;

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_GetTargetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TargetPercent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTargetPercent_TargetPercent                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_GetTargetPercent(float* TargetPercent, float CallFunc_GetTargetPercent_TargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_GetTargetPercent");

	Params::UProgressBarCircular_C_PB_GetTargetPercent_Params Parms{};

	Parms.CallFunc_GetTargetPercent_TargetPercent = CallFunc_GetTargetPercent_TargetPercent;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetPercent != nullptr)
		*TargetPercent = Parms.TargetPercent;

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_GetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPercent_Percent                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_GetPercent(float* Percent, float CallFunc_GetPercent_Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_GetPercent");

	Params::UProgressBarCircular_C_PB_GetPercent_Params Parms{};

	Parms.CallFunc_GetPercent_Percent = CallFunc_GetPercent_Percent;

	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_GetSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_GetSize(struct FVector2D* Size, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_GetSize");

	Params::UProgressBarCircular_C_PB_GetSize_Params Parms{};

	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = std::move(Parms.Size);

}


// Function ProgressBarCircular.ProgressBarCircular_C.ClearEffectLayers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEffectLayer            EffectLayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlay*                    CallFunc_FindEffectOverlay_Overlay                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_Effect_C*                K2Node_DynamicCast_AsWB_Effect                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::ClearEffectLayers(enum class EEffectLayer EffectLayer, class UOverlay* CallFunc_FindEffectOverlay_Overlay, int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWB_Effect_C* K2Node_DynamicCast_AsWB_Effect, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "ClearEffectLayers");

	Params::UProgressBarCircular_C_ClearEffectLayers_Params Parms{};

	Parms.EffectLayer = EffectLayer;
	Parms.CallFunc_FindEffectOverlay_Overlay = CallFunc_FindEffectOverlay_Overlay;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Effect = K2Node_DynamicCast_AsWB_Effect;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.FindEffectOverlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEffectLayer            EffectLayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlay*                    Overlay                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEffectLayer            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlay*                    K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::FindEffectOverlay(enum class EEffectLayer EffectLayer, class UOverlay** Overlay, enum class EEffectLayer Temp_byte_Variable, class UOverlay* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "FindEffectOverlay");

	Params::UProgressBarCircular_C_FindEffectOverlay_Params Parms{};

	Parms.EffectLayer = EffectLayer;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Overlay != nullptr)
		*Overlay = Parms.Overlay;

}


// Function ProgressBarCircular.ProgressBarCircular_C.Count_Percent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::Count_Percent(float Time, float* Value, bool Temp_bool_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, float Temp_float_Variable, bool Temp_bool_Variable_2, float K2Node_Select_Default, float Temp_float_Variable_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float K2Node_Select_Default_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "Count_Percent");

	Params::UProgressBarCircular_C_Count_Percent_Params Parms{};

	Parms.Time = Time;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ProgressBarCircular.ProgressBarCircular_C.Transfer_CurrentPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressBarCircular_C::Transfer_CurrentPercent(float Percent, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "Transfer_CurrentPercent");

	Params::UProgressBarCircular_C_Transfer_CurrentPercent_Params Parms{};

	Parms.Percent = Percent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.Transfer_UseTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseTargetPercent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressBarCircular_C::Transfer_UseTargetPercent(bool UseTargetPercent, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "Transfer_UseTargetPercent");

	Params::UProgressBarCircular_C_Transfer_UseTargetPercent_Params Parms{};

	Parms.UseTargetPercent = UseTargetPercent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.Transfer_TargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TargetPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressBarCircular_C::Transfer_TargetPercent(float TargetPercent, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "Transfer_TargetPercent");

	Params::UProgressBarCircular_C_Transfer_TargetPercent_Params Parms{};

	Parms.TargetPercent = TargetPercent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetBlendMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetEffectMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetBlendMask(class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetBlendMask");

	Params::UProgressBarCircular_C_SetBlendMask_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetEffectMaterial_ReturnValue = CallFunc_GetEffectMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.GetInterpolationTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UProgressBarCircular_C::GetInterpolationTime(bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_MakeLiteralFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "GetInterpolationTime");

	Params::UProgressBarCircular_C_GetInterpolationTime_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarCircular.ProgressBarCircular_C.IsProgressMethodInterpolated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UProgressBarCircular_C::IsProgressMethodInterpolated(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "IsProgressMethodInterpolated");

	Params::UProgressBarCircular_C_IsProgressMethodInterpolated_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarCircular.ProgressBarCircular_C.IsProgressMethodStatic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UProgressBarCircular_C::IsProgressMethodStatic(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "IsProgressMethodStatic");

	Params::UProgressBarCircular_C_IsProgressMethodStatic_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetSize(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetSize");

	Params::UProgressBarCircular_C_PB_SetSize_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetPercent(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetPercent");

	Params::UProgressBarCircular_C_PB_SetPercent_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetFillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetFillColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetFillColor");

	Params::UProgressBarCircular_C_PB_SetFillColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TargetPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetTargetPercent(float TargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetTargetPercent");

	Params::UProgressBarCircular_C_PB_SetTargetPercent_Params Parms{};

	Parms.TargetPercent = TargetPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetThickness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Thickness                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetThickness(float Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetThickness");

	Params::UProgressBarCircular_C_PB_SetThickness_Params Parms{};

	Parms.Thickness = Thickness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetUseTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseTargetPercent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressBarCircular_C::PB_SetUseTargetPercent(bool UseTargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetUseTargetPercent");

	Params::UProgressBarCircular_C_PB_SetUseTargetPercent_Params Parms{};

	Parms.UseTargetPercent = UseTargetPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetProgressMethod
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressMethod         EProgressMethod                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetProgressMethod(enum class EProgressMethod EProgressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetProgressMethod");

	Params::UProgressBarCircular_C_PB_SetProgressMethod_Params Parms{};

	Parms.EProgressMethod = EProgressMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetInterpTimeCurrent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentInterpTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetInterpTimeCurrent(float CurrentInterpTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetInterpTimeCurrent");

	Params::UProgressBarCircular_C_PB_SetInterpTimeCurrent_Params Parms{};

	Parms.CurrentInterpTime = CurrentInterpTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetInterpTimeTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TargetInterpTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetInterpTimeTarget(float TargetInterpTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetInterpTimeTarget");

	Params::UProgressBarCircular_C_PB_SetInterpTimeTarget_Params Parms{};

	Parms.TargetInterpTime = TargetInterpTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetTargetFillColor_Positive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetTargetFillColor_Positive(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetTargetFillColor_Positive");

	Params::UProgressBarCircular_C_PB_SetTargetFillColor_Positive_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetTargetFillColor_Negative
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetTargetFillColor_Negative(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetTargetFillColor_Negative");

	Params::UProgressBarCircular_C_PB_SetTargetFillColor_Negative_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetUseGradientFillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGradientFillColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressBarCircular_C::PB_SetUseGradientFillColor(bool UseGradientFillColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetUseGradientFillColor");

	Params::UProgressBarCircular_C_PB_SetUseGradientFillColor_Params Parms{};

	Parms.UseGradientFillColor = UseGradientFillColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetBackgroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetBackgroundColor");

	Params::UProgressBarCircular_C_PB_SetBackgroundColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetFillColorGradientPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              GradientPower                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetFillColorGradientPower(float GradientPower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetFillColorGradientPower");

	Params::UProgressBarCircular_C_PB_SetFillColorGradientPower_Params Parms{};

	Parms.GradientPower = GradientPower;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetFillColorMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Mask                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetFillColorMask(class UObject* Mask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetFillColorMask");

	Params::UProgressBarCircular_C_PB_SetFillColorMask_Params Parms{};

	Parms.Mask = Mask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetBackgroundColorMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Mask                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetBackgroundColorMask(class UTexture2D* Mask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetBackgroundColorMask");

	Params::UProgressBarCircular_C_PB_SetBackgroundColorMask_Params Parms{};

	Parms.Mask = Mask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetFillColorGradientType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGradientTypes          GradientType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetFillColorGradientType(enum class EGradientTypes GradientType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetFillColorGradientType");

	Params::UProgressBarCircular_C_PB_SetFillColorGradientType_Params Parms{};

	Parms.GradientType = GradientType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetBlendMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  BlendMask                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetBlendMask(class UTexture2D* BlendMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetBlendMask");

	Params::UProgressBarCircular_C_PB_SetBlendMask_Params Parms{};

	Parms.BlendMask = BlendMask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetIsMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressBarCircular_C::PB_SetIsMarquee(bool IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetIsMarquee");

	Params::UProgressBarCircular_C_PB_SetIsMarquee_Params Parms{};

	Parms.IsMarquee = IsMarquee;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetCustomMarqueeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetCustomMarqueeImage(class UTexture2D* Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetCustomMarqueeImage");

	Params::UProgressBarCircular_C_PB_SetCustomMarqueeImage_Params Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetCustomMarqueeMaskType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMarqueeMask            MaskType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetCustomMarqueeMaskType(enum class EMarqueeMask MaskType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetCustomMarqueeMaskType");

	Params::UProgressBarCircular_C_PB_SetCustomMarqueeMaskType_Params Parms{};

	Parms.MaskType = MaskType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetSeparationSteps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Steps                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetSeparationSteps(int32 Steps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetSeparationSteps");

	Params::UProgressBarCircular_C_PB_SetSeparationSteps_Params Parms{};

	Parms.Steps = Steps;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetSeparationStepsSpacing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Spacing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_SetSeparationStepsSpacing(float Spacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetSeparationStepsSpacing");

	Params::UProgressBarCircular_C_PB_SetSeparationStepsSpacing_Params Parms{};

	Parms.Spacing = Spacing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetSeparationAbsoluteFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AbsoluteFillMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressBarCircular_C::PB_SetSeparationAbsoluteFill(bool AbsoluteFillMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetSeparationAbsoluteFill");

	Params::UProgressBarCircular_C_PB_SetSeparationAbsoluteFill_Params Parms{};

	Parms.AbsoluteFillMethod = AbsoluteFillMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Effects>          Effects                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UProgressBarCircular_C::PB_SetEffects(TArray<struct FS_Effects>& Effects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetEffects");

	Params::UProgressBarCircular_C_PB_SetEffects_Params Parms{};

	Parms.Effects = Effects;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetEffectEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressBarCircular_C::PB_SetEffectEnabled(int32 Index, bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetEffectEnabled");

	Params::UProgressBarCircular_C_PB_SetEffectEnabled_Params Parms{};

	Parms.Index = Index;
	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_SetAllEffectsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressBarCircular_C::PB_SetAllEffectsEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_SetAllEffectsEnabled");

	Params::UProgressBarCircular_C_PB_SetAllEffectsEnabled_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PB_RemoveEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::PB_RemoveEffect(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PB_RemoveEffect");

	Params::UProgressBarCircular_C_PB_RemoveEffect_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.UpdatePercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::UpdatePercent(float Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "UpdatePercent");

	Params::UProgressBarCircular_C_UpdatePercent_Params Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.UpdateInterpolation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressBarCircular_C::UpdateInterpolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "UpdateInterpolation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetSize(float Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetSize");

	Params::UProgressBarCircular_C_SetSize_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetUseGradient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGradient                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              GradientOpacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGradientTypes          GradientType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetUseGradient(bool UseGradient, float GradientOpacity, enum class EGradientTypes GradientType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetUseGradient");

	Params::UProgressBarCircular_C_SetUseGradient_Params Parms{};

	Parms.UseGradient = UseGradient;
	Parms.GradientOpacity = GradientOpacity;
	Parms.GradientType = GradientType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetTargetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseTargetPercent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              TargetPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetTargetPercent(bool UseTargetPercent, float TargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetTargetPercent");

	Params::UProgressBarCircular_C_SetTargetPercent_Params Parms{};

	Parms.UseTargetPercent = UseTargetPercent;
	Parms.TargetPercent = TargetPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetTargetFillColorPositive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetTargetFillColorPositive(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetTargetFillColorPositive");

	Params::UProgressBarCircular_C_SetTargetFillColorPositive_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetTargetFillColorNegative
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetTargetFillColorNegative(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetTargetFillColorNegative");

	Params::UProgressBarCircular_C_SetTargetFillColorNegative_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetProgressMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressMethod         ProgressMethod                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetProgressMethod(enum class EProgressMethod ProgressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetProgressMethod");

	Params::UProgressBarCircular_C_SetProgressMethod_Params Parms{};

	Parms.ProgressMethod = ProgressMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetPercentInterpolated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewPercent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetPercentInterpolated(float NewPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetPercentInterpolated");

	Params::UProgressBarCircular_C_SetPercentInterpolated_Params Parms{};

	Parms.NewPercent = NewPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetFillColorMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetFillColorMask(class UTexture2D* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetFillColorMask");

	Params::UProgressBarCircular_C_SetFillColorMask_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetOverallBlendMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  BlendMask                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetOverallBlendMask(class UTexture2D* BlendMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetOverallBlendMask");

	Params::UProgressBarCircular_C_SetOverallBlendMask_Params Parms{};

	Parms.BlendMask = BlendMask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.CreateEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressBarCircular_C::CreateEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "CreateEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarCircular.ProgressBarCircular_C.AddEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Effects                  Effect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::AddEffect(const struct FS_Effects& Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "AddEffect");

	Params::UProgressBarCircular_C_AddEffect_Params Parms{};

	Parms.Effect = Effect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressBarCircular_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetThickness
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Thickness                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetThickness(float Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetThickness");

	Params::UProgressBarCircular_C_SetThickness_Params Parms{};

	Parms.Thickness = Thickness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetSteps
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Separation_Steps                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetSteps(int32 Separation_Steps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetSteps");

	Params::UProgressBarCircular_C_SetSteps_Params Parms{};

	Parms.Separation_Steps = Separation_Steps;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetSpacing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Spacing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetSpacing(float Spacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetSpacing");

	Params::UProgressBarCircular_C_SetSpacing_Params Parms{};

	Parms.Spacing = Spacing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetDensity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Density                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetDensity(float Density)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetDensity");

	Params::UProgressBarCircular_C_SetDensity_Params Parms{};

	Parms.Density = Density;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetStepDensity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HardStepBorder                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetStepDensity(float HardStepBorder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetStepDensity");

	Params::UProgressBarCircular_C_SetStepDensity_Params Parms{};

	Parms.HardStepBorder = HardStepBorder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetBackgroundColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                BackgroundColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  BackgroundMask                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetBackgroundColor(const struct FLinearColor& BackgroundColor, class UTexture2D* BackgroundMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetBackgroundColor");

	Params::UProgressBarCircular_C_SetBackgroundColor_Params Parms{};

	Parms.BackgroundColor = BackgroundColor;
	Parms.BackgroundMask = BackgroundMask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetFillColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColorCurrent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GradientPower                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetFillColor(const struct FLinearColor& FillColorCurrent, float GradientPower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetFillColor");

	Params::UProgressBarCircular_C_SetFillColor_Params Parms{};

	Parms.FillColorCurrent = FillColorCurrent;
	Parms.GradientPower = GradientPower;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.UseAbsoluteFillMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AbsoluteFillMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressBarCircular_C::UseAbsoluteFillMethod(bool AbsoluteFillMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "UseAbsoluteFillMethod");

	Params::UProgressBarCircular_C_UseAbsoluteFillMethod_Params Parms{};

	Parms.AbsoluteFillMethod = AbsoluteFillMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetupMarquee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseMarquee                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                MarqueeColor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                MarqueeBackgroundColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetupMarquee(bool UseMarquee, const struct FLinearColor& MarqueeColor, const struct FLinearColor& MarqueeBackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetupMarquee");

	Params::UProgressBarCircular_C_SetupMarquee_Params Parms{};

	Parms.UseMarquee = UseMarquee;
	Parms.MarqueeColor = MarqueeColor;
	Parms.MarqueeBackgroundColor = MarqueeBackgroundColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetMarqueeTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetMarqueeTime(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetMarqueeTime");

	Params::UProgressBarCircular_C_SetMarqueeTime_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.SetMarqueeMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMarqueeMask            MarqueeMask                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CustomMarqueeMask                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::SetMarqueeMask(enum class EMarqueeMask MarqueeMask, class UTexture2D* CustomMarqueeMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "SetMarqueeMask");

	Params::UProgressBarCircular_C_SetMarqueeMask_Params Parms{};

	Parms.MarqueeMask = MarqueeMask;
	Parms.CustomMarqueeMask = CustomMarqueeMask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "Tick");

	Params::UProgressBarCircular_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.AddEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewPercent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::AddEntry(float NewPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "AddEntry");

	Params::UProgressBarCircular_C_AddEntry_Params Parms{};

	Parms.NewPercent = NewPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.InitNextEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressBarCircular_C::InitNextEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "InitNextEntry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarCircular.ProgressBarCircular_C.ExecuteEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentEntry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::ExecuteEntry(float CurrentEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "ExecuteEntry");

	Params::UProgressBarCircular_C_ExecuteEntry_Params Parms{};

	Parms.CurrentEntry = CurrentEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.Reconstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressBarCircular_C::Reconstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "Reconstruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarCircular.ProgressBarCircular_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UProgressBarCircular_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarCircular.ProgressBarCircular_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressBarCircular_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "PreConstruct");

	Params::UProgressBarCircular_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.StopTriggerProgressChangeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressBarCircular_C::StopTriggerProgressChangeColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "StopTriggerProgressChangeColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarCircular.ProgressBarCircular_C.StartTriggerProgressChangeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::StartTriggerProgressChangeColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "StartTriggerProgressChangeColor");

	Params::UProgressBarCircular_C_StartTriggerProgressChangeColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.HandlePausedQueue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressBarCircular_C::HandlePausedQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "HandlePausedQueue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarCircular.ProgressBarCircular_C.ExecuteUbergraph_ProgressBarCircular
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGamePaused_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetPercent_Percent                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_6                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetPercent_Percent_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Event_Size                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_TargetPercent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Thickness                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_UseTargetPercent                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EProgressMethod         K2Node_Event_EProgressMethod                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_CurrentInterpTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_TargetInterpTime                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_UseGradientFillColor                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Event_Color                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_GradientPower                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_Mask_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_Mask                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGradientTypes          K2Node_Event_GradientType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_BlendMask                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsMarquee                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Event_Image                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMarqueeMask            K2Node_Event_MaskType                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_7                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Steps                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Spacing                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_AbsoluteFillMethod                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FS_Effects>          K2Node_Event_Effects                                             (ConstParm, ReferenceParm)
// bool                               Temp_bool_Has_Been_Initd_Variable_8                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Index_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsEnabled_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsEnabled                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_9                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_Effects                  K2Node_MakeStruct_S_Effects                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Percent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_Effects                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_Effects                  K2Node_MakeStruct_S_Effects_1                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Size                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UseGradient                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_GradientOpacity                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGradientTypes          K2Node_CustomEvent_GradientType                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UseTargetPercent                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_TargetPercent                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsProgressMethodInterpolated_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EProgressMethod         K2Node_CustomEvent_ProgressMethod                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewPercent_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_Percent_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_TargetPercent_Value                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_Percent_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_Value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_CustomEvent_BlendMask                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_10                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_Effects                  CallFunc_Array_Get_Item_1                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_Effects                  K2Node_CustomEvent_Effect                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEffectProgressChangeColor_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlay*                    CallFunc_FindEffectOverlay_Overlay                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_11                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Thickness                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Separation_Steps                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Spacing                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Density                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_HardStepBorder                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_CustomEvent_BackgroundColor                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_BackgroundMask                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_FillColorCurrent                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_GradientPower                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_12                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_AbsoluteFillMethod                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UseMarquee                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_CustomEvent_MarqueeColor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_MarqueeBackgroundColor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMarqueeMask            K2Node_CustomEvent_MarqueeMask                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_CustomMarqueeMask                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInterpolationTime_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewPercent                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_13                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidEntryIndex_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEntryIndex_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_CurrentEntry                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_Effect_Circular_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_14                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_15                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_16                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_17                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UOverlay*>            K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UOverlay*                    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Effect_C*                K2Node_DynamicCast_AsWB_Effect                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_18                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressBarCircular_C::ExecuteUbergraph_ProgressBarCircular(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsGamePaused_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_IsClosed_Variable_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_IsClosed_Variable_4, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_5, float CallFunc_GetPercent_Percent, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_6, float CallFunc_GetPercent_Percent_1, bool CallFunc_IsValid_ReturnValue_4, bool Temp_bool_IsClosed_Variable_5, bool CallFunc_IsValid_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue_6, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector2D& K2Node_Event_Size, float K2Node_Event_Value, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_FClamp_ReturnValue, const struct FLinearColor& K2Node_Event_Color_3, int32 Temp_int_Loop_Counter_Variable_1, float K2Node_Event_TargetPercent, float CallFunc_FClamp_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, float K2Node_Event_Thickness, bool K2Node_Event_UseTargetPercent, enum class EProgressMethod K2Node_Event_EProgressMethod, bool Temp_bool_IsClosed_Variable_6, float K2Node_Event_CurrentInterpTime, float K2Node_Event_TargetInterpTime, const struct FLinearColor& K2Node_Event_Color_2, const struct FLinearColor& K2Node_Event_Color_1, bool K2Node_Event_UseGradientFillColor, const struct FLinearColor& K2Node_Event_Color, float K2Node_Event_GradientPower, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, class UObject* K2Node_Event_Mask_1, class UTexture2D* K2Node_Event_Mask, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, enum class EGradientTypes K2Node_Event_GradientType, class UTexture2D* K2Node_Event_BlendMask, bool K2Node_Event_IsMarquee, class UTexture2D* K2Node_Event_Image, enum class EMarqueeMask K2Node_Event_MaskType, bool Temp_bool_Has_Been_Initd_Variable_7, int32 K2Node_Event_Steps, float K2Node_Event_Spacing, bool K2Node_Event_AbsoluteFillMethod, TArray<struct FS_Effects>& K2Node_Event_Effects, bool Temp_bool_Has_Been_Initd_Variable_8, int32 K2Node_Event_Index_1, bool K2Node_Event_IsEnabled_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool K2Node_Event_IsEnabled, bool Temp_bool_Has_Been_Initd_Variable_9, bool Temp_bool_IsClosed_Variable_7, int32 K2Node_Event_Index, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool Temp_bool_IsClosed_Variable_8, bool Temp_bool_IsClosed_Variable_9, bool CallFunc_IsValid_ReturnValue_7, const struct FS_Effects& K2Node_MakeStruct_S_Effects, bool CallFunc_IsValid_ReturnValue_8, float K2Node_CustomEvent_Percent, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_FClamp_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_IsValid_ReturnValue_9, const struct FS_Effects& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue_2, const struct FS_Effects& K2Node_MakeStruct_S_Effects_1, float K2Node_CustomEvent_Size, bool K2Node_CustomEvent_UseGradient, float K2Node_CustomEvent_GradientOpacity, enum class EGradientTypes K2Node_CustomEvent_GradientType, float CallFunc_FClamp_ReturnValue_3, bool K2Node_CustomEvent_UseTargetPercent, float K2Node_CustomEvent_TargetPercent, const struct FLinearColor& K2Node_CustomEvent_Color_2, const struct FLinearColor& K2Node_CustomEvent_Color_1, bool CallFunc_IsProgressMethodInterpolated_ReturnValue, enum class EProgressMethod K2Node_CustomEvent_ProgressMethod, float K2Node_CustomEvent_NewPercent_1, float CallFunc_Count_Percent_Value, float CallFunc_Count_TargetPercent_Value, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_Count_Percent_Value_1, float CallFunc_MapRangeClamped_ReturnValue_2, class UTexture2D* K2Node_CustomEvent_Value_1, bool CallFunc_IsValid_ReturnValue_10, class UTexture2D* K2Node_CustomEvent_BlendMask, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, int32 Temp_int_Loop_Counter_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_10, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_IsClosed_Variable_10, const struct FS_Effects& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FS_Effects& K2Node_CustomEvent_Effect, bool CallFunc_IsEffectProgressChangeColor_ReturnValue, class UOverlay* CallFunc_FindEffectOverlay_Overlay, bool CallFunc_IsValid_ReturnValue_12, bool Temp_bool_Has_Been_Initd_Variable_11, float K2Node_CustomEvent_Thickness, int32 K2Node_CustomEvent_Separation_Steps, bool CallFunc_IsValid_ReturnValue_13, bool Temp_bool_IsClosed_Variable_11, float K2Node_CustomEvent_Spacing, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, float K2Node_CustomEvent_Density, float K2Node_CustomEvent_HardStepBorder, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, const struct FLinearColor& K2Node_CustomEvent_BackgroundColor, class UTexture2D* K2Node_CustomEvent_BackgroundMask, const struct FLinearColor& K2Node_CustomEvent_FillColorCurrent, float K2Node_CustomEvent_GradientPower, bool Temp_bool_Has_Been_Initd_Variable_12, bool K2Node_CustomEvent_AbsoluteFillMethod, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_3, float CallFunc_MapRangeClamped_ReturnValue_4, bool K2Node_CustomEvent_UseMarquee, const struct FLinearColor& K2Node_CustomEvent_MarqueeColor, const struct FLinearColor& K2Node_CustomEvent_MarqueeBackgroundColor, bool CallFunc_IsValid_ReturnValue_16, float K2Node_CustomEvent_Value, enum class EMarqueeMask K2Node_CustomEvent_MarqueeMask, class UTexture2D* K2Node_CustomEvent_CustomMarqueeMask, bool Temp_bool_IsClosed_Variable_12, bool CallFunc_IsValid_ReturnValue_17, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetInterpolationTime_ReturnValue, float K2Node_CustomEvent_NewPercent, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_13, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValidEntryIndex_ReturnValue, float CallFunc_GetEntryIndex_Value, float K2Node_CustomEvent_CurrentEntry, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_18, bool Temp_bool_IsClosed_Variable_13, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_IsClosed_Variable_14, bool CallFunc_IsValid_ReturnValue_19, class UWB_Effect_Circular_C* CallFunc_Create_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_14, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, bool CallFunc_IsValid_ReturnValue_20, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_15, bool CallFunc_IsValid_ReturnValue_21, bool Temp_bool_IsClosed_Variable_15, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, enum class EUMGSequencePlayMode Temp_byte_Variable, float CallFunc_FClamp_ReturnValue_4, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable_16, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default_1, bool Temp_bool_Has_Been_Initd_Variable_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UTexture2D* Temp_object_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_17, int32 Temp_int_Variable_1, bool Temp_bool_IsClosed_Variable_17, TArray<class UOverlay*>& K2Node_MakeArray_Array, class UOverlay* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWB_Effect_C* K2Node_DynamicCast_AsWB_Effect, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_22, bool CallFunc_IsValid_ReturnValue_23, bool Temp_bool_Variable_2, int32 Temp_int_Variable_2, class UTexture2D* K2Node_Select_Default_2, bool Temp_bool_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_2, int32 K2Node_Select_Default_3, bool CallFunc_BooleanAND_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, int32 K2Node_Select_Default_4, bool Temp_bool_Variable_6, float K2Node_Select_Default_5, const struct FLinearColor& K2Node_CustomEvent_Color, float Temp_float_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool Temp_bool_Variable_7, float Temp_float_Variable_1, float K2Node_Select_Default_6, bool CallFunc_Less_IntInt_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_18, float K2Node_Select_Default_7, bool Temp_bool_Variable_8, float K2Node_Select_Default_8, bool CallFunc_Greater_IntInt_ReturnValue, float Temp_float_Variable_2, bool Temp_bool_Variable_9, float K2Node_Select_Default_9, bool CallFunc_IsValid_ReturnValue_24, bool Temp_bool_IsClosed_Variable_18, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_25)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "ExecuteUbergraph_ProgressBarCircular");

	Params::UProgressBarCircular_C_ExecuteUbergraph_ProgressBarCircular_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsGamePaused_ReturnValue = CallFunc_IsGamePaused_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_4 = Temp_bool_Has_Been_Initd_Variable_4;
	Parms.Temp_bool_IsClosed_Variable_4 = Temp_bool_IsClosed_Variable_4;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_5 = Temp_bool_Has_Been_Initd_Variable_5;
	Parms.CallFunc_GetPercent_Percent = CallFunc_GetPercent_Percent;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_2 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_6 = Temp_bool_Has_Been_Initd_Variable_6;
	Parms.CallFunc_GetPercent_Percent_1 = CallFunc_GetPercent_Percent_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.Temp_bool_IsClosed_Variable_5 = Temp_bool_IsClosed_Variable_5;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_Event_Size = K2Node_Event_Size;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_Event_Color_3 = K2Node_Event_Color_3;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_Event_TargetPercent = K2Node_Event_TargetPercent;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_Event_Thickness = K2Node_Event_Thickness;
	Parms.K2Node_Event_UseTargetPercent = K2Node_Event_UseTargetPercent;
	Parms.K2Node_Event_EProgressMethod = K2Node_Event_EProgressMethod;
	Parms.Temp_bool_IsClosed_Variable_6 = Temp_bool_IsClosed_Variable_6;
	Parms.K2Node_Event_CurrentInterpTime = K2Node_Event_CurrentInterpTime;
	Parms.K2Node_Event_TargetInterpTime = K2Node_Event_TargetInterpTime;
	Parms.K2Node_Event_Color_2 = K2Node_Event_Color_2;
	Parms.K2Node_Event_Color_1 = K2Node_Event_Color_1;
	Parms.K2Node_Event_UseGradientFillColor = K2Node_Event_UseGradientFillColor;
	Parms.K2Node_Event_Color = K2Node_Event_Color;
	Parms.K2Node_Event_GradientPower = K2Node_Event_GradientPower;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2;
	Parms.K2Node_Event_Mask_1 = K2Node_Event_Mask_1;
	Parms.K2Node_Event_Mask = K2Node_Event_Mask;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_GradientType = K2Node_Event_GradientType;
	Parms.K2Node_Event_BlendMask = K2Node_Event_BlendMask;
	Parms.K2Node_Event_IsMarquee = K2Node_Event_IsMarquee;
	Parms.K2Node_Event_Image = K2Node_Event_Image;
	Parms.K2Node_Event_MaskType = K2Node_Event_MaskType;
	Parms.Temp_bool_Has_Been_Initd_Variable_7 = Temp_bool_Has_Been_Initd_Variable_7;
	Parms.K2Node_Event_Steps = K2Node_Event_Steps;
	Parms.K2Node_Event_Spacing = K2Node_Event_Spacing;
	Parms.K2Node_Event_AbsoluteFillMethod = K2Node_Event_AbsoluteFillMethod;
	Parms.K2Node_Event_Effects = K2Node_Event_Effects;
	Parms.Temp_bool_Has_Been_Initd_Variable_8 = Temp_bool_Has_Been_Initd_Variable_8;
	Parms.K2Node_Event_Index_1 = K2Node_Event_Index_1;
	Parms.K2Node_Event_IsEnabled_1 = K2Node_Event_IsEnabled_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_Event_IsEnabled = K2Node_Event_IsEnabled;
	Parms.Temp_bool_Has_Been_Initd_Variable_9 = Temp_bool_Has_Been_Initd_Variable_9;
	Parms.Temp_bool_IsClosed_Variable_7 = Temp_bool_IsClosed_Variable_7;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_8 = Temp_bool_IsClosed_Variable_8;
	Parms.Temp_bool_IsClosed_Variable_9 = Temp_bool_IsClosed_Variable_9;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_MakeStruct_S_Effects = K2Node_MakeStruct_S_Effects;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_CustomEvent_Percent = K2Node_CustomEvent_Percent;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.K2Node_MakeStruct_S_Effects_1 = K2Node_MakeStruct_S_Effects_1;
	Parms.K2Node_CustomEvent_Size = K2Node_CustomEvent_Size;
	Parms.K2Node_CustomEvent_UseGradient = K2Node_CustomEvent_UseGradient;
	Parms.K2Node_CustomEvent_GradientOpacity = K2Node_CustomEvent_GradientOpacity;
	Parms.K2Node_CustomEvent_GradientType = K2Node_CustomEvent_GradientType;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.K2Node_CustomEvent_UseTargetPercent = K2Node_CustomEvent_UseTargetPercent;
	Parms.K2Node_CustomEvent_TargetPercent = K2Node_CustomEvent_TargetPercent;
	Parms.K2Node_CustomEvent_Color_2 = K2Node_CustomEvent_Color_2;
	Parms.K2Node_CustomEvent_Color_1 = K2Node_CustomEvent_Color_1;
	Parms.CallFunc_IsProgressMethodInterpolated_ReturnValue = CallFunc_IsProgressMethodInterpolated_ReturnValue;
	Parms.K2Node_CustomEvent_ProgressMethod = K2Node_CustomEvent_ProgressMethod;
	Parms.K2Node_CustomEvent_NewPercent_1 = K2Node_CustomEvent_NewPercent_1;
	Parms.CallFunc_Count_Percent_Value = CallFunc_Count_Percent_Value;
	Parms.CallFunc_Count_TargetPercent_Value = CallFunc_Count_TargetPercent_Value;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Count_Percent_Value_1 = CallFunc_Count_Percent_Value_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_CustomEvent_BlendMask = K2Node_CustomEvent_BlendMask;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_10 = Temp_bool_Has_Been_Initd_Variable_10;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_bool_IsClosed_Variable_10 = Temp_bool_IsClosed_Variable_10;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_Effect = K2Node_CustomEvent_Effect;
	Parms.CallFunc_IsEffectProgressChangeColor_ReturnValue = CallFunc_IsEffectProgressChangeColor_ReturnValue;
	Parms.CallFunc_FindEffectOverlay_Overlay = CallFunc_FindEffectOverlay_Overlay;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.Temp_bool_Has_Been_Initd_Variable_11 = Temp_bool_Has_Been_Initd_Variable_11;
	Parms.K2Node_CustomEvent_Thickness = K2Node_CustomEvent_Thickness;
	Parms.K2Node_CustomEvent_Separation_Steps = K2Node_CustomEvent_Separation_Steps;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.Temp_bool_IsClosed_Variable_11 = Temp_bool_IsClosed_Variable_11;
	Parms.K2Node_CustomEvent_Spacing = K2Node_CustomEvent_Spacing;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
	Parms.K2Node_CustomEvent_Density = K2Node_CustomEvent_Density;
	Parms.K2Node_CustomEvent_HardStepBorder = K2Node_CustomEvent_HardStepBorder;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.K2Node_CustomEvent_BackgroundColor = K2Node_CustomEvent_BackgroundColor;
	Parms.K2Node_CustomEvent_BackgroundMask = K2Node_CustomEvent_BackgroundMask;
	Parms.K2Node_CustomEvent_FillColorCurrent = K2Node_CustomEvent_FillColorCurrent;
	Parms.K2Node_CustomEvent_GradientPower = K2Node_CustomEvent_GradientPower;
	Parms.Temp_bool_Has_Been_Initd_Variable_12 = Temp_bool_Has_Been_Initd_Variable_12;
	Parms.K2Node_CustomEvent_AbsoluteFillMethod = K2Node_CustomEvent_AbsoluteFillMethod;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue_4 = CallFunc_MapRangeClamped_ReturnValue_4;
	Parms.K2Node_CustomEvent_UseMarquee = K2Node_CustomEvent_UseMarquee;
	Parms.K2Node_CustomEvent_MarqueeColor = K2Node_CustomEvent_MarqueeColor;
	Parms.K2Node_CustomEvent_MarqueeBackgroundColor = K2Node_CustomEvent_MarqueeBackgroundColor;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CustomEvent_MarqueeMask = K2Node_CustomEvent_MarqueeMask;
	Parms.K2Node_CustomEvent_CustomMarqueeMask = K2Node_CustomEvent_CustomMarqueeMask;
	Parms.Temp_bool_IsClosed_Variable_12 = Temp_bool_IsClosed_Variable_12;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetInterpolationTime_ReturnValue = CallFunc_GetInterpolationTime_ReturnValue;
	Parms.K2Node_CustomEvent_NewPercent = K2Node_CustomEvent_NewPercent;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_13 = Temp_bool_Has_Been_Initd_Variable_13;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValidEntryIndex_ReturnValue = CallFunc_IsValidEntryIndex_ReturnValue;
	Parms.CallFunc_GetEntryIndex_Value = CallFunc_GetEntryIndex_Value;
	Parms.K2Node_CustomEvent_CurrentEntry = K2Node_CustomEvent_CurrentEntry;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue_1 = CallFunc_GetIsEnabled_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.Temp_bool_IsClosed_Variable_13 = Temp_bool_IsClosed_Variable_13;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_IsClosed_Variable_14 = Temp_bool_IsClosed_Variable_14;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_14 = Temp_bool_Has_Been_Initd_Variable_14;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_15 = Temp_bool_Has_Been_Initd_Variable_15;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.Temp_bool_IsClosed_Variable_15 = Temp_bool_IsClosed_Variable_15;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_FClamp_ReturnValue_4 = CallFunc_FClamp_ReturnValue_4;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable_16 = Temp_bool_IsClosed_Variable_16;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_16 = Temp_bool_Has_Been_Initd_Variable_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_17 = Temp_bool_Has_Been_Initd_Variable_17;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_IsClosed_Variable_17 = Temp_bool_IsClosed_Variable_17;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Effect = K2Node_DynamicCast_AsWB_Effect;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_18 = Temp_bool_Has_Been_Initd_Variable_18;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.Temp_bool_IsClosed_Variable_18 = Temp_bool_IsClosed_Variable_18;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarCircular.ProgressBarCircular_C.OnPercentChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarCircular_C::OnPercentChanged__DelegateSignature(float Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarCircular_C", "OnPercentChanged__DelegateSignature");

	Params::UProgressBarCircular_C_OnPercentChanged__DelegateSignature_Params Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}

}


