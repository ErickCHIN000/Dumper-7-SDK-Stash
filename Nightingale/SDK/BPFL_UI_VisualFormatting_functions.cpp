#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_UI_VisualFormatting.BPFL_UI_VisualFormatting_C
// (None)

class UClass* UBPFL_UI_VisualFormatting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_UI_VisualFormatting_C");

	return Clss;
}


// BPFL_UI_VisualFormatting_C BPFL_UI_VisualFormatting.Default__BPFL_UI_VisualFormatting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_UI_VisualFormatting_C* UBPFL_UI_VisualFormatting_C::GetDefaultObj()
{
	static class UBPFL_UI_VisualFormatting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_UI_VisualFormatting_C*>(UBPFL_UI_VisualFormatting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_UI_VisualFormatting.BPFL_UI_VisualFormatting_C.UI_BoolSet_Visibility
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     WidgetObject                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Visible_Result                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UI_VisualFormatting_C::UI_BoolSet_Visibility(bool Select, class UWidget* WidgetObject, class UObject* __WorldContext, enum class ESlateVisibility* Visible_Result, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UI_VisualFormatting_C", "UI_BoolSet_Visibility");

	Params::UBPFL_UI_VisualFormatting_C_UI_BoolSet_Visibility_Params Parms{};

	Parms.Select = Select;
	Parms.WidgetObject = WidgetObject;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Visible_Result != nullptr)
		*Visible_Result = Parms.Visible_Result;

}

}


