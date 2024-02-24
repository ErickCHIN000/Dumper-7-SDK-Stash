#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeeDefault02_RL.BeeDefault02_RL_C
// (None)

class UClass* UBeeDefault02_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeeDefault02_RL_C");

	return Clss;
}


// BeeDefault02_RL_C BeeDefault02_RL.Default__BeeDefault02_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeeDefault02_RL_C* UBeeDefault02_RL_C::GetDefaultObj()
{
	static class UBeeDefault02_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeeDefault02_RL_C*>(UBeeDefault02_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


