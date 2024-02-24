#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_MoneySafe.Buildable_MoneySafe_C
// (Actor)

class UClass* ABuildable_MoneySafe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_MoneySafe_C");

	return Clss;
}


// Buildable_MoneySafe_C Buildable_MoneySafe.Default__Buildable_MoneySafe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_MoneySafe_C* ABuildable_MoneySafe_C::GetDefaultObj()
{
	static class ABuildable_MoneySafe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_MoneySafe_C*>(ABuildable_MoneySafe_C::StaticClass()->DefaultObject);

	return Default;
}

}


