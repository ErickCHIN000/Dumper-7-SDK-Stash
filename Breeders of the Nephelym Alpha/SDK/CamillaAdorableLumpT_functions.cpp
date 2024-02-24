#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaAdorableLumpT.CamillaAdorableLumpT_C
// (None)

class UClass* UCamillaAdorableLumpT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaAdorableLumpT_C");

	return Clss;
}


// CamillaAdorableLumpT_C CamillaAdorableLumpT.Default__CamillaAdorableLumpT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaAdorableLumpT_C* UCamillaAdorableLumpT_C::GetDefaultObj()
{
	static class UCamillaAdorableLumpT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaAdorableLumpT_C*>(UCamillaAdorableLumpT_C::StaticClass()->DefaultObject);

	return Default;
}

}


