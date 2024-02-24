#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeSlimesMade.MegaSlimeSlimesMade_C
// (None)

class UClass* UMegaSlimeSlimesMade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeSlimesMade_C");

	return Clss;
}


// MegaSlimeSlimesMade_C MegaSlimeSlimesMade.Default__MegaSlimeSlimesMade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeSlimesMade_C* UMegaSlimeSlimesMade_C::GetDefaultObj()
{
	static class UMegaSlimeSlimesMade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeSlimesMade_C*>(UMegaSlimeSlimesMade_C::StaticClass()->DefaultObject);

	return Default;
}

}


