#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_CommonItems.LL_CommonItems_C
// (Actor)

class UClass* ALL_CommonItems_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_CommonItems_C");

	return Clss;
}


// LL_CommonItems_C LL_CommonItems.Default__LL_CommonItems_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_CommonItems_C* ALL_CommonItems_C::GetDefaultObj()
{
	static class ALL_CommonItems_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_CommonItems_C*>(ALL_CommonItems_C::StaticClass()->DefaultObject);

	return Default;
}

}


