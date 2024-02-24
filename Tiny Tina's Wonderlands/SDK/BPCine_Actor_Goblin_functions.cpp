#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCine_Actor_Goblin.BPCine_Actor_Goblin_C
// (Actor)

class UClass* ABPCine_Actor_Goblin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCine_Actor_Goblin_C");

	return Clss;
}


// BPCine_Actor_Goblin_C BPCine_Actor_Goblin.Default__BPCine_Actor_Goblin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPCine_Actor_Goblin_C* ABPCine_Actor_Goblin_C::GetDefaultObj()
{
	static class ABPCine_Actor_Goblin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPCine_Actor_Goblin_C*>(ABPCine_Actor_Goblin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPCine_Actor_Goblin.BPCine_Actor_Goblin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPCine_Actor_Goblin_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPCine_Actor_Goblin_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


