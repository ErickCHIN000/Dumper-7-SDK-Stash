#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieToy_BreederT.CassieToy_BreederT_C
// (None)

class UClass* UCassieToy_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieToy_BreederT_C");

	return Clss;
}


// CassieToy_BreederT_C CassieToy_BreederT.Default__CassieToy_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieToy_BreederT_C* UCassieToy_BreederT_C::GetDefaultObj()
{
	static class UCassieToy_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieToy_BreederT_C*>(UCassieToy_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


