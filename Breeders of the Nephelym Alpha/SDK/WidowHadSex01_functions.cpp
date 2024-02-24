#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WidowHadSex01.WidowHadSex01_C
// (None)

class UClass* UWidowHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidowHadSex01_C");

	return Clss;
}


// WidowHadSex01_C WidowHadSex01.Default__WidowHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidowHadSex01_C* UWidowHadSex01_C::GetDefaultObj()
{
	static class UWidowHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidowHadSex01_C*>(UWidowHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


