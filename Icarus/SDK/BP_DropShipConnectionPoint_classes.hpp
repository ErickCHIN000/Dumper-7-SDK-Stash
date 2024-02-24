#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x5A0 - 0x590)
// BlueprintGeneratedClass BP_DropShipConnectionPoint.BP_DropShipConnectionPoint_C
class ABP_DropShipConnectionPoint_C : public AIcarusRocketPartConnector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x590(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Sphere;                                            // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DropShipConnectionPoint_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnConnectionUpdated();
	void ExecuteUbergraph_BP_DropShipConnectionPoint(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsConnected_ReturnValue);
};

}


