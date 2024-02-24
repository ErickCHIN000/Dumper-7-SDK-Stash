#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeelaDefault01_YourVoid_RL.NeelaDefault01_YourVoid_RL_C
// (None)

class UClass* UNeelaDefault01_YourVoid_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaDefault01_YourVoid_RL_C");

	return Clss;
}


// NeelaDefault01_YourVoid_RL_C NeelaDefault01_YourVoid_RL.Default__NeelaDefault01_YourVoid_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaDefault01_YourVoid_RL_C* UNeelaDefault01_YourVoid_RL_C::GetDefaultObj()
{
	static class UNeelaDefault01_YourVoid_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaDefault01_YourVoid_RL_C*>(UNeelaDefault01_YourVoid_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


