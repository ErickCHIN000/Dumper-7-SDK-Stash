#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InfiniteStamina.GE_InfiniteStamina_C
// (None)

class UClass* UGE_InfiniteStamina_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InfiniteStamina_C");

	return Clss;
}


// GE_InfiniteStamina_C GE_InfiniteStamina.Default__GE_InfiniteStamina_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InfiniteStamina_C* UGE_InfiniteStamina_C::GetDefaultObj()
{
	static class UGE_InfiniteStamina_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InfiniteStamina_C*>(UGE_InfiniteStamina_C::StaticClass()->DefaultObject);

	return Default;
}

}


