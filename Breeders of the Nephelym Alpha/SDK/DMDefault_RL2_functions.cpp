#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMDefault_RL2.DMDefault_RL2_C
// (None)

class UClass* UDMDefault_RL2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMDefault_RL2_C");

	return Clss;
}


// DMDefault_RL2_C DMDefault_RL2.Default__DMDefault_RL2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMDefault_RL2_C* UDMDefault_RL2_C::GetDefaultObj()
{
	static class UDMDefault_RL2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMDefault_RL2_C*>(UDMDefault_RL2_C::StaticClass()->DefaultObject);

	return Default;
}

}


