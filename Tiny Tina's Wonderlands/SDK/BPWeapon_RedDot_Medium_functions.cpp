#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeapon_RedDot_Medium.BPWeapon_RedDot_Medium_C
// (None)

class UClass* UBPWeapon_RedDot_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeapon_RedDot_Medium_C");

	return Clss;
}


// BPWeapon_RedDot_Medium_C BPWeapon_RedDot_Medium.Default__BPWeapon_RedDot_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWeapon_RedDot_Medium_C* UBPWeapon_RedDot_Medium_C::GetDefaultObj()
{
	static class UBPWeapon_RedDot_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWeapon_RedDot_Medium_C*>(UBPWeapon_RedDot_Medium_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeapon_RedDot_Medium.BPWeapon_RedDot_Medium_C.ExecuteUbergraph_BPWeapon_RedDot_Medium
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPWeapon_RedDot_Medium_C::ExecuteUbergraph_BPWeapon_RedDot_Medium(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeapon_RedDot_Medium_C", "ExecuteUbergraph_BPWeapon_RedDot_Medium");

	Params::UBPWeapon_RedDot_Medium_C_ExecuteUbergraph_BPWeapon_RedDot_Medium_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


