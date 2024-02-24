#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaAdorableLumpF.CamillaAdorableLumpF_C
// (None)

class UClass* UCamillaAdorableLumpF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaAdorableLumpF_C");

	return Clss;
}


// CamillaAdorableLumpF_C CamillaAdorableLumpF.Default__CamillaAdorableLumpF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaAdorableLumpF_C* UCamillaAdorableLumpF_C::GetDefaultObj()
{
	static class UCamillaAdorableLumpF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaAdorableLumpF_C*>(UCamillaAdorableLumpF_C::StaticClass()->DefaultObject);

	return Default;
}

}


