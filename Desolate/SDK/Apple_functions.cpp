#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Apple.Apple_C
// (Actor)

class UClass* AApple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Apple_C");

	return Clss;
}


// Apple_C Apple.Default__Apple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AApple_C* AApple_C::GetDefaultObj()
{
	static class AApple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AApple_C*>(AApple_C::StaticClass()->DefaultObject);

	return Default;
}

}


