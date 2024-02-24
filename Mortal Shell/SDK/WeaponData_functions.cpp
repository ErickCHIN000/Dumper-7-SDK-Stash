#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponData.WeaponData_C
// (Actor)

class UClass* AWeaponData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponData_C");

	return Clss;
}


// WeaponData_C WeaponData.Default__WeaponData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponData_C* AWeaponData_C::GetDefaultObj()
{
	static class AWeaponData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponData_C*>(AWeaponData_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeaponData.WeaponData_C.Initiate Self-Destruct Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeaponData_C::Initiate_SelfMinusDestruct_Sequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponData_C", "Initiate Self-Destruct Sequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeaponData.WeaponData_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWeaponData_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponData_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeaponData.WeaponData_C.ExecuteUbergraph_WeaponData
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeaponData_C::ExecuteUbergraph_WeaponData(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponData_C", "ExecuteUbergraph_WeaponData");

	Params::AWeaponData_C_ExecuteUbergraph_WeaponData_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


