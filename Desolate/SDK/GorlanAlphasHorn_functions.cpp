#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GorlanAlphasHorn.GorlanAlphasHorn_C
// (Actor)

class UClass* AGorlanAlphasHorn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GorlanAlphasHorn_C");

	return Clss;
}


// GorlanAlphasHorn_C GorlanAlphasHorn.Default__GorlanAlphasHorn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGorlanAlphasHorn_C* AGorlanAlphasHorn_C::GetDefaultObj()
{
	static class AGorlanAlphasHorn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGorlanAlphasHorn_C*>(AGorlanAlphasHorn_C::StaticClass()->DefaultObject);

	return Default;
}

}


