#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vanoga_Controller.Vanoga_Controller_C
// (Actor)

class UClass* AVanoga_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vanoga_Controller_C");

	return Clss;
}


// Vanoga_Controller_C Vanoga_Controller.Default__Vanoga_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVanoga_Controller_C* AVanoga_Controller_C::GetDefaultObj()
{
	static class AVanoga_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVanoga_Controller_C*>(AVanoga_Controller_C::StaticClass()->DefaultObject);

	return Default;
}

}


