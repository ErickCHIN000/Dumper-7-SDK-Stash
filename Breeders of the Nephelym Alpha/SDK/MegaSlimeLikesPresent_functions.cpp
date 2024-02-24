#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeLikesPresent.MegaSlimeLikesPresent_C
// (None)

class UClass* UMegaSlimeLikesPresent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeLikesPresent_C");

	return Clss;
}


// MegaSlimeLikesPresent_C MegaSlimeLikesPresent.Default__MegaSlimeLikesPresent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeLikesPresent_C* UMegaSlimeLikesPresent_C::GetDefaultObj()
{
	static class UMegaSlimeLikesPresent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeLikesPresent_C*>(UMegaSlimeLikesPresent_C::StaticClass()->DefaultObject);

	return Default;
}

}


