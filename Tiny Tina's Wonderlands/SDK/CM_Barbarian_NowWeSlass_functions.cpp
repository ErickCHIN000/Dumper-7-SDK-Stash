#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CM_Barbarian_NowWeSlass.CM_Barbarian_NowWeSlass_C
// (None)

class UClass* UCM_Barbarian_NowWeSlass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CM_Barbarian_NowWeSlass_C");

	return Clss;
}


// CM_Barbarian_NowWeSlass_C CM_Barbarian_NowWeSlass.Default__CM_Barbarian_NowWeSlass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCM_Barbarian_NowWeSlass_C* UCM_Barbarian_NowWeSlass_C::GetDefaultObj()
{
	static class UCM_Barbarian_NowWeSlass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCM_Barbarian_NowWeSlass_C*>(UCM_Barbarian_NowWeSlass_C::StaticClass()->DefaultObject);

	return Default;
}

}


