#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieToy_BreederF.CassieToy_BreederF_C
// (None)

class UClass* UCassieToy_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieToy_BreederF_C");

	return Clss;
}


// CassieToy_BreederF_C CassieToy_BreederF.Default__CassieToy_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieToy_BreederF_C* UCassieToy_BreederF_C::GetDefaultObj()
{
	static class UCassieToy_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieToy_BreederF_C*>(UCassieToy_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


