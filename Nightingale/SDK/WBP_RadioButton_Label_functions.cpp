#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RadioButton_Label.WBP_RadioButton_Label_C
// (None)

class UClass* UWBP_RadioButton_Label_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RadioButton_Label_C");

	return Clss;
}


// WBP_RadioButton_Label_C WBP_RadioButton_Label.Default__WBP_RadioButton_Label_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RadioButton_Label_C* UWBP_RadioButton_Label_C::GetDefaultObj()
{
	static class UWBP_RadioButton_Label_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RadioButton_Label_C*>(UWBP_RadioButton_Label_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RadioButton_Label.WBP_RadioButton_Label_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RadioButton_Label_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadioButton_Label_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RadioButton_Label.WBP_RadioButton_Label_C.ExecuteUbergraph_WBP_RadioButton_Label
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadioButton_Label_C::ExecuteUbergraph_WBP_RadioButton_Label(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadioButton_Label_C", "ExecuteUbergraph_WBP_RadioButton_Label");

	Params::UWBP_RadioButton_Label_C_ExecuteUbergraph_WBP_RadioButton_Label_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


