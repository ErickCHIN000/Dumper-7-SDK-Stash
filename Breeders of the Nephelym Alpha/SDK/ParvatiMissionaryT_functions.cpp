#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiMissionaryT.ParvatiMissionaryT_C
// (None)

class UClass* UParvatiMissionaryT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiMissionaryT_C");

	return Clss;
}


// ParvatiMissionaryT_C ParvatiMissionaryT.Default__ParvatiMissionaryT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiMissionaryT_C* UParvatiMissionaryT_C::GetDefaultObj()
{
	static class UParvatiMissionaryT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiMissionaryT_C*>(UParvatiMissionaryT_C::StaticClass()->DefaultObject);

	return Default;
}

}


