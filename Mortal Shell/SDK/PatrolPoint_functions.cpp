#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PatrolPoint.PatrolPoint_C
// (Actor)

class UClass* APatrolPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatrolPoint_C");

	return Clss;
}


// PatrolPoint_C PatrolPoint.Default__PatrolPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APatrolPoint_C* APatrolPoint_C::GetDefaultObj()
{
	static class APatrolPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APatrolPoint_C*>(APatrolPoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


