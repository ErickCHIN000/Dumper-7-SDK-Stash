#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x399 - 0x390)
// BlueprintGeneratedClass BP_Modifier_Aura_Base.BP_Modifier_Aura_Base_C
class UBP_Modifier_Aura_Base_C : public UModifierStateComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         DebugRender;                                       // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_Modifier_Aura_Base_C* GetDefaultObj();

	bool ModifierRemoved(class UAuraManagerComponent* CallFunc_GetAuraManager_ReturnValue, bool CallFunc_ModifierRemoved_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool ModifierApplied(class UAuraManagerComponent* CallFunc_GetAuraManager_ReturnValue, bool CallFunc_ModifierApplied_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ModifierTick(float DeltaTime);
	void ExecuteUbergraph_BP_Modifier_Aura_Base(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsWithEditor_ReturnValue, class UAuraManagerComponent* CallFunc_GetAuraManager_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaTime);
};

}


