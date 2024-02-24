#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_AI_Meat.LL_AI_Meat_C
// (Actor)

class UClass* ALL_AI_Meat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_AI_Meat_C");

	return Clss;
}


// LL_AI_Meat_C LL_AI_Meat.Default__LL_AI_Meat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_AI_Meat_C* ALL_AI_Meat_C::GetDefaultObj()
{
	static class ALL_AI_Meat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_AI_Meat_C*>(ALL_AI_Meat_C::StaticClass()->DefaultObject);

	return Default;
}

}


