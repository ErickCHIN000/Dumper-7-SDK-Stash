#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tincture.Tincture_C
// (Actor)

class UClass* ATincture_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tincture_C");

	return Clss;
}


// Tincture_C Tincture.Default__Tincture_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATincture_C* ATincture_C::GetDefaultObj()
{
	static class ATincture_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATincture_C*>(ATincture_C::StaticClass()->DefaultObject);

	return Default;
}

}


