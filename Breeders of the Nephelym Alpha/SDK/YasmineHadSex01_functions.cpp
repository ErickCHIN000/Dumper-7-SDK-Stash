#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass YasmineHadSex01.YasmineHadSex01_C
// (None)

class UClass* UYasmineHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("YasmineHadSex01_C");

	return Clss;
}


// YasmineHadSex01_C YasmineHadSex01.Default__YasmineHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UYasmineHadSex01_C* UYasmineHadSex01_C::GetDefaultObj()
{
	static class UYasmineHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UYasmineHadSex01_C*>(UYasmineHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


