#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiMissionary_BreederT.ParvatiMissionary_BreederT_C
// (None)

class UClass* UParvatiMissionary_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiMissionary_BreederT_C");

	return Clss;
}


// ParvatiMissionary_BreederT_C ParvatiMissionary_BreederT.Default__ParvatiMissionary_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiMissionary_BreederT_C* UParvatiMissionary_BreederT_C::GetDefaultObj()
{
	static class UParvatiMissionary_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiMissionary_BreederT_C*>(UParvatiMissionary_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


