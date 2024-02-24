#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_RandomLootCount_UpToSix.Init_RandomLootCount_UpToSix_C
// (None)

class UClass* UInit_RandomLootCount_UpToSix_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_RandomLootCount_UpToSix_C");

	return Clss;
}


// Init_RandomLootCount_UpToSix_C Init_RandomLootCount_UpToSix.Default__Init_RandomLootCount_UpToSix_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_RandomLootCount_UpToSix_C* UInit_RandomLootCount_UpToSix_C::GetDefaultObj()
{
	static class UInit_RandomLootCount_UpToSix_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_RandomLootCount_UpToSix_C*>(UInit_RandomLootCount_UpToSix_C::StaticClass()->DefaultObject);

	return Default;
}

}


