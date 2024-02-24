#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandit_ThrowItem.Bandit_ThrowItem_C
// (Actor)

class UClass* ABandit_ThrowItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandit_ThrowItem_C");

	return Clss;
}


// Bandit_ThrowItem_C Bandit_ThrowItem.Default__Bandit_ThrowItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandit_ThrowItem_C* ABandit_ThrowItem_C::GetDefaultObj()
{
	static class ABandit_ThrowItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandit_ThrowItem_C*>(ABandit_ThrowItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


