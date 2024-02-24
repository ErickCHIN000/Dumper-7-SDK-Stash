#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiMissionaryF.ParvatiMissionaryF_C
// (None)

class UClass* UParvatiMissionaryF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiMissionaryF_C");

	return Clss;
}


// ParvatiMissionaryF_C ParvatiMissionaryF.Default__ParvatiMissionaryF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiMissionaryF_C* UParvatiMissionaryF_C::GetDefaultObj()
{
	static class UParvatiMissionaryF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiMissionaryF_C*>(UParvatiMissionaryF_C::StaticClass()->DefaultObject);

	return Default;
}

}


