#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMDefault_RL4.DMDefault_RL4_C
// (None)

class UClass* UDMDefault_RL4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMDefault_RL4_C");

	return Clss;
}


// DMDefault_RL4_C DMDefault_RL4.Default__DMDefault_RL4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMDefault_RL4_C* UDMDefault_RL4_C::GetDefaultObj()
{
	static class UDMDefault_RL4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMDefault_RL4_C*>(UDMDefault_RL4_C::StaticClass()->DefaultObject);

	return Default;
}

}


