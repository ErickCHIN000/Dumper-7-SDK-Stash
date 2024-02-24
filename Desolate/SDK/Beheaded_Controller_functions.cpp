#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Beheaded_Controller.Beheaded_Controller_C
// (Actor)

class UClass* ABeheaded_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Beheaded_Controller_C");

	return Clss;
}


// Beheaded_Controller_C Beheaded_Controller.Default__Beheaded_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABeheaded_Controller_C* ABeheaded_Controller_C::GetDefaultObj()
{
	static class ABeheaded_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABeheaded_Controller_C*>(ABeheaded_Controller_C::StaticClass()->DefaultObject);

	return Default;
}

}


