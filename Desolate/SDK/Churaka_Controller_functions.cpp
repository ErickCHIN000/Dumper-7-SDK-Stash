#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Churaka_Controller.Churaka_Controller_C
// (Actor)

class UClass* AChuraka_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Churaka_Controller_C");

	return Clss;
}


// Churaka_Controller_C Churaka_Controller.Default__Churaka_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChuraka_Controller_C* AChuraka_Controller_C::GetDefaultObj()
{
	static class AChuraka_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChuraka_Controller_C*>(AChuraka_Controller_C::StaticClass()->DefaultObject);

	return Default;
}

}


