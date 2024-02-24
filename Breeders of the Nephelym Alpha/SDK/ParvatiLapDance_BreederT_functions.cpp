#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiLapDance_BreederT.ParvatiLapDance_BreederT_C
// (None)

class UClass* UParvatiLapDance_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiLapDance_BreederT_C");

	return Clss;
}


// ParvatiLapDance_BreederT_C ParvatiLapDance_BreederT.Default__ParvatiLapDance_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiLapDance_BreederT_C* UParvatiLapDance_BreederT_C::GetDefaultObj()
{
	static class UParvatiLapDance_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiLapDance_BreederT_C*>(UParvatiLapDance_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


