#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x708 - 0x6F0)
// BlueprintGeneratedClass BP_Bandit-Medjai.BP_Bandit-Medjai_C
class ABP_BanditMinusMedjai_C : public ABP_BaseAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x6F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WeaponMesh;                                        // 0x700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BanditMinusMedjai_C* GetDefaultObj();

	void Death(class ANpc_medjai_C* CallFunc_GetActorOfClass_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void GetMontages(enum class E_MontageAction Action, class UDataTable** Montages);
	void Update_Items();
	void HandleMeshOnDeath();
	void OnCollisionActivated(enum class E_CollisionPart Selection);
	void Respawn();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BanditMinusMedjai(int32 EntryPoint, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, enum class E_CollisionPart K2Node_Event_Selection, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_2);
};

}


