#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieDefault01_RL.CassieDefault01_RL_C
// (None)

class UClass* UCassieDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieDefault01_RL_C");

	return Clss;
}


// CassieDefault01_RL_C CassieDefault01_RL.Default__CassieDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieDefault01_RL_C* UCassieDefault01_RL_C::GetDefaultObj()
{
	static class UCassieDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieDefault01_RL_C*>(UCassieDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


