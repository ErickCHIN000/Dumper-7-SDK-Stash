#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x708 - 0x6F0)
// BlueprintGeneratedClass BP_Veranus_AI.BP_Veranus_AI_C
class ABP_Veranus_AI_C : public ABP_BaseAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  ShieldMesh;                                        // 0x6F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SwordMesh;                                         // 0x700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Veranus_AI_C* GetDefaultObj();

	void Death(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void GetMontages(enum class E_MontageAction Action, class UDataTable** Montages);
	void Update_Items();
	void HandleMeshOnDeath();
	void OnCollisionActivated(enum class E_CollisionPart Selection);
	void Respawn();
	void ExecuteUbergraph_BP_Veranus_AI(int32 EntryPoint, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_3, enum class E_CollisionPart K2Node_Event_Selection, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_4, bool CallFunc_K2_AttachToComponent_ReturnValue_5);
};

}


