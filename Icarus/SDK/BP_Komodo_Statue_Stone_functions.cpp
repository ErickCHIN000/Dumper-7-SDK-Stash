#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Komodo_Statue_Stone.BP_Komodo_Statue_Stone_C
// (Actor)

class UClass* ABP_Komodo_Statue_Stone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Komodo_Statue_Stone_C");

	return Clss;
}


// BP_Komodo_Statue_Stone_C BP_Komodo_Statue_Stone.Default__BP_Komodo_Statue_Stone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Komodo_Statue_Stone_C* ABP_Komodo_Statue_Stone_C::GetDefaultObj()
{
	static class ABP_Komodo_Statue_Stone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Komodo_Statue_Stone_C*>(ABP_Komodo_Statue_Stone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Komodo_Statue_Stone.BP_Komodo_Statue_Stone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Komodo_Statue_Stone_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Komodo_Statue_Stone_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Komodo_Statue_Stone.BP_Komodo_Statue_Stone_C.ExecuteUbergraph_BP_Komodo_Statue_Stone
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Komodo_Statue_Stone_C::ExecuteUbergraph_BP_Komodo_Statue_Stone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Komodo_Statue_Stone_C", "ExecuteUbergraph_BP_Komodo_Statue_Stone");

	Params::ABP_Komodo_Statue_Stone_C_ExecuteUbergraph_BP_Komodo_Statue_Stone_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


