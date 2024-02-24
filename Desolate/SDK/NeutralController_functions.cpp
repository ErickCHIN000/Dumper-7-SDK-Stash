#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeutralController.NeutralController_C
// (Actor)

class UClass* ANeutralController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeutralController_C");

	return Clss;
}


// NeutralController_C NeutralController.Default__NeutralController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANeutralController_C* ANeutralController_C::GetDefaultObj()
{
	static class ANeutralController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANeutralController_C*>(ANeutralController_C::StaticClass()->DefaultObject);

	return Default;
}

}


