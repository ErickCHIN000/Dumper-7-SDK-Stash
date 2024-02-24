#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass YasmineDefault02_RL.YasmineDefault02_RL_C
// (None)

class UClass* UYasmineDefault02_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("YasmineDefault02_RL_C");

	return Clss;
}


// YasmineDefault02_RL_C YasmineDefault02_RL.Default__YasmineDefault02_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UYasmineDefault02_RL_C* UYasmineDefault02_RL_C::GetDefaultObj()
{
	static class UYasmineDefault02_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UYasmineDefault02_RL_C*>(UYasmineDefault02_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


