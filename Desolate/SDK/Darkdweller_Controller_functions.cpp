#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Darkdweller_Controller.Darkdweller_Controller_C
// (Actor)

class UClass* ADarkdweller_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Darkdweller_Controller_C");

	return Clss;
}


// Darkdweller_Controller_C Darkdweller_Controller.Default__Darkdweller_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADarkdweller_Controller_C* ADarkdweller_Controller_C::GetDefaultObj()
{
	static class ADarkdweller_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADarkdweller_Controller_C*>(ADarkdweller_Controller_C::StaticClass()->DefaultObject);

	return Default;
}

}


