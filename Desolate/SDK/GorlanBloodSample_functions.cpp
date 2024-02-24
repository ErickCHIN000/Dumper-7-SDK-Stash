#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GorlanBloodSample.GorlanBloodSample_C
// (Actor)

class UClass* AGorlanBloodSample_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GorlanBloodSample_C");

	return Clss;
}


// GorlanBloodSample_C GorlanBloodSample.Default__GorlanBloodSample_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGorlanBloodSample_C* AGorlanBloodSample_C::GetDefaultObj()
{
	static class AGorlanBloodSample_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGorlanBloodSample_C*>(AGorlanBloodSample_C::StaticClass()->DefaultObject);

	return Default;
}

}


