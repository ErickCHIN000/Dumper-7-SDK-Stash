#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaAdorableLump_BreederF.CamillaAdorableLump_BreederF_C
// (None)

class UClass* UCamillaAdorableLump_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaAdorableLump_BreederF_C");

	return Clss;
}


// CamillaAdorableLump_BreederF_C CamillaAdorableLump_BreederF.Default__CamillaAdorableLump_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaAdorableLump_BreederF_C* UCamillaAdorableLump_BreederF_C::GetDefaultObj()
{
	static class UCamillaAdorableLump_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaAdorableLump_BreederF_C*>(UCamillaAdorableLump_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


