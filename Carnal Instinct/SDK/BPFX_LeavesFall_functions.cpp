#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFX_LeavesFall.BPFX_LeavesFall_C
// (Actor)

class UClass* ABPFX_LeavesFall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFX_LeavesFall_C");

	return Clss;
}


// BPFX_LeavesFall_C BPFX_LeavesFall.Default__BPFX_LeavesFall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPFX_LeavesFall_C* ABPFX_LeavesFall_C::GetDefaultObj()
{
	static class ABPFX_LeavesFall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPFX_LeavesFall_C*>(ABPFX_LeavesFall_C::StaticClass()->DefaultObject);

	return Default;
}

}


