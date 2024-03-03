#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_LevelingExpBar.WB_LevelingExpBar_C
// (None)

class UClass* UWB_LevelingExpBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_LevelingExpBar_C");

	return Clss;
}


// WB_LevelingExpBar_C WB_LevelingExpBar.Default__WB_LevelingExpBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_LevelingExpBar_C* UWB_LevelingExpBar_C::GetDefaultObj()
{
	static class UWB_LevelingExpBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_LevelingExpBar_C*>(UWB_LevelingExpBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_LevelingExpBar.WB_LevelingExpBar_C.Get Percent Progress Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWB_LevelingExpBar_C::Get_Percent_Progress_Value()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LevelingExpBar_C", "Get Percent Progress Value");

	Params::UWB_LevelingExpBar_C_Get_Percent_Progress_Value_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_LevelingExpBar.WB_LevelingExpBar_C.Get Player Limit Exp as Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_LevelingExpBar_C::Get_Player_Limit_Exp_as_Text(class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LevelingExpBar_C", "Get Player Limit Exp as Text");

	Params::UWB_LevelingExpBar_C_Get_Player_Limit_Exp_as_Text_Params Parms{};

	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_LevelingExpBar.WB_LevelingExpBar_C.Get Player Current Exp as Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_LevelingExpBar_C::Get_Player_Current_Exp_as_Text(class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LevelingExpBar_C", "Get Player Current Exp as Text");

	Params::UWB_LevelingExpBar_C_Get_Player_Current_Exp_as_Text_Params Parms{};

	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_LevelingExpBar.WB_LevelingExpBar_C.Get Player Level as Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UWB_LevelingExpBar_C::Get_Player_Level_as_Text(class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LevelingExpBar_C", "Get Player Level as Text");

	Params::UWB_LevelingExpBar_C_Get_Player_Level_as_Text_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_LevelingExpBar.WB_LevelingExpBar_C.Event Refresh Parameters
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_LevelingExpBar_C::Event_Refresh_Parameters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LevelingExpBar_C", "Event Refresh Parameters");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LevelingExpBar.WB_LevelingExpBar_C.Setup Event Dispatchers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_LevelingExpBar_C::Setup_Event_Dispatchers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LevelingExpBar_C", "Setup Event Dispatchers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LevelingExpBar.WB_LevelingExpBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_LevelingExpBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LevelingExpBar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LevelingExpBar.WB_LevelingExpBar_C.Refresh Progress Value
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_LevelingExpBar_C::Refresh_Progress_Value()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LevelingExpBar_C", "Refresh Progress Value");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LevelingExpBar.WB_LevelingExpBar_C.ExecuteUbergraph_WB_LevelingExpBar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAC_Leveling_C*              CallFunc_Get_AC_Leveling_Return_Value                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LevelingExpBar_C::ExecuteUbergraph_WB_LevelingExpBar(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAC_Leveling_C* CallFunc_Get_AC_Leveling_Return_Value, float CallFunc_NormalizeToRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LevelingExpBar_C", "ExecuteUbergraph_WB_LevelingExpBar");

	Params::UWB_LevelingExpBar_C_ExecuteUbergraph_WB_LevelingExpBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Get_AC_Leveling_Return_Value = CallFunc_Get_AC_Leveling_Return_Value;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


