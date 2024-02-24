#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E (0x720 - 0x6E2)
// BlueprintGeneratedClass BP_AoePayload_SunGiant_Eruption.BP_AoePayload_SunGiant_Eruption_C
class ABP_AoePayload_SunGiant_Eruption_C : public ABP_AoePayloadBase_C
{
public:
	uint8                                        Pad_6F6F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     TellEffect;                                        // 0x6F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TellTimeline_TellPct_B581E03E4078B4D6EEC7C99756F37A6F; // 0x6F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TellTimeline__Direction_B581E03E4078B4D6EEC7C99756F37A6F; // 0x6FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TellTimeline;                                      // 0x700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    EruptScopedAk;                                     // 0x708(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                    TransformArray;                                    // 0x710(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_AoePayload_SunGiant_Eruption_C* GetDefaultObj();

	void Trigger_SFX(TArray<struct FVector>& Positions, TArray<struct FTransform>& CallFunc_LocationsToTransforms_Transforms, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, const struct FVector& CallFunc_GetVectorArrayAverage_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Array_IsNotEmpty_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue);
	void TellTimeline__FinishedFunc();
	void TellTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void MulticastTriggerSFX(TArray<struct FVector>& Positions);
	void ExecuteUbergraph_BP_AoePayload_SunGiant_Eruption(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, bool CallFunc_IsDedicatedServer_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue, FDelegateProperty_ Temp_delegate_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, int32 CallFunc_PostAkEvent_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, TArray<struct FVector>& K2Node_CustomEvent_Positions, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_PostAkEvent_ReturnValue_2, double K2Node_VariableSet_TickDamage_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
};

}


