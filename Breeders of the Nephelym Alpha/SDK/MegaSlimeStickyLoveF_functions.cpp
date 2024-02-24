#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeStickyLoveF.MegaSlimeStickyLoveF_C
// (None)

class UClass* UMegaSlimeStickyLoveF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeStickyLoveF_C");

	return Clss;
}


// MegaSlimeStickyLoveF_C MegaSlimeStickyLoveF.Default__MegaSlimeStickyLoveF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeStickyLoveF_C* UMegaSlimeStickyLoveF_C::GetDefaultObj()
{
	static class UMegaSlimeStickyLoveF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeStickyLoveF_C*>(UMegaSlimeStickyLoveF_C::StaticClass()->DefaultObject);

	return Default;
}

}


