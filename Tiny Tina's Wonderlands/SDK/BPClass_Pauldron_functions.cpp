#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPClass_Pauldron.BPClass_Pauldron_C
// (Actor)

class UClass* ABPClass_Pauldron_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPClass_Pauldron_C");

	return Clss;
}


// BPClass_Pauldron_C BPClass_Pauldron.Default__BPClass_Pauldron_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPClass_Pauldron_C* ABPClass_Pauldron_C::GetDefaultObj()
{
	static class ABPClass_Pauldron_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPClass_Pauldron_C*>(ABPClass_Pauldron_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPClass_Pauldron.BPClass_Pauldron_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPClass_Pauldron_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPClass_Pauldron_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


