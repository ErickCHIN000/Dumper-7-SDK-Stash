#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaAdorableLump_BreederT.CamillaAdorableLump_BreederT_C
// (None)

class UClass* UCamillaAdorableLump_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaAdorableLump_BreederT_C");

	return Clss;
}


// CamillaAdorableLump_BreederT_C CamillaAdorableLump_BreederT.Default__CamillaAdorableLump_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaAdorableLump_BreederT_C* UCamillaAdorableLump_BreederT_C::GetDefaultObj()
{
	static class UCamillaAdorableLump_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaAdorableLump_BreederT_C*>(UCamillaAdorableLump_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


