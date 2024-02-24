#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeAboutOrb.MegaSlimeAboutOrb_C
// (None)

class UClass* UMegaSlimeAboutOrb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeAboutOrb_C");

	return Clss;
}


// MegaSlimeAboutOrb_C MegaSlimeAboutOrb.Default__MegaSlimeAboutOrb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeAboutOrb_C* UMegaSlimeAboutOrb_C::GetDefaultObj()
{
	static class UMegaSlimeAboutOrb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeAboutOrb_C*>(UMegaSlimeAboutOrb_C::StaticClass()->DefaultObject);

	return Default;
}

}


