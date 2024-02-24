#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeapon_Scope_Short.BPWeapon_Scope_Short_C
// (None)

class UClass* UBPWeapon_Scope_Short_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeapon_Scope_Short_C");

	return Clss;
}


// BPWeapon_Scope_Short_C BPWeapon_Scope_Short.Default__BPWeapon_Scope_Short_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWeapon_Scope_Short_C* UBPWeapon_Scope_Short_C::GetDefaultObj()
{
	static class UBPWeapon_Scope_Short_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWeapon_Scope_Short_C*>(UBPWeapon_Scope_Short_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeapon_Scope_Short.BPWeapon_Scope_Short_C.ExecuteUbergraph_BPWeapon_Scope_Short
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPWeapon_Scope_Short_C::ExecuteUbergraph_BPWeapon_Scope_Short(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeapon_Scope_Short_C", "ExecuteUbergraph_BPWeapon_Scope_Short");

	Params::UBPWeapon_Scope_Short_C_ExecuteUbergraph_BPWeapon_Scope_Short_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


