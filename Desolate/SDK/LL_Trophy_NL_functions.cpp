#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Trophy_NL.LL_Trophy_NL_C
// (Actor)

class UClass* ALL_Trophy_NL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Trophy_NL_C");

	return Clss;
}


// LL_Trophy_NL_C LL_Trophy_NL.Default__LL_Trophy_NL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Trophy_NL_C* ALL_Trophy_NL_C::GetDefaultObj()
{
	static class ALL_Trophy_NL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Trophy_NL_C*>(ALL_Trophy_NL_C::StaticClass()->DefaultObject);

	return Default;
}

}


