#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass YasmineDefault01.YasmineDefault01_C
// (None)

class UClass* UYasmineDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("YasmineDefault01_C");

	return Clss;
}


// YasmineDefault01_C YasmineDefault01.Default__YasmineDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UYasmineDefault01_C* UYasmineDefault01_C::GetDefaultObj()
{
	static class UYasmineDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UYasmineDefault01_C*>(UYasmineDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


