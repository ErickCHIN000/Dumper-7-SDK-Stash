#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x708 - 0x6F0)
// BlueprintGeneratedClass BP_AnubiteAI-Guard.BP_AnubiteAI-Guard_C
class ABP_AnubiteAIMinusGuard_C : public ABP_BaseAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  ShieldMesh;                                        // 0x6F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WeaponMesh;                                        // 0x700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AnubiteAIMinusGuard_C* GetDefaultObj();

	bool CanBeBackstabbed();
	void Death(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void GetMontages(enum class E_MontageAction Action, class UDataTable** Montages, bool K2Node_SwitchEnum_CmpSuccess);
	void UserConstructionScript(int32 CallFunc_RandomIntegerInRange_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue_2);
	void Update_Items();
	void HandleMeshOnDeath();
	void OnCollisionActivated(enum class E_CollisionPart Selection);
	void Respawn();
	void ExecuteUbergraph_BP_AnubiteAIMinusGuard(int32 EntryPoint, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_3, enum class E_CollisionPart K2Node_Event_Selection, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_4, bool CallFunc_K2_AttachToComponent_ReturnValue_5, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_K2_AttachToComponent_ReturnValue_6, bool CallFunc_K2_AttachToComponent_ReturnValue_7, bool CallFunc_K2_AttachToComponent_ReturnValue_8, bool CallFunc_K2_AttachToComponent_ReturnValue_9);
};

}


