#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HatsInventory.HatsInventory_C
// (Actor)

class UClass* AHatsInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HatsInventory_C");

	return Clss;
}


// HatsInventory_C HatsInventory.Default__HatsInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHatsInventory_C* AHatsInventory_C::GetDefaultObj()
{
	static class AHatsInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHatsInventory_C*>(AHatsInventory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HatsInventory.HatsInventory_C.ShouldGiveItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldGiveItems_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHatsInventory_C::ShouldGiveItems(bool* Result, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_ShouldGiveItems_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HatsInventory_C", "ShouldGiveItems");

	Params::AHatsInventory_C_ShouldGiveItems_Params Parms{};

	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_ShouldGiveItems_Result = CallFunc_ShouldGiveItems_Result;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function HatsInventory.HatsInventory_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AHatsInventory_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HatsInventory_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HatsInventory.HatsInventory_C.ExecuteUbergraph_HatsInventory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHatsInventory_C::ExecuteUbergraph_HatsInventory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HatsInventory_C", "ExecuteUbergraph_HatsInventory");

	Params::AHatsInventory_C_ExecuteUbergraph_HatsInventory_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


