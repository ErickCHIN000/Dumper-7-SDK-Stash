#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaTheTemple_RL.LeylannaTheTemple_RL_C
// (None)

class UClass* ULeylannaTheTemple_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaTheTemple_RL_C");

	return Clss;
}


// LeylannaTheTemple_RL_C LeylannaTheTemple_RL.Default__LeylannaTheTemple_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaTheTemple_RL_C* ULeylannaTheTemple_RL_C::GetDefaultObj()
{
	static class ULeylannaTheTemple_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaTheTemple_RL_C*>(ULeylannaTheTemple_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


