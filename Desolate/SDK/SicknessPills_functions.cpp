#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SicknessPills.SicknessPills_C
// (Actor)

class UClass* ASicknessPills_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SicknessPills_C");

	return Clss;
}


// SicknessPills_C SicknessPills.Default__SicknessPills_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASicknessPills_C* ASicknessPills_C::GetDefaultObj()
{
	static class ASicknessPills_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASicknessPills_C*>(ASicknessPills_C::StaticClass()->DefaultObject);

	return Default;
}

}


