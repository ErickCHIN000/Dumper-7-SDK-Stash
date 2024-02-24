#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_RandomLootCount_Lots.Init_RandomLootCount_Lots_C
// (None)

class UClass* UInit_RandomLootCount_Lots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_RandomLootCount_Lots_C");

	return Clss;
}


// Init_RandomLootCount_Lots_C Init_RandomLootCount_Lots.Default__Init_RandomLootCount_Lots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_RandomLootCount_Lots_C* UInit_RandomLootCount_Lots_C::GetDefaultObj()
{
	static class UInit_RandomLootCount_Lots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_RandomLootCount_Lots_C*>(UInit_RandomLootCount_Lots_C::StaticClass()->DefaultObject);

	return Default;
}

}


