#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Inventory_Stats_Entry.wid_Inventory_Stats_Entry_C
// (None)

class UClass* UWid_Inventory_Stats_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Inventory_Stats_Entry_C");

	return Clss;
}


// wid_Inventory_Stats_Entry_C wid_Inventory_Stats_Entry.Default__wid_Inventory_Stats_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Inventory_Stats_Entry_C* UWid_Inventory_Stats_Entry_C::GetDefaultObj()
{
	static class UWid_Inventory_Stats_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Inventory_Stats_Entry_C*>(UWid_Inventory_Stats_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Inventory_Stats_Entry.wid_Inventory_Stats_Entry_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StatName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              Fill                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FormatText_Output                                       (None)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_Stats_Entry_C::Update(class FText StatName, float Fill, bool Temp_bool_Variable, float CallFunc_Abs_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText CallFunc_FormatText_Output, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UProgressBar* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Stats_Entry_C", "Update");

	Params::UWid_Inventory_Stats_Entry_C_Update_Params Parms{};

	Parms.StatName = StatName;
	Parms.Fill = Fill;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


