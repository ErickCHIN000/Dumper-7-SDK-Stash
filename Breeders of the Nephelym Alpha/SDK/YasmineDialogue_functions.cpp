#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass YasmineDialogue.YasmineDialogue_C
// (None)

class UClass* UYasmineDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("YasmineDialogue_C");

	return Clss;
}


// YasmineDialogue_C YasmineDialogue.Default__YasmineDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UYasmineDialogue_C* UYasmineDialogue_C::GetDefaultObj()
{
	static class UYasmineDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UYasmineDialogue_C*>(UYasmineDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


