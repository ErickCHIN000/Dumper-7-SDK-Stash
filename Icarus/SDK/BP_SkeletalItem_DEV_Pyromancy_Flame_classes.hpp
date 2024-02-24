#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x640 - 0x638)
// BlueprintGeneratedClass BP_SkeletalItem_DEV_Pyromancy_Flame.BP_SkeletalItem_DEV_Pyromancy_Flame_C
class ABP_SkeletalItem_DEV_Pyromancy_Flame_C : public ABP_SkeletalItem_Wood_Flare_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x638(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_DEV_Pyromancy_Flame_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SkeletalItem_DEV_Pyromancy_Flame(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


