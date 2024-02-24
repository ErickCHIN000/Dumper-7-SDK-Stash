#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x588 - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_BuildingHammer.BP_SkeletalItem_BuildingHammer_C
class ABP_SkeletalItem_BuildingHammer_C : public ASkeletalItem
{
public:
	uint8                                        Pad_5F7D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_UIProjectionComponent_Building_C*  BP_UIProjectionComponent_Building;                 // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_BuildingHammer_C* GetDefaultObj();

	enum class EViewTraceResultPriority BP_SkeletalItem_BuildingHammer_AutoGenFunc(struct FViewTraceResult& Result, enum class EViewTraceResultPriority CallFunc_GetGenericViewTraceResultPriority_ReturnValue);
};

}


