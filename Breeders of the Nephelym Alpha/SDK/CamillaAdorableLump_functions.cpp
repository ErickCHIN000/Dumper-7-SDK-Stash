#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaAdorableLump.CamillaAdorableLump_C
// (None)

class UClass* UCamillaAdorableLump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaAdorableLump_C");

	return Clss;
}


// CamillaAdorableLump_C CamillaAdorableLump.Default__CamillaAdorableLump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaAdorableLump_C* UCamillaAdorableLump_C::GetDefaultObj()
{
	static class UCamillaAdorableLump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaAdorableLump_C*>(UCamillaAdorableLump_C::StaticClass()->DefaultObject);

	return Default;
}

}


