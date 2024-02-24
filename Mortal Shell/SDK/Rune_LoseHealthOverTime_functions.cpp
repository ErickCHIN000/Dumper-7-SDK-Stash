#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_LoseHealthOverTime.Rune_LoseHealthOverTime_C
// (None)

class UClass* URune_LoseHealthOverTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_LoseHealthOverTime_C");

	return Clss;
}


// Rune_LoseHealthOverTime_C Rune_LoseHealthOverTime.Default__Rune_LoseHealthOverTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_LoseHealthOverTime_C* URune_LoseHealthOverTime_C::GetDefaultObj()
{
	static class URune_LoseHealthOverTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_LoseHealthOverTime_C*>(URune_LoseHealthOverTime_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_LoseHealthOverTime.Rune_LoseHealthOverTime_C.ShouldRemoveHealth_Char
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Remove                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_LoseHealthOverTime_C::ShouldRemoveHealth_Char(bool* Remove, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LoseHealthOverTime_C", "ShouldRemoveHealth_Char");

	Params::URune_LoseHealthOverTime_C_ShouldRemoveHealth_Char_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Remove != nullptr)
		*Remove = Parms.Remove;

}


// Function Rune_LoseHealthOverTime.Rune_LoseHealthOverTime_C.ShouldRemoveHealth_PC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Remove                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_LoseHealthOverTime_C::ShouldRemoveHealth_PC(bool* Remove, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LoseHealthOverTime_C", "ShouldRemoveHealth_PC");

	Params::URune_LoseHealthOverTime_C_ShouldRemoveHealth_PC_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Remove != nullptr)
		*Remove = Parms.Remove;

}


// Function Rune_LoseHealthOverTime.Rune_LoseHealthOverTime_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_LoseHealthOverTime_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LoseHealthOverTime_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_LoseHealthOverTime.Rune_LoseHealthOverTime_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_LoseHealthOverTime_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LoseHealthOverTime_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_LoseHealthOverTime.Rune_LoseHealthOverTime_C.LoseHealOverTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_LoseHealthOverTime_C::LoseHealOverTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LoseHealthOverTime_C", "LoseHealOverTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_LoseHealthOverTime.Rune_LoseHealthOverTime_C.ExecuteUbergraph_Rune_LoseHealthOverTime
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldRemoveHealth_Char_Remove                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldRemoveHealth_PC_Remove                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_LoseHealthOverTime_C::ExecuteUbergraph_Rune_LoseHealthOverTime(int32 EntryPoint, bool CallFunc_ShouldRemoveHealth_Char_Remove, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_ShouldRemoveHealth_PC_Remove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LoseHealthOverTime_C", "ExecuteUbergraph_Rune_LoseHealthOverTime");

	Params::URune_LoseHealthOverTime_C_ExecuteUbergraph_Rune_LoseHealthOverTime_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ShouldRemoveHealth_Char_Remove = CallFunc_ShouldRemoveHealth_Char_Remove;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_ShouldRemoveHealth_PC_Remove = CallFunc_ShouldRemoveHealth_PC_Remove;

	UObject::ProcessEvent(Func, &Parms);

}

}


