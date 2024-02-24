#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FinishAttackEarly.FinishAttackEarly_C
// (None)

class UClass* UFinishAttackEarly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FinishAttackEarly_C");

	return Clss;
}


// FinishAttackEarly_C FinishAttackEarly.Default__FinishAttackEarly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFinishAttackEarly_C* UFinishAttackEarly_C::GetDefaultObj()
{
	static class UFinishAttackEarly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFinishAttackEarly_C*>(UFinishAttackEarly_C::StaticClass()->DefaultObject);

	return Default;
}

}


