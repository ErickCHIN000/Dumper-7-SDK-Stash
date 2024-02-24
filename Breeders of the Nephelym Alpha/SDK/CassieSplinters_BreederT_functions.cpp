#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieSplinters_BreederT.CassieSplinters_BreederT_C
// (None)

class UClass* UCassieSplinters_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieSplinters_BreederT_C");

	return Clss;
}


// CassieSplinters_BreederT_C CassieSplinters_BreederT.Default__CassieSplinters_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieSplinters_BreederT_C* UCassieSplinters_BreederT_C::GetDefaultObj()
{
	static class UCassieSplinters_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieSplinters_BreederT_C*>(UCassieSplinters_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


