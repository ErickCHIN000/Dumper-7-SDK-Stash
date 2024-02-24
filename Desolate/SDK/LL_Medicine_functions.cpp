#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Medicine.LL_Medicine_C
// (Actor)

class UClass* ALL_Medicine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Medicine_C");

	return Clss;
}


// LL_Medicine_C LL_Medicine.Default__LL_Medicine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Medicine_C* ALL_Medicine_C::GetDefaultObj()
{
	static class ALL_Medicine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Medicine_C*>(ALL_Medicine_C::StaticClass()->DefaultObject);

	return Default;
}

}


