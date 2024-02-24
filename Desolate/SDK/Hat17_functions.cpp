#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat17.Hat17_C
// (Actor)

class UClass* AHat17_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat17_C");

	return Clss;
}


// Hat17_C Hat17.Default__Hat17_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat17_C* AHat17_C::GetDefaultObj()
{
	static class AHat17_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat17_C*>(AHat17_C::StaticClass()->DefaultObject);

	return Default;
}

}


