#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMDefault_RL3.DMDefault_RL3_C
// (None)

class UClass* UDMDefault_RL3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMDefault_RL3_C");

	return Clss;
}


// DMDefault_RL3_C DMDefault_RL3.Default__DMDefault_RL3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMDefault_RL3_C* UDMDefault_RL3_C::GetDefaultObj()
{
	static class UDMDefault_RL3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMDefault_RL3_C*>(UDMDefault_RL3_C::StaticClass()->DefaultObject);

	return Default;
}

}


