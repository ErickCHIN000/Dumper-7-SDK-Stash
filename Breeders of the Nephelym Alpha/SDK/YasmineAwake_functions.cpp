#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass YasmineAwake.YasmineAwake_C
// (None)

class UClass* UYasmineAwake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("YasmineAwake_C");

	return Clss;
}


// YasmineAwake_C YasmineAwake.Default__YasmineAwake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UYasmineAwake_C* UYasmineAwake_C::GetDefaultObj()
{
	static class UYasmineAwake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UYasmineAwake_C*>(UYasmineAwake_C::StaticClass()->DefaultObject);

	return Default;
}

}


