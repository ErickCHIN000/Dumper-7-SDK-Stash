#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Trophy_Sapsy.LL_Trophy_Sapsy_C
// (Actor)

class UClass* ALL_Trophy_Sapsy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Trophy_Sapsy_C");

	return Clss;
}


// LL_Trophy_Sapsy_C LL_Trophy_Sapsy.Default__LL_Trophy_Sapsy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Trophy_Sapsy_C* ALL_Trophy_Sapsy_C::GetDefaultObj()
{
	static class ALL_Trophy_Sapsy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Trophy_Sapsy_C*>(ALL_Trophy_Sapsy_C::StaticClass()->DefaultObject);

	return Default;
}

}


