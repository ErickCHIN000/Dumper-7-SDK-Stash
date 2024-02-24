#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CathedralPowerBook.CathedralPowerBook_C
// (Actor)

class UClass* ACathedralPowerBook_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CathedralPowerBook_C");

	return Clss;
}


// CathedralPowerBook_C CathedralPowerBook.Default__CathedralPowerBook_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACathedralPowerBook_C* ACathedralPowerBook_C::GetDefaultObj()
{
	static class ACathedralPowerBook_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACathedralPowerBook_C*>(ACathedralPowerBook_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CathedralPowerBook.CathedralPowerBook_C.Burn!
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACathedralPowerBook_C::Burn_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CathedralPowerBook_C", "Burn!");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CathedralPowerBook.CathedralPowerBook_C.ExecuteUbergraph_CathedralPowerBook
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACathedralPowerBook_C::ExecuteUbergraph_CathedralPowerBook(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CathedralPowerBook_C", "ExecuteUbergraph_CathedralPowerBook");

	Params::ACathedralPowerBook_C_ExecuteUbergraph_CathedralPowerBook_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


