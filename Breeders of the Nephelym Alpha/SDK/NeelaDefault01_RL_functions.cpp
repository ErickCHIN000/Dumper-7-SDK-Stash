#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeelaDefault01_RL.NeelaDefault01_RL_C
// (None)

class UClass* UNeelaDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaDefault01_RL_C");

	return Clss;
}


// NeelaDefault01_RL_C NeelaDefault01_RL.Default__NeelaDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaDefault01_RL_C* UNeelaDefault01_RL_C::GetDefaultObj()
{
	static class UNeelaDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaDefault01_RL_C*>(UNeelaDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


