#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_AI_Leather.LL_AI_Leather_C
// (Actor)

class UClass* ALL_AI_Leather_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_AI_Leather_C");

	return Clss;
}


// LL_AI_Leather_C LL_AI_Leather.Default__LL_AI_Leather_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_AI_Leather_C* ALL_AI_Leather_C::GetDefaultObj()
{
	static class ALL_AI_Leather_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_AI_Leather_C*>(ALL_AI_Leather_C::StaticClass()->DefaultObject);

	return Default;
}

}


