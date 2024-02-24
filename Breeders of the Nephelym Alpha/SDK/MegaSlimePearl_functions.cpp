#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimePearl.MegaSlimePearl_C
// (None)

class UClass* UMegaSlimePearl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimePearl_C");

	return Clss;
}


// MegaSlimePearl_C MegaSlimePearl.Default__MegaSlimePearl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimePearl_C* UMegaSlimePearl_C::GetDefaultObj()
{
	static class UMegaSlimePearl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimePearl_C*>(UMegaSlimePearl_C::StaticClass()->DefaultObject);

	return Default;
}

}


