#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Water.LL_Water_C
// (Actor)

class UClass* ALL_Water_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Water_C");

	return Clss;
}


// LL_Water_C LL_Water.Default__LL_Water_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Water_C* ALL_Water_C::GetDefaultObj()
{
	static class ALL_Water_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Water_C*>(ALL_Water_C::StaticClass()->DefaultObject);

	return Default;
}

}


