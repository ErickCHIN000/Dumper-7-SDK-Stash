#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeDefault01.MegaSlimeDefault01_C
// (None)

class UClass* UMegaSlimeDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeDefault01_C");

	return Clss;
}


// MegaSlimeDefault01_C MegaSlimeDefault01.Default__MegaSlimeDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeDefault01_C* UMegaSlimeDefault01_C::GetDefaultObj()
{
	static class UMegaSlimeDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeDefault01_C*>(UMegaSlimeDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


