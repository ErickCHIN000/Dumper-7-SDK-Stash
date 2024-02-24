#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OverworldInterface.OverworldInterface_C
// (Actor)

class UClass* AOverworldInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OverworldInterface_C");

	return Clss;
}


// OverworldInterface_C OverworldInterface.Default__OverworldInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOverworldInterface_C* AOverworldInterface_C::GetDefaultObj()
{
	static class AOverworldInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOverworldInterface_C*>(AOverworldInterface_C::StaticClass()->DefaultObject);

	return Default;
}

}


