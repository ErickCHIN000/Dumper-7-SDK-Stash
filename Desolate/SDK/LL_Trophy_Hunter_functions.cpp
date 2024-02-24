#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Trophy_Hunter.LL_Trophy_Hunter_C
// (Actor)

class UClass* ALL_Trophy_Hunter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Trophy_Hunter_C");

	return Clss;
}


// LL_Trophy_Hunter_C LL_Trophy_Hunter.Default__LL_Trophy_Hunter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Trophy_Hunter_C* ALL_Trophy_Hunter_C::GetDefaultObj()
{
	static class ALL_Trophy_Hunter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Trophy_Hunter_C*>(ALL_Trophy_Hunter_C::StaticClass()->DefaultObject);

	return Default;
}

}


