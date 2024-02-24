#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x340 - 0x310)
// BlueprintGeneratedClass BPTrapBear_Troll.BPTrapBear_Troll_C
class ABPTrapBear_Troll_C : public ABPTrapBear_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class AWaifuNPC_C>            PrankyWaifu;                                       // 0x318(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPTrapBear_Troll_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Trap_Activated();
	void ExecuteUbergraph_BPTrapBear_Troll(int32 EntryPoint, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_IsMyNameInChangedSet_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AWaifuNPC_C* K2Node_DynamicCast_AsWaifu_NPC, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}


