#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WallrunTutorial.WallrunTutorial_C
// (Actor)

class UClass* AWallrunTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WallrunTutorial_C");

	return Clss;
}


// WallrunTutorial_C WallrunTutorial.Default__WallrunTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWallrunTutorial_C* AWallrunTutorial_C::GetDefaultObj()
{
	static class AWallrunTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWallrunTutorial_C*>(AWallrunTutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


