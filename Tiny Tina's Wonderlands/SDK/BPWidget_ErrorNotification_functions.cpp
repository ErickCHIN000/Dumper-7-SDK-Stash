#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWidget_ErrorNotification.BPWidget_ErrorNotification_C
// (None)

class UClass* UBPWidget_ErrorNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWidget_ErrorNotification_C");

	return Clss;
}


// BPWidget_ErrorNotification_C BPWidget_ErrorNotification.Default__BPWidget_ErrorNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWidget_ErrorNotification_C* UBPWidget_ErrorNotification_C::GetDefaultObj()
{
	static class UBPWidget_ErrorNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWidget_ErrorNotification_C*>(UBPWidget_ErrorNotification_C::StaticClass()->DefaultObject);

	return Default;
}

}


