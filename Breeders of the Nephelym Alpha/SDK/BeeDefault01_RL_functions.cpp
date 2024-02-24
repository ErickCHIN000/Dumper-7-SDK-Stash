#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeeDefault01_RL.BeeDefault01_RL_C
// (None)

class UClass* UBeeDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeeDefault01_RL_C");

	return Clss;
}


// BeeDefault01_RL_C BeeDefault01_RL.Default__BeeDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeeDefault01_RL_C* UBeeDefault01_RL_C::GetDefaultObj()
{
	static class UBeeDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeeDefault01_RL_C*>(UBeeDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


