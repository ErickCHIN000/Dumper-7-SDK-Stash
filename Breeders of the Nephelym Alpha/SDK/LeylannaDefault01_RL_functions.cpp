#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDefault01_RL.LeylannaDefault01_RL_C
// (None)

class UClass* ULeylannaDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDefault01_RL_C");

	return Clss;
}


// LeylannaDefault01_RL_C LeylannaDefault01_RL.Default__LeylannaDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDefault01_RL_C* ULeylannaDefault01_RL_C::GetDefaultObj()
{
	static class ULeylannaDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDefault01_RL_C*>(ULeylannaDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


