#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_HitWindow.ANS_HitWindow_C
// (None)

class UClass* UANS_HitWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_HitWindow_C");

	return Clss;
}


// ANS_HitWindow_C ANS_HitWindow.Default__ANS_HitWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_HitWindow_C* UANS_HitWindow_C::GetDefaultObj()
{
	static class UANS_HitWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_HitWindow_C*>(UANS_HitWindow_C::StaticClass()->DefaultObject);

	return Default;
}

}


