#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_RandomLootCount_UpToFour.Init_RandomLootCount_UpToFour_C
// (None)

class UClass* UInit_RandomLootCount_UpToFour_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_RandomLootCount_UpToFour_C");

	return Clss;
}


// Init_RandomLootCount_UpToFour_C Init_RandomLootCount_UpToFour.Default__Init_RandomLootCount_UpToFour_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_RandomLootCount_UpToFour_C* UInit_RandomLootCount_UpToFour_C::GetDefaultObj()
{
	static class UInit_RandomLootCount_UpToFour_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_RandomLootCount_UpToFour_C*>(UInit_RandomLootCount_UpToFour_C::StaticClass()->DefaultObject);

	return Default;
}

}


