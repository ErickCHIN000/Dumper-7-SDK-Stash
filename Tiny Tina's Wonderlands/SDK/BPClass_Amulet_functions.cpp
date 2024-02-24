#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPClass_Amulet.BPClass_Amulet_C
// (Actor)

class UClass* ABPClass_Amulet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPClass_Amulet_C");

	return Clss;
}


// BPClass_Amulet_C BPClass_Amulet.Default__BPClass_Amulet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPClass_Amulet_C* ABPClass_Amulet_C::GetDefaultObj()
{
	static class ABPClass_Amulet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPClass_Amulet_C*>(ABPClass_Amulet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPClass_Amulet.BPClass_Amulet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPClass_Amulet_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPClass_Amulet_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


