#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruHadSex01T.MirruHadSex01T_C
// (None)

class UClass* UMirruHadSex01T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruHadSex01T_C");

	return Clss;
}


// MirruHadSex01T_C MirruHadSex01T.Default__MirruHadSex01T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruHadSex01T_C* UMirruHadSex01T_C::GetDefaultObj()
{
	static class UMirruHadSex01T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruHadSex01T_C*>(UMirruHadSex01T_C::StaticClass()->DefaultObject);

	return Default;
}

}


