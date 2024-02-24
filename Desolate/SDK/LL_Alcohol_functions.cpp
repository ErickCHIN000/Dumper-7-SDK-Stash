#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Alcohol.LL_Alcohol_C
// (Actor)

class UClass* ALL_Alcohol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Alcohol_C");

	return Clss;
}


// LL_Alcohol_C LL_Alcohol.Default__LL_Alcohol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Alcohol_C* ALL_Alcohol_C::GetDefaultObj()
{
	static class ALL_Alcohol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Alcohol_C*>(ALL_Alcohol_C::StaticClass()->DefaultObject);

	return Default;
}

}


