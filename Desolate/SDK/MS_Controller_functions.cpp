#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MS_Controller.MS_Controller_C
// (Actor)

class UClass* AMS_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MS_Controller_C");

	return Clss;
}


// MS_Controller_C MS_Controller.Default__MS_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMS_Controller_C* AMS_Controller_C::GetDefaultObj()
{
	static class AMS_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMS_Controller_C*>(AMS_Controller_C::StaticClass()->DefaultObject);

	return Default;
}

}


