#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x8A0 - 0x848)
// BlueprintGeneratedClass BP_Zombie_Roamer.BP_Zombie_Roamer_C
class ABP_Zombie_Roamer_C : public ABP_MasterZombie_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x848(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class USkeletalMesh*, class UMaterial*> ArchetypeMeshes;                                   // 0x850(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Zombie_Roamer_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Zombie_Roamer(int32 EntryPoint, int32 CallFunc_RandomIntegerInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_GetFloatCVar_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<class USkeletalMesh*>& CallFunc_Map_Keys_Keys, class USkeletalMesh* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, TArray<class UMaterial*>& CallFunc_Map_Values_Values, class UMaterial* CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


