#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiLapDance_BreederF.ParvatiLapDance_BreederF_C
// (None)

class UClass* UParvatiLapDance_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiLapDance_BreederF_C");

	return Clss;
}


// ParvatiLapDance_BreederF_C ParvatiLapDance_BreederF.Default__ParvatiLapDance_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiLapDance_BreederF_C* UParvatiLapDance_BreederF_C::GetDefaultObj()
{
	static class UParvatiLapDance_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiLapDance_BreederF_C*>(UParvatiLapDance_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


