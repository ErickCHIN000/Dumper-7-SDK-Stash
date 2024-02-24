#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_PigSlide.GC_PigSlide_C
// (Actor)

class UClass* AGC_PigSlide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_PigSlide_C");

	return Clss;
}


// GC_PigSlide_C GC_PigSlide.Default__GC_PigSlide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_PigSlide_C* AGC_PigSlide_C::GetDefaultObj()
{
	static class AGC_PigSlide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_PigSlide_C*>(AGC_PigSlide_C::StaticClass()->DefaultObject);

	return Default;
}

}


