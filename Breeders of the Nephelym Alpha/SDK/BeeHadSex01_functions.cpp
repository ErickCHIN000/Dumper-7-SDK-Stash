#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeeHadSex01.BeeHadSex01_C
// (None)

class UClass* UBeeHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeeHadSex01_C");

	return Clss;
}


// BeeHadSex01_C BeeHadSex01.Default__BeeHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeeHadSex01_C* UBeeHadSex01_C::GetDefaultObj()
{
	static class UBeeHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeeHadSex01_C*>(UBeeHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


