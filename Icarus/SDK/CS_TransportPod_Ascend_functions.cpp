#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_TransportPod_Ascend.CS_TransportPod_Ascend_C
// (None)

class UClass* UCS_TransportPod_Ascend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_TransportPod_Ascend_C");

	return Clss;
}


// CS_TransportPod_Ascend_C CS_TransportPod_Ascend.Default__CS_TransportPod_Ascend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_TransportPod_Ascend_C* UCS_TransportPod_Ascend_C::GetDefaultObj()
{
	static class UCS_TransportPod_Ascend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_TransportPod_Ascend_C*>(UCS_TransportPod_Ascend_C::StaticClass()->DefaultObject);

	return Default;
}

}


