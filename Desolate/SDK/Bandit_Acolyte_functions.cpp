#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandit_Acolyte.Bandit_Acolyte_C
// (Actor, Pawn)

class UClass* ABandit_Acolyte_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandit_Acolyte_C");

	return Clss;
}


// Bandit_Acolyte_C Bandit_Acolyte.Default__Bandit_Acolyte_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandit_Acolyte_C* ABandit_Acolyte_C::GetDefaultObj()
{
	static class ABandit_Acolyte_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandit_Acolyte_C*>(ABandit_Acolyte_C::StaticClass()->DefaultObject);

	return Default;
}

}


