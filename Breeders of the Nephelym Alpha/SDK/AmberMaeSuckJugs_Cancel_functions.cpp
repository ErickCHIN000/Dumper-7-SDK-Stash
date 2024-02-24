#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMaeSuckJugs_Cancel.AmberMaeSuckJugs_Cancel_C
// (None)

class UClass* UAmberMaeSuckJugs_Cancel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMaeSuckJugs_Cancel_C");

	return Clss;
}


// AmberMaeSuckJugs_Cancel_C AmberMaeSuckJugs_Cancel.Default__AmberMaeSuckJugs_Cancel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMaeSuckJugs_Cancel_C* UAmberMaeSuckJugs_Cancel_C::GetDefaultObj()
{
	static class UAmberMaeSuckJugs_Cancel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMaeSuckJugs_Cancel_C*>(UAmberMaeSuckJugs_Cancel_C::StaticClass()->DefaultObject);

	return Default;
}

}


