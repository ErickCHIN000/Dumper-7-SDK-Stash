#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass YasmineDefault02.YasmineDefault02_C
// (None)

class UClass* UYasmineDefault02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("YasmineDefault02_C");

	return Clss;
}


// YasmineDefault02_C YasmineDefault02.Default__YasmineDefault02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UYasmineDefault02_C* UYasmineDefault02_C::GetDefaultObj()
{
	static class UYasmineDefault02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UYasmineDefault02_C*>(UYasmineDefault02_C::StaticClass()->DefaultObject);

	return Default;
}

}


