#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Tooltip_Staged.WBP_Tooltip_Staged_C
// (None)

class UClass* UWBP_Tooltip_Staged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Tooltip_Staged_C");

	return Clss;
}


// WBP_Tooltip_Staged_C WBP_Tooltip_Staged.Default__WBP_Tooltip_Staged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Tooltip_Staged_C* UWBP_Tooltip_Staged_C::GetDefaultObj()
{
	static class UWBP_Tooltip_Staged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Tooltip_Staged_C*>(UWBP_Tooltip_Staged_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Tooltip_Staged.WBP_Tooltip_Staged_C.UpdateTooltip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Header                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        SubText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Show_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Tooltip_Staged_C::UpdateTooltip(class FText Header, class FText SubText, class FText Body, bool Show_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Tooltip_Staged_C", "UpdateTooltip");

	Params::UWBP_Tooltip_Staged_C_UpdateTooltip_Params Parms{};

	Parms.Header = Header;
	Parms.SubText = SubText;
	Parms.Body = Body;
	Parms.Show_ = Show_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Tooltip_Staged.WBP_Tooltip_Staged_C.ExecuteUbergraph_WBP_Tooltip_Staged
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Header                                        (None)
// class FText                        K2Node_CustomEvent_Subtext                                       (None)
// class FText                        K2Node_CustomEvent_Body                                          (None)
// bool                               K2Node_CustomEvent_Show_                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Tooltip_Staged_C::ExecuteUbergraph_WBP_Tooltip_Staged(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, class FText K2Node_CustomEvent_Header, class FText K2Node_CustomEvent_Subtext, class FText K2Node_CustomEvent_Body, bool K2Node_CustomEvent_Show_, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Tooltip_Staged_C", "ExecuteUbergraph_WBP_Tooltip_Staged");

	Params::UWBP_Tooltip_Staged_C_ExecuteUbergraph_WBP_Tooltip_Staged_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CustomEvent_Header = K2Node_CustomEvent_Header;
	Parms.K2Node_CustomEvent_Subtext = K2Node_CustomEvent_Subtext;
	Parms.K2Node_CustomEvent_Body = K2Node_CustomEvent_Body;
	Parms.K2Node_CustomEvent_Show_ = K2Node_CustomEvent_Show_;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


