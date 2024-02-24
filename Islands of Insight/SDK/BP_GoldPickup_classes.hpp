#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2B8 - 0x290)
// BlueprintGeneratedClass BP_GoldPickup.BP_GoldPickup_C
class ABP_GoldPickup_C : public AGoldPickup
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Colour;                                            // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        SpawnSystem;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GoldPickup_C* GetDefaultObj();

	void BPI_OnPickup();
	void BPI_OnStartAnimation(struct FLinearColor& Col);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_GoldPickup(int32 EntryPoint, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, uint8 Temp_byte_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const struct FLinearColor& K2Node_Event_col, float K2Node_Event_DeltaSeconds, float CallFunc_FClamp_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_1, class ASophiaPlayerState* K2Node_DynamicCast_AsSophia_Player_State, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_GetTeam_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
};

}


