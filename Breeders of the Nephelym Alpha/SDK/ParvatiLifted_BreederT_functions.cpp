#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiLifted_BreederT.ParvatiLifted_BreederT_C
// (None)

class UClass* UParvatiLifted_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiLifted_BreederT_C");

	return Clss;
}


// ParvatiLifted_BreederT_C ParvatiLifted_BreederT.Default__ParvatiLifted_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiLifted_BreederT_C* UParvatiLifted_BreederT_C::GetDefaultObj()
{
	static class UParvatiLifted_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiLifted_BreederT_C*>(UParvatiLifted_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


