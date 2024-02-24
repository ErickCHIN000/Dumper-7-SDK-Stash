#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeHadSex02.MegaSlimeHadSex02_C
// (None)

class UClass* UMegaSlimeHadSex02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeHadSex02_C");

	return Clss;
}


// MegaSlimeHadSex02_C MegaSlimeHadSex02.Default__MegaSlimeHadSex02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeHadSex02_C* UMegaSlimeHadSex02_C::GetDefaultObj()
{
	static class UMegaSlimeHadSex02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeHadSex02_C*>(UMegaSlimeHadSex02_C::StaticClass()->DefaultObject);

	return Default;
}

}


