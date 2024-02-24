#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BatSemenNM_R.BatSemenNM_R_C
// (None)

class UClass* UBatSemenNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BatSemenNM_R_C");

	return Clss;
}


// BatSemenNM_R_C BatSemenNM_R.Default__BatSemenNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBatSemenNM_R_C* UBatSemenNM_R_C::GetDefaultObj()
{
	static class UBatSemenNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBatSemenNM_R_C*>(UBatSemenNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


