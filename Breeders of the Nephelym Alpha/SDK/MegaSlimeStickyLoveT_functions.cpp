#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeStickyLoveT.MegaSlimeStickyLoveT_C
// (None)

class UClass* UMegaSlimeStickyLoveT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeStickyLoveT_C");

	return Clss;
}


// MegaSlimeStickyLoveT_C MegaSlimeStickyLoveT.Default__MegaSlimeStickyLoveT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeStickyLoveT_C* UMegaSlimeStickyLoveT_C::GetDefaultObj()
{
	static class UMegaSlimeStickyLoveT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeStickyLoveT_C*>(UMegaSlimeStickyLoveT_C::StaticClass()->DefaultObject);

	return Default;
}

}


