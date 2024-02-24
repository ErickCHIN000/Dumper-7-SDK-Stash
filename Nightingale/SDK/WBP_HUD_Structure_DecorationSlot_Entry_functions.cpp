#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_Structure_DecorationSlot_Entry.WBP_HUD_Structure_DecorationSlot_Entry_C
// (None)

class UClass* UWBP_HUD_Structure_DecorationSlot_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_Structure_DecorationSlot_Entry_C");

	return Clss;
}


// WBP_HUD_Structure_DecorationSlot_Entry_C WBP_HUD_Structure_DecorationSlot_Entry.Default__WBP_HUD_Structure_DecorationSlot_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_Structure_DecorationSlot_Entry_C* UWBP_HUD_Structure_DecorationSlot_Entry_C::GetDefaultObj()
{
	static class UWBP_HUD_Structure_DecorationSlot_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_Structure_DecorationSlot_Entry_C*>(UWBP_HUD_Structure_DecorationSlot_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_Structure_DecorationSlot_Entry.WBP_HUD_Structure_DecorationSlot_Entry_C.GetTooltipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_HUD_Structure_DecorationSlot_Entry_C::GetTooltipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_DecorationSlot_Entry_C", "GetTooltipWidget");

	Params::UWBP_HUD_Structure_DecorationSlot_Entry_C_GetTooltipWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_HUD_Structure_DecorationSlot_Entry.WBP_HUD_Structure_DecorationSlot_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_Structure_DecorationSlot_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_DecorationSlot_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_Structure_DecorationSlot_Entry.WBP_HUD_Structure_DecorationSlot_Entry_C.ExecuteUbergraph_WBP_HUD_Structure_DecorationSlot_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_DecorationSlot_Entry_C::ExecuteUbergraph_WBP_HUD_Structure_DecorationSlot_Entry(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_DecorationSlot_Entry_C", "ExecuteUbergraph_WBP_HUD_Structure_DecorationSlot_Entry");

	Params::UWBP_HUD_Structure_DecorationSlot_Entry_C_ExecuteUbergraph_WBP_HUD_Structure_DecorationSlot_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


