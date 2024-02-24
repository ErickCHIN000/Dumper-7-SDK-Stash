#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlindManBossRoom.BlindManBossRoom_C
// (Actor)

class UClass* ABlindManBossRoom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlindManBossRoom_C");

	return Clss;
}


// BlindManBossRoom_C BlindManBossRoom.Default__BlindManBossRoom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlindManBossRoom_C* ABlindManBossRoom_C::GetDefaultObj()
{
	static class ABlindManBossRoom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlindManBossRoom_C*>(ABlindManBossRoom_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BlindManBossRoom.BlindManBossRoom_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABlindManBossRoom_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlindManBossRoom_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BlindManBossRoom.BlindManBossRoom_C.ExecuteUbergraph_BlindManBossRoom
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABlindManBossRoom_C::ExecuteUbergraph_BlindManBossRoom(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlindManBossRoom_C", "ExecuteUbergraph_BlindManBossRoom");

	Params::ABlindManBossRoom_C_ExecuteUbergraph_BlindManBossRoom_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


