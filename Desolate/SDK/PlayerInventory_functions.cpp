#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerInventory.PlayerInventory_C
// (Actor)

class UClass* APlayerInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerInventory_C");

	return Clss;
}


// PlayerInventory_C PlayerInventory.Default__PlayerInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayerInventory_C* APlayerInventory_C::GetDefaultObj()
{
	static class APlayerInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerInventory_C*>(APlayerInventory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerInventory.PlayerInventory_C.ShouldGiveItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldGiveItems_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerInventory_C::ShouldGiveItems(bool* Result, bool CallFunc_ShouldGiveItems_Result, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInventory_C", "ShouldGiveItems");

	Params::APlayerInventory_C_ShouldGiveItems_Params Parms{};

	Parms.CallFunc_ShouldGiveItems_Result = CallFunc_ShouldGiveItems_Result;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function PlayerInventory.PlayerInventory_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlayerInventory_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInventory_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerInventory.PlayerInventory_C.ExecuteUbergraph_PlayerInventory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerInventory_C::ExecuteUbergraph_PlayerInventory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInventory_C", "ExecuteUbergraph_PlayerInventory");

	Params::APlayerInventory_C_ExecuteUbergraph_PlayerInventory_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


