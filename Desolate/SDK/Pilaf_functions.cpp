#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pilaf.Pilaf_C
// (Actor)

class UClass* APilaf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pilaf_C");

	return Clss;
}


// Pilaf_C Pilaf.Default__Pilaf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APilaf_C* APilaf_C::GetDefaultObj()
{
	static class APilaf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APilaf_C*>(APilaf_C::StaticClass()->DefaultObject);

	return Default;
}

}


