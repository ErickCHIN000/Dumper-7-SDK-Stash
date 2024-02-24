#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFirstPersonConfig_Player.BPFirstPersonConfig_Player_C
// (Actor)

class UClass* ABPFirstPersonConfig_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFirstPersonConfig_Player_C");

	return Clss;
}


// BPFirstPersonConfig_Player_C BPFirstPersonConfig_Player.Default__BPFirstPersonConfig_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPFirstPersonConfig_Player_C* ABPFirstPersonConfig_Player_C::GetDefaultObj()
{
	static class ABPFirstPersonConfig_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPFirstPersonConfig_Player_C*>(ABPFirstPersonConfig_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFirstPersonConfig_Player.BPFirstPersonConfig_Player_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPFirstPersonConfig_Player_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFirstPersonConfig_Player_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


