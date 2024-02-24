#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericLootItem.GenericLootItem_C
// (Actor)

class UClass* AGenericLootItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericLootItem_C");

	return Clss;
}


// GenericLootItem_C GenericLootItem.Default__GenericLootItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericLootItem_C* AGenericLootItem_C::GetDefaultObj()
{
	static class AGenericLootItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericLootItem_C*>(AGenericLootItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericLootItem.GenericLootItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGenericLootItem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericLootItem_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericLootItem.GenericLootItem_C.ExecuteUbergraph_GenericLootItem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericLootItem_C::ExecuteUbergraph_GenericLootItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericLootItem_C", "ExecuteUbergraph_GenericLootItem");

	Params::AGenericLootItem_C_ExecuteUbergraph_GenericLootItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


