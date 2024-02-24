#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruHadSex01.MirruHadSex01_C
// (None)

class UClass* UMirruHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruHadSex01_C");

	return Clss;
}


// MirruHadSex01_C MirruHadSex01.Default__MirruHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruHadSex01_C* UMirruHadSex01_C::GetDefaultObj()
{
	static class UMirruHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruHadSex01_C*>(UMirruHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


