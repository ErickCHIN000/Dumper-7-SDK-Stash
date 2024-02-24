#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeStickyLove_BreederT.MegaSlimeStickyLove_BreederT_C
// (None)

class UClass* UMegaSlimeStickyLove_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeStickyLove_BreederT_C");

	return Clss;
}


// MegaSlimeStickyLove_BreederT_C MegaSlimeStickyLove_BreederT.Default__MegaSlimeStickyLove_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeStickyLove_BreederT_C* UMegaSlimeStickyLove_BreederT_C::GetDefaultObj()
{
	static class UMegaSlimeStickyLove_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeStickyLove_BreederT_C*>(UMegaSlimeStickyLove_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


