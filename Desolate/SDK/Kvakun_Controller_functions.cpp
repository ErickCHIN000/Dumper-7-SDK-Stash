#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kvakun_Controller.Kvakun_Controller_C
// (Actor)

class UClass* AKvakun_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kvakun_Controller_C");

	return Clss;
}


// Kvakun_Controller_C Kvakun_Controller.Default__Kvakun_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKvakun_Controller_C* AKvakun_Controller_C::GetDefaultObj()
{
	static class AKvakun_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKvakun_Controller_C*>(AKvakun_Controller_C::StaticClass()->DefaultObject);

	return Default;
}

}


