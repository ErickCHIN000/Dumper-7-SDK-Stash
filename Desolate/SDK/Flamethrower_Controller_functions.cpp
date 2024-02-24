#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Flamethrower_Controller.Flamethrower_Controller_C
// (Actor)

class UClass* AFlamethrower_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Flamethrower_Controller_C");

	return Clss;
}


// Flamethrower_Controller_C Flamethrower_Controller.Default__Flamethrower_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFlamethrower_Controller_C* AFlamethrower_Controller_C::GetDefaultObj()
{
	static class AFlamethrower_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFlamethrower_Controller_C*>(AFlamethrower_Controller_C::StaticClass()->DefaultObject);

	return Default;
}

}


