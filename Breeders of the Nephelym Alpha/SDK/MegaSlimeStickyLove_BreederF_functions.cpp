#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeStickyLove_BreederF.MegaSlimeStickyLove_BreederF_C
// (None)

class UClass* UMegaSlimeStickyLove_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeStickyLove_BreederF_C");

	return Clss;
}


// MegaSlimeStickyLove_BreederF_C MegaSlimeStickyLove_BreederF.Default__MegaSlimeStickyLove_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeStickyLove_BreederF_C* UMegaSlimeStickyLove_BreederF_C::GetDefaultObj()
{
	static class UMegaSlimeStickyLove_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeStickyLove_BreederF_C*>(UMegaSlimeStickyLove_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


