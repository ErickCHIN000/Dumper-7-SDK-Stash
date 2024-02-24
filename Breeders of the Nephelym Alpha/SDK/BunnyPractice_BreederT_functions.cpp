#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BunnyPractice_BreederT.BunnyPractice_BreederT_C
// (None)

class UClass* UBunnyPractice_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BunnyPractice_BreederT_C");

	return Clss;
}


// BunnyPractice_BreederT_C BunnyPractice_BreederT.Default__BunnyPractice_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBunnyPractice_BreederT_C* UBunnyPractice_BreederT_C::GetDefaultObj()
{
	static class UBunnyPractice_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBunnyPractice_BreederT_C*>(UBunnyPractice_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


