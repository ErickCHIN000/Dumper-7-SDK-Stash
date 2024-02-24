#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PuckTarget.PuckTarget_C
// (Actor)

class UClass* APuckTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PuckTarget_C");

	return Clss;
}


// PuckTarget_C PuckTarget.Default__PuckTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APuckTarget_C* APuckTarget_C::GetDefaultObj()
{
	static class APuckTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APuckTarget_C*>(APuckTarget_C::StaticClass()->DefaultObject);

	return Default;
}

}


