#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MuttHut.MuttHut_C
// (None)

class UClass* UMuttHut_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MuttHut_C");

	return Clss;
}


// MuttHut_C MuttHut.Default__MuttHut_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMuttHut_C* UMuttHut_C::GetDefaultObj()
{
	static class UMuttHut_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMuttHut_C*>(UMuttHut_C::StaticClass()->DefaultObject);

	return Default;
}

}


