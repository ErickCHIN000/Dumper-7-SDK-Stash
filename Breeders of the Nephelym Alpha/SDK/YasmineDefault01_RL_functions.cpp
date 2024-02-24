#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass YasmineDefault01_RL.YasmineDefault01_RL_C
// (None)

class UClass* UYasmineDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("YasmineDefault01_RL_C");

	return Clss;
}


// YasmineDefault01_RL_C YasmineDefault01_RL.Default__YasmineDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UYasmineDefault01_RL_C* UYasmineDefault01_RL_C::GetDefaultObj()
{
	static class UYasmineDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UYasmineDefault01_RL_C*>(UYasmineDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


