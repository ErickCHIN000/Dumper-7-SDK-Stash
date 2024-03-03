#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_proxy_interface.bp_proxy_interface_C
// (None)

class UClass* Ibp_proxy_interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_proxy_interface_C");

	return Clss;
}


// bp_proxy_interface_C bp_proxy_interface.Default__bp_proxy_interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ibp_proxy_interface_C* Ibp_proxy_interface_C::GetDefaultObj()
{
	static class Ibp_proxy_interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ibp_proxy_interface_C*>(Ibp_proxy_interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_proxy_interface.bp_proxy_interface_C.receive_snapshot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseSnapshot               Pose_snapshot                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnNode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ibp_proxy_interface_C::Receive_snapshot(const struct FPoseSnapshot& Pose_snapshot, bool* ReturnNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_proxy_interface_C", "receive_snapshot");

	Params::Ibp_proxy_interface_C_Receive_snapshot_Params Parms{};

	Parms.Pose_snapshot = Pose_snapshot;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnNode != nullptr)
		*ReturnNode = Parms.ReturnNode;

}

}


