#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMaeDefault01_SuckJugs.AmberMaeDefault01_SuckJugs_C
// (None)

class UClass* UAmberMaeDefault01_SuckJugs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMaeDefault01_SuckJugs_C");

	return Clss;
}


// AmberMaeDefault01_SuckJugs_C AmberMaeDefault01_SuckJugs.Default__AmberMaeDefault01_SuckJugs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMaeDefault01_SuckJugs_C* UAmberMaeDefault01_SuckJugs_C::GetDefaultObj()
{
	static class UAmberMaeDefault01_SuckJugs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMaeDefault01_SuckJugs_C*>(UAmberMaeDefault01_SuckJugs_C::StaticClass()->DefaultObject);

	return Default;
}

}


