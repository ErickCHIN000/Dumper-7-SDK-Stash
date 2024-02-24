#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Wine.Wine_C
// (Actor)

class UClass* AWine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wine_C");

	return Clss;
}


// Wine_C Wine.Default__Wine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWine_C* AWine_C::GetDefaultObj()
{
	static class AWine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWine_C*>(AWine_C::StaticClass()->DefaultObject);

	return Default;
}

}


