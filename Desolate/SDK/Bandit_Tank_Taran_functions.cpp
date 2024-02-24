#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandit_Tank_Taran.Bandit_Tank_Taran_C
// (Actor)

class UClass* ABandit_Tank_Taran_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandit_Tank_Taran_C");

	return Clss;
}


// Bandit_Tank_Taran_C Bandit_Tank_Taran.Default__Bandit_Tank_Taran_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandit_Tank_Taran_C* ABandit_Tank_Taran_C::GetDefaultObj()
{
	static class ABandit_Tank_Taran_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandit_Tank_Taran_C*>(ABandit_Tank_Taran_C::StaticClass()->DefaultObject);

	return Default;
}

}


