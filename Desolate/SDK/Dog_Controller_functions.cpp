#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dog_Controller.Dog_Controller_C
// (Actor)

class UClass* ADog_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dog_Controller_C");

	return Clss;
}


// Dog_Controller_C Dog_Controller.Default__Dog_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADog_Controller_C* ADog_Controller_C::GetDefaultObj()
{
	static class ADog_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADog_Controller_C*>(ADog_Controller_C::StaticClass()->DefaultObject);

	return Default;
}

}


