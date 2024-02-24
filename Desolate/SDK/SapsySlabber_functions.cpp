#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SapsySlabber.SapsySlabber_C
// (Actor)

class UClass* ASapsySlabber_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SapsySlabber_C");

	return Clss;
}


// SapsySlabber_C SapsySlabber.Default__SapsySlabber_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASapsySlabber_C* ASapsySlabber_C::GetDefaultObj()
{
	static class ASapsySlabber_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASapsySlabber_C*>(ASapsySlabber_C::StaticClass()->DefaultObject);

	return Default;
}

}


