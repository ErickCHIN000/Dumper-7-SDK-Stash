#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPChar_StandIn_Player_Banner.BPChar_StandIn_Player_Banner_C
// (Actor, Pawn)

class UClass* ABPChar_StandIn_Player_Banner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPChar_StandIn_Player_Banner_C");

	return Clss;
}


// BPChar_StandIn_Player_Banner_C BPChar_StandIn_Player_Banner.Default__BPChar_StandIn_Player_Banner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPChar_StandIn_Player_Banner_C* ABPChar_StandIn_Player_Banner_C::GetDefaultObj()
{
	static class ABPChar_StandIn_Player_Banner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPChar_StandIn_Player_Banner_C*>(ABPChar_StandIn_Player_Banner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPChar_StandIn_Player_Banner.BPChar_StandIn_Player_Banner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_Banner_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_Banner_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


