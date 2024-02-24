#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GuruPortal.GuruPortal_C
// (Actor)

class UClass* AGuruPortal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GuruPortal_C");

	return Clss;
}


// GuruPortal_C GuruPortal.Default__GuruPortal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGuruPortal_C* AGuruPortal_C::GetDefaultObj()
{
	static class AGuruPortal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGuruPortal_C*>(AGuruPortal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GuruPortal.GuruPortal_C.OnActivate
// (Event, Public, BlueprintEvent)
// Parameters:

void AGuruPortal_C::OnActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GuruPortal_C", "OnActivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuruPortal.GuruPortal_C.OnDeactivate
// (Event, Public, BlueprintEvent)
// Parameters:

void AGuruPortal_C::OnDeactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GuruPortal_C", "OnDeactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuruPortal.GuruPortal_C.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void AGuruPortal_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GuruPortal_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuruPortal.GuruPortal_C.ExecuteUbergraph_GuruPortal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)

void AGuruPortal_C::ExecuteUbergraph_GuruPortal(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GuruPortal_C", "ExecuteUbergraph_GuruPortal");

	Params::AGuruPortal_C_ExecuteUbergraph_GuruPortal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


