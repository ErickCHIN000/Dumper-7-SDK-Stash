#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeVerySad.MegaSlimeVerySad_C
// (None)

class UClass* UMegaSlimeVerySad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeVerySad_C");

	return Clss;
}


// MegaSlimeVerySad_C MegaSlimeVerySad.Default__MegaSlimeVerySad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeVerySad_C* UMegaSlimeVerySad_C::GetDefaultObj()
{
	static class UMegaSlimeVerySad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeVerySad_C*>(UMegaSlimeVerySad_C::StaticClass()->DefaultObject);

	return Default;
}

}


