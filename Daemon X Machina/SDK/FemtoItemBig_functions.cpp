#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FemtoItemBig.FemtoItemBig_C
// (Actor)

class UClass* AFemtoItemBig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FemtoItemBig_C");

	return Clss;
}


// FemtoItemBig_C FemtoItemBig.Default__FemtoItemBig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFemtoItemBig_C* AFemtoItemBig_C::GetDefaultObj()
{
	static class AFemtoItemBig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFemtoItemBig_C*>(AFemtoItemBig_C::StaticClass()->DefaultObject);

	return Default;
}

}


