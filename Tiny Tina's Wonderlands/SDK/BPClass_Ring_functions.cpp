#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPClass_Ring.BPClass_Ring_C
// (Actor)

class UClass* ABPClass_Ring_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPClass_Ring_C");

	return Clss;
}


// BPClass_Ring_C BPClass_Ring.Default__BPClass_Ring_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPClass_Ring_C* ABPClass_Ring_C::GetDefaultObj()
{
	static class ABPClass_Ring_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPClass_Ring_C*>(ABPClass_Ring_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPClass_Ring.BPClass_Ring_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPClass_Ring_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPClass_Ring_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


