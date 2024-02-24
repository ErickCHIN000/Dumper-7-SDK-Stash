#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KeyCard_BunkerVanoga.KeyCard_BunkerVanoga_C
// (Actor)

class UClass* AKeyCard_BunkerVanoga_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyCard_BunkerVanoga_C");

	return Clss;
}


// KeyCard_BunkerVanoga_C KeyCard_BunkerVanoga.Default__KeyCard_BunkerVanoga_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKeyCard_BunkerVanoga_C* AKeyCard_BunkerVanoga_C::GetDefaultObj()
{
	static class AKeyCard_BunkerVanoga_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKeyCard_BunkerVanoga_C*>(AKeyCard_BunkerVanoga_C::StaticClass()->DefaultObject);

	return Default;
}

}


