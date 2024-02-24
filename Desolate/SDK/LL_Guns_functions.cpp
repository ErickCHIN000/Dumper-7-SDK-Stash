#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Guns.LL_Guns_C
// (Actor)

class UClass* ALL_Guns_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Guns_C");

	return Clss;
}


// LL_Guns_C LL_Guns.Default__LL_Guns_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Guns_C* ALL_Guns_C::GetDefaultObj()
{
	static class ALL_Guns_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Guns_C*>(ALL_Guns_C::StaticClass()->DefaultObject);

	return Default;
}

}


