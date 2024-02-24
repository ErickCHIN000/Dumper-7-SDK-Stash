#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat7.Hat7_C
// (Actor)

class UClass* AHat7_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat7_C");

	return Clss;
}


// Hat7_C Hat7.Default__Hat7_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat7_C* AHat7_C::GetDefaultObj()
{
	static class AHat7_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat7_C*>(AHat7_C::StaticClass()->DefaultObject);

	return Default;
}

}


