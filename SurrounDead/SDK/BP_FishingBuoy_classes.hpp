#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2B0 - 0x2A0)
// BlueprintGeneratedClass BP_FishingBuoy.BP_FishingBuoy_C
class ABP_FishingBuoy_C : public ABP_MasterObject_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Bait;                                              // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FishingBuoy_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_IsPackagedForDistribution_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FishingBuoy(int32 EntryPoint, double CallFunc_RandomFloatInRange_ReturnValue, enum class EMoveComponentAction Temp_byte_Variable, enum class EMoveComponentAction Temp_byte_Variable_1, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_MoveComponentTo_OverTime_ImplicitCast, float CallFunc_MoveComponentTo_OverTime_ImplicitCast_1);
};

}


