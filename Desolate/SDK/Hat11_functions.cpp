#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat11.Hat11_C
// (Actor)

class UClass* AHat11_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat11_C");

	return Clss;
}


// Hat11_C Hat11.Default__Hat11_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat11_C* AHat11_C::GetDefaultObj()
{
	static class AHat11_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat11_C*>(AHat11_C::StaticClass()->DefaultObject);

	return Default;
}

}


