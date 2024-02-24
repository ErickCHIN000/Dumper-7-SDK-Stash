#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Crafting_Stats_Entry_Small.wid_Crafting_Stats_Entry_Small_C
// (None)

class UClass* UWid_Crafting_Stats_Entry_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Crafting_Stats_Entry_Small_C");

	return Clss;
}


// wid_Crafting_Stats_Entry_Small_C wid_Crafting_Stats_Entry_Small.Default__wid_Crafting_Stats_Entry_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Crafting_Stats_Entry_Small_C* UWid_Crafting_Stats_Entry_Small_C::GetDefaultObj()
{
	static class UWid_Crafting_Stats_Entry_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Crafting_Stats_Entry_Small_C*>(UWid_Crafting_Stats_Entry_Small_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Crafting_Stats_Entry_Small.wid_Crafting_Stats_Entry_Small_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StatName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Fill                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Crafting_Stats_Entry_Small_C::Update(class FText StatName, int32 Fill, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_Abs_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UProgressBar* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Crafting_Stats_Entry_Small_C", "Update");

	Params::UWid_Crafting_Stats_Entry_Small_C_Update_Params Parms{};

	Parms.StatName = StatName;
	Parms.Fill = Fill;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


