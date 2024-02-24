#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeVerySad3.MegaSlimeVerySad3_C
// (None)

class UClass* UMegaSlimeVerySad3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeVerySad3_C");

	return Clss;
}


// MegaSlimeVerySad3_C MegaSlimeVerySad3.Default__MegaSlimeVerySad3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeVerySad3_C* UMegaSlimeVerySad3_C::GetDefaultObj()
{
	static class UMegaSlimeVerySad3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeVerySad3_C*>(UMegaSlimeVerySad3_C::StaticClass()->DefaultObject);

	return Default;
}

}


