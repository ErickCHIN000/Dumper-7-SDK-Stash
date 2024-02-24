#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Shop_sw_AttributeRow.WBP_Shop_sw_AttributeRow_C
// (None)

class UClass* UWBP_Shop_sw_AttributeRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Shop_sw_AttributeRow_C");

	return Clss;
}


// WBP_Shop_sw_AttributeRow_C WBP_Shop_sw_AttributeRow.Default__WBP_Shop_sw_AttributeRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Shop_sw_AttributeRow_C* UWBP_Shop_sw_AttributeRow_C::GetDefaultObj()
{
	static class UWBP_Shop_sw_AttributeRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Shop_sw_AttributeRow_C*>(UWBP_Shop_sw_AttributeRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Shop_sw_AttributeRow.WBP_Shop_sw_AttributeRow_C.InitializeDesignerPreview
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Shop_sw_AttributeRow_C::InitializeDesignerPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_sw_AttributeRow_C", "InitializeDesignerPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Shop_sw_AttributeRow.WBP_Shop_sw_AttributeRow_C.UpdateValue
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 LPositiveTint                                                    (Edit, BlueprintVisible)
// struct FSlateColor                 LNegativeTint                                                    (Edit, BlueprintVisible)
// struct FSlateColor                 LNeutralTint                                                     (Edit, BlueprintVisible)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FormatTextFromType_ResultText                           (None)

void UWBP_Shop_sw_AttributeRow_C::UpdateValue(double NewValue, const struct FSlateColor& LPositiveTint, const struct FSlateColor& LNegativeTint, const struct FSlateColor& LNeutralTint, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, class FText CallFunc_FormatTextFromType_ResultText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_sw_AttributeRow_C", "UpdateValue");

	Params::UWBP_Shop_sw_AttributeRow_C_UpdateValue_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.LPositiveTint = LPositiveTint;
	Parms.LNegativeTint = LNegativeTint;
	Parms.LNeutralTint = LNeutralTint;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_FormatTextFromType_ResultText = CallFunc_FormatTextFromType_ResultText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_sw_AttributeRow.WBP_Shop_sw_AttributeRow_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_UpdateValue_NewValue_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_sw_AttributeRow_C::Initialize(double CallFunc_UpdateValue_NewValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_sw_AttributeRow_C", "Initialize");

	Params::UWBP_Shop_sw_AttributeRow_C_Initialize_Params Parms{};

	Parms.CallFunc_UpdateValue_NewValue_ImplicitCast = CallFunc_UpdateValue_NewValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shop_sw_AttributeRow.WBP_Shop_sw_AttributeRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Shop_sw_AttributeRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_sw_AttributeRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Shop_sw_AttributeRow.WBP_Shop_sw_AttributeRow_C.ExecuteUbergraph_WBP_Shop_sw_AttributeRow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shop_sw_AttributeRow_C::ExecuteUbergraph_WBP_Shop_sw_AttributeRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shop_sw_AttributeRow_C", "ExecuteUbergraph_WBP_Shop_sw_AttributeRow");

	Params::UWBP_Shop_sw_AttributeRow_C_ExecuteUbergraph_WBP_Shop_sw_AttributeRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


