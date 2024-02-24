#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BFL_CommonMobileWidgetFunctions.BFL_CommonMobileWidgetFunctions_C
// (None)

class UClass* UBFL_CommonMobileWidgetFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BFL_CommonMobileWidgetFunctions_C");

	return Clss;
}


// BFL_CommonMobileWidgetFunctions_C BFL_CommonMobileWidgetFunctions.Default__BFL_CommonMobileWidgetFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBFL_CommonMobileWidgetFunctions_C* UBFL_CommonMobileWidgetFunctions_C::GetDefaultObj()
{
	static class UBFL_CommonMobileWidgetFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBFL_CommonMobileWidgetFunctions_C*>(UBFL_CommonMobileWidgetFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BFL_CommonMobileWidgetFunctions.BFL_CommonMobileWidgetFunctions_C.Set Element Font Size
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  TextElement                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewFontSize                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UBFL_CommonMobileWidgetFunctions_C::Set_Element_Font_Size(class UTextBlock* TextElement, int32 NewFontSize, class UObject* __WorldContext, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BFL_CommonMobileWidgetFunctions_C", "Set Element Font Size");

	Params::UBFL_CommonMobileWidgetFunctions_C_Set_Element_Font_Size_Params Parms{};

	Parms.TextElement = TextElement;
	Parms.NewFontSize = NewFontSize;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BFL_CommonMobileWidgetFunctions.BFL_CommonMobileWidgetFunctions_C.Check if Aspect Ratio Is Lower
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Aspect_ratio_cutoff                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLowerThanProvided                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBFL_CommonMobileWidgetFunctions_C::Check_if_Aspect_Ratio_Is_Lower(float Aspect_ratio_cutoff, class UObject* __WorldContext, bool* IsLowerThanProvided, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BFL_CommonMobileWidgetFunctions_C", "Check if Aspect Ratio Is Lower");

	Params::UBFL_CommonMobileWidgetFunctions_C_Check_if_Aspect_Ratio_Is_Lower_Params Parms{};

	Parms.Aspect_ratio_cutoff = Aspect_ratio_cutoff;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLowerThanProvided != nullptr)
		*IsLowerThanProvided = Parms.IsLowerThanProvided;

}


// Function BFL_CommonMobileWidgetFunctions.BFL_CommonMobileWidgetFunctions_C.Set Scale Box Alignment
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScaleBoxSlot*               ScaleBoxSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerticalAlignment      InVerticalAlignment                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_CommonMobileWidgetFunctions_C::Set_Scale_Box_Alignment(class UScaleBoxSlot* ScaleBoxSlot, enum class EHorizontalAlignment InHorizontalAlignment, enum class EVerticalAlignment InVerticalAlignment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BFL_CommonMobileWidgetFunctions_C", "Set Scale Box Alignment");

	Params::UBFL_CommonMobileWidgetFunctions_C_Set_Scale_Box_Alignment_Params Parms{};

	Parms.ScaleBoxSlot = ScaleBoxSlot;
	Parms.InHorizontalAlignment = InHorizontalAlignment;
	Parms.InVerticalAlignment = InVerticalAlignment;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}

}


