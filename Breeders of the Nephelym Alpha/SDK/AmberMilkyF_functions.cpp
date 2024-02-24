#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMilkyF.AmberMilkyF_C
// (None)

class UClass* UAmberMilkyF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMilkyF_C");

	return Clss;
}


// AmberMilkyF_C AmberMilkyF.Default__AmberMilkyF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMilkyF_C* UAmberMilkyF_C::GetDefaultObj()
{
	static class UAmberMilkyF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMilkyF_C*>(UAmberMilkyF_C::StaticClass()->DefaultObject);

	return Default;
}

}


