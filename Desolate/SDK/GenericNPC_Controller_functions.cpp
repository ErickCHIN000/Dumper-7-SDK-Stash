#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericNPC_Controller.GenericNPC_Controller_C
// (Actor)

class UClass* AGenericNPC_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericNPC_Controller_C");

	return Clss;
}


// GenericNPC_Controller_C GenericNPC_Controller.Default__GenericNPC_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericNPC_Controller_C* AGenericNPC_Controller_C::GetDefaultObj()
{
	static class AGenericNPC_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericNPC_Controller_C*>(AGenericNPC_Controller_C::StaticClass()->DefaultObject);

	return Default;
}

}


