#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Tchochkes.LL_Tchochkes_C
// (Actor)

class UClass* ALL_Tchochkes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Tchochkes_C");

	return Clss;
}


// LL_Tchochkes_C LL_Tchochkes.Default__LL_Tchochkes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Tchochkes_C* ALL_Tchochkes_C::GetDefaultObj()
{
	static class ALL_Tchochkes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Tchochkes_C*>(ALL_Tchochkes_C::StaticClass()->DefaultObject);

	return Default;
}

}


