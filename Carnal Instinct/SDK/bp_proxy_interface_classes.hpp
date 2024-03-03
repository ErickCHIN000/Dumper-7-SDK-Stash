#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass bp_proxy_interface.bp_proxy_interface_C
class Ibp_proxy_interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class Ibp_proxy_interface_C* GetDefaultObj();

	void Receive_snapshot(const struct FPoseSnapshot& Pose_snapshot, bool* ReturnNode);
};

}


