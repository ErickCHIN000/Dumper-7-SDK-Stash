#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hunter_Controller.Hunter_Controller_C
// (Actor)

class UClass* AHunter_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hunter_Controller_C");

	return Clss;
}


// Hunter_Controller_C Hunter_Controller.Default__Hunter_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHunter_Controller_C* AHunter_Controller_C::GetDefaultObj()
{
	static class AHunter_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHunter_Controller_C*>(AHunter_Controller_C::StaticClass()->DefaultObject);

	return Default;
}

}


