#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ItemToCarry.GA_ItemToCarry_C
// (None)

class UClass* UGA_ItemToCarry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ItemToCarry_C");

	return Clss;
}


// GA_ItemToCarry_C GA_ItemToCarry.Default__GA_ItemToCarry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ItemToCarry_C* UGA_ItemToCarry_C::GetDefaultObj()
{
	static class UGA_ItemToCarry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ItemToCarry_C*>(UGA_ItemToCarry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_ItemToCarry.GA_ItemToCarry_C.ExecuteUbergraph_GA_ItemToCarry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ItemToCarry_C::ExecuteUbergraph_GA_ItemToCarry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ItemToCarry_C", "ExecuteUbergraph_GA_ItemToCarry");

	Params::UGA_ItemToCarry_C_ExecuteUbergraph_GA_ItemToCarry_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


