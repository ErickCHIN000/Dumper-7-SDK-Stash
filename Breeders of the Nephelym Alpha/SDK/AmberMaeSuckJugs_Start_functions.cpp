#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMaeSuckJugs_Start.AmberMaeSuckJugs_Start_C
// (None)

class UClass* UAmberMaeSuckJugs_Start_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMaeSuckJugs_Start_C");

	return Clss;
}


// AmberMaeSuckJugs_Start_C AmberMaeSuckJugs_Start.Default__AmberMaeSuckJugs_Start_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMaeSuckJugs_Start_C* UAmberMaeSuckJugs_Start_C::GetDefaultObj()
{
	static class UAmberMaeSuckJugs_Start_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMaeSuckJugs_Start_C*>(UAmberMaeSuckJugs_Start_C::StaticClass()->DefaultObject);

	return Default;
}

}


