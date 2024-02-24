#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_MilitarySupplyCrates.Buildable_MilitarySupplyCrates_C
// (Actor)

class UClass* ABuildable_MilitarySupplyCrates_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_MilitarySupplyCrates_C");

	return Clss;
}


// Buildable_MilitarySupplyCrates_C Buildable_MilitarySupplyCrates.Default__Buildable_MilitarySupplyCrates_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_MilitarySupplyCrates_C* ABuildable_MilitarySupplyCrates_C::GetDefaultObj()
{
	static class ABuildable_MilitarySupplyCrates_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_MilitarySupplyCrates_C*>(ABuildable_MilitarySupplyCrates_C::StaticClass()->DefaultObject);

	return Default;
}

}


