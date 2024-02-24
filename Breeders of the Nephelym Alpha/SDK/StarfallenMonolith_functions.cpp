#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StarfallenMonolith.StarfallenMonolith_C
// (None)

class UClass* UStarfallenMonolith_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StarfallenMonolith_C");

	return Clss;
}


// StarfallenMonolith_C StarfallenMonolith.Default__StarfallenMonolith_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStarfallenMonolith_C* UStarfallenMonolith_C::GetDefaultObj()
{
	static class UStarfallenMonolith_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStarfallenMonolith_C*>(UStarfallenMonolith_C::StaticClass()->DefaultObject);

	return Default;
}

}


