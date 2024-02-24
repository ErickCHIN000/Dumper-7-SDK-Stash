#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Sapsy_Controller.Sapsy_Controller_C
// (Actor)

class UClass* ASapsy_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Sapsy_Controller_C");

	return Clss;
}


// Sapsy_Controller_C Sapsy_Controller.Default__Sapsy_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASapsy_Controller_C* ASapsy_Controller_C::GetDefaultObj()
{
	static class ASapsy_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASapsy_Controller_C*>(ASapsy_Controller_C::StaticClass()->DefaultObject);

	return Default;
}

}


