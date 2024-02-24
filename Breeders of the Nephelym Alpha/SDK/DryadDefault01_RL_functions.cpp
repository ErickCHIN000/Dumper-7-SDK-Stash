#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadDefault01_RL.DryadDefault01_RL_C
// (None)

class UClass* UDryadDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadDefault01_RL_C");

	return Clss;
}


// DryadDefault01_RL_C DryadDefault01_RL.Default__DryadDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadDefault01_RL_C* UDryadDefault01_RL_C::GetDefaultObj()
{
	static class UDryadDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadDefault01_RL_C*>(UDryadDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


